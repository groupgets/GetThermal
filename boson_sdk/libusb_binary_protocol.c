//#include "UART_HalfDuplex.h"
#include <libusb-1.0/libusb.h>
#include "flirCRC.h"
#include "flirChannels.h"

#include <stdio.h>

#ifdef Q_OS_WIN32

#include <Windows.h>
#define CLOCK_MONOTONIC 0
struct timespec { long tv_sec; long tv_nsec; };    //header part
int clock_gettime(int _ignore, struct timespec *spec)      //C-file part
{
    __int64 wintime; GetSystemTimeAsFileTime((FILETIME*)&wintime);
    wintime      -=116444736000000000L;  //1jan1601 to 1jan1970
    spec->tv_sec  =wintime / 10000000L;           //seconds
    spec->tv_nsec =wintime % 10000000L *100;      //nano-seconds
    return 0;
}

double difftime(long current, long reference)
{
    return ((double)current - (double)reference);
}

#else

#include <time.h>
#include <unistd.h>
#include <sys/time.h>

#endif


// #define DEBUGPRINT

/* We use a global variable to keep the device handle
 */
static struct libusb_device_handle *devh = NULL;

/* The Endpoint address are hard coded. You should use lsusb -v to find
 * the values corresponding to your device.
 */
static int EP_IN_ADDR  = 0x82;
static int EP_OUT_ADDR = 0x01;
static int IF_CDC_DATA = 3;

#define ESCAPE_BYTE        0x9E
#define START_FRAME_BYTE   0x8E
#define END_FRAME_BYTE     0xAE
#define ESCAPED_ESCAPE_BYTE        0x91
#define ESCAPED_START_FRAME_BYTE   0x81
#define ESCAPED_END_FRAME_BYTE     0xA1

#define NUM_FRAMING_BYTES 3
#define FRAME_START_IDX 1
#define CRC_START_IDX 0

#define FRAME_BUF_SIZ      2048

#define FRAME_TIMEOUT_SEC   2.000
#define POLL_TIMEOUT_SEC   0.025
#define BYTE_TIMEOUT_SEC    0.005

static uint8_t in_frame_buf[FRAME_BUF_SIZ];
static uint8_t out_frame_buf[FRAME_BUF_SIZ];

enum frame_state_e {
    UNFRAMED = 0,
    CORRECT_FRAME = 1,
    OTHER_FRAME = 2,
};
typedef enum frame_state_e frame_state;

static frame_state am_in_frame;
static uint8_t other_frame_ID;

uint8_t open_port(libusb_device_handle *devh){

    int rc;
    /* We only need to deal with the CDC data interface on Boson, it has sane control defaults */
    if (libusb_kernel_driver_active(devh, IF_CDC_DATA)) {
        libusb_detach_kernel_driver(devh, IF_CDC_DATA);
    }
    rc = libusb_claim_interface(devh, IF_CDC_DATA);
    if (rc < 0) {
        fprintf(stderr, "Error claiming interface: %s\n",
                libusb_error_name(rc));
    }

    return (uint8_t) rc; // 0 == success.
}

void close_port(libusb_device_handle *devh){
    libusb_release_interface(devh, IF_CDC_DATA);
}

double diff_timespec(struct timespec *current, struct timespec *reference)
{
    double elapsed_sec = difftime(current->tv_sec, reference->tv_sec);
    elapsed_sec += (((double)current->tv_nsec) - ((double)reference->tv_nsec))/1000000000;
    return elapsed_sec;
}

static int16_t read_byte(libusb_device_handle *devh)
{
    struct timespec start_t,current_t;
    double elapsed_sec;
    clock_gettime(CLOCK_MONOTONIC, &start_t);

    /* To receive characters from the device initiate a bulk_transfer to the
     * Endpoint with address ep_in_addr.
     */
    static int actual_length = 0, index = 0;
    static uint8_t in_byte[512] = { 0 };
    if (index >= actual_length)
    {
        index = 0;
        int rc = libusb_bulk_transfer(devh, EP_IN_ADDR, in_byte, sizeof(in_byte), &actual_length, 1000);
        if (rc == LIBUSB_ERROR_TIMEOUT) {
            printf("%s (%d)\n", libusb_error_name(rc), actual_length);
            return -1;
        } else if (rc < 0) {
            fprintf(stderr, "Error while waiting for char: %s\n", libusb_error_name(rc));
            return -1;
        }
    }
    return in_byte[index++];
}

static void extract_payload(uint8_t* raw_payload_buf, uint32_t raw_payload_len, uint8_t* payload_buf, uint32_t* payload_len)
{
    uint32_t i;

    for(*payload_len=0, i=0; i < raw_payload_len; i++)
    {
        // if (raw_payload_buf[i] == ESCAPE_BYTE) i++;
        payload_buf[(*payload_len)++] = raw_payload_buf[i];
    }
}

void read_frame(libusb_device_handle *devh,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer)
{
    int byte_idx = 0;
    int tempval = 0;
    frame_state am_in_frame = UNFRAMED;
    uint8_t found_complete_frame=0, in_escape=0;
    uint8_t c;
    // uint8_t failedcrc = 0;
    uint16_t calc_crc;

    tempval = get_channel(channel_ID, &chan_ptr);
    get_unframed(&unframed_ptr);

    struct timespec start_t,current_t;
    double elapsed_sec;
    clock_gettime(CLOCK_MONOTONIC, &start_t);
    double timeout = (double)start_byte_ms/1000.0;
    *receiveBytes =  0;

    if (tempval > 0 && chan_ptr->len > 0){
#ifdef DEBUGPRINT
        int i,j;
        printf("POLL buffer start = %d, len = %d \n",chan_ptr->start,chan_ptr->len);
        printf("current buffer[20] : ");
        for (j=0; j<20; j++){
            i = ( (chan_ptr->start + j ) % CHANNEL_BUF_SIZ);
            printf(" %02X",chan_ptr->buff[i]);
        }
        printf("\n");
#endif
        while(chan_ptr->len > 0){
// #ifdef DEBUGPRINT
            // if (i==poll_idx_lo) printf("Entered PROCESS_BUFF_%02d\n",chan_ptr->channel);
// #endif
            tempval = get_byte(&c,chan_ptr);
            if (tempval < 0){
                break;
            }
            if (c == START_FRAME_BYTE)
            {
#ifdef DEBUGPRINT
                printf("     POLL_RX_BUF StartByte \n ");
#endif
                timeout = FRAME_TIMEOUT_SEC;
                byte_idx = 0;
                am_in_frame = CORRECT_FRAME;
                continue;
            }
            if (am_in_frame) {

                if (c == ESCAPE_BYTE)
                {
                    in_escape = 1;
                    tempval = get_byte(&c,chan_ptr);
                    if (tempval < 0){
                        break;
                    }
                    switch (c){
                        case ESCAPED_END_FRAME_BYTE:
                            c = END_FRAME_BYTE;
                            break;
                        case ESCAPED_START_FRAME_BYTE:
                            c = START_FRAME_BYTE;
                            break;
                        case ESCAPED_ESCAPE_BYTE:
                            c = ESCAPE_BYTE;
                            break;
                        default:
                            break;
                    }
                    in_frame_buf[byte_idx++] = c;
#ifdef DEBUGPRINT
                    printf(" %02X",c);
#endif
                    continue;
                }

                if (c == END_FRAME_BYTE)
                {
                    am_in_frame = UNFRAMED;
                    /*
                     * Check CRC: if good end loop.  If bad, start looking for start byte.
                     * Check Frame Status:  If zero, end loop.  If non-zero, start looking for start byte.
                     */

                     /*
                      * byte_idx - 3 = total frame length - channel_ID byte - crc_bytes[2]
                      * &(frame_buf[1]) is first byte after channel_ID byte
                      */
                    calc_crc = calcFlirCRC16Bytes((byte_idx - 2), &(in_frame_buf[CRC_START_IDX]));

                    if ( (((calc_crc >> 8) &0xFF) != in_frame_buf[byte_idx - 2]) || ((calc_crc &0xFF) != in_frame_buf[byte_idx - 1]) )
                    {
                        printf("\nFailed packet integrity check (calc) %02X%02X !=  (recd) %02X%02X\n",((calc_crc >> 8) &0xFF),(calc_crc&0xFF),in_frame_buf[byte_idx - 2],in_frame_buf[byte_idx - 1]);
                        printf("RAW Receive Packet: ");
                        for (tempval=0;tempval<byte_idx;tempval++){
                            printf(" %02X",in_frame_buf[tempval]);
                        }
                        printf("\n");
                        // printf("     Failed time %f:\n",elapsed_sec);
                        // failedcrc = 1;
                        byte_idx = 0;

                        timeout=POLL_TIMEOUT_SEC;
                        continue;
                    }
#ifdef DEBUGPRINT
                    else {
                        printf("\n");
                    }
#endif
                    found_complete_frame = 1;
                    break;
                }

                in_frame_buf[byte_idx++] = c;
    #ifdef DEBUGPRINT
                printf(" %02X",c);
    #endif
                continue;
            }
        }
    }

    if (found_complete_frame) {
#ifdef DEBUGPRINT
        printf("Found Complete Frame in channel_buf_%02d\n",chan_ptr->channel);
        printf("current buffer start = %d, len = %d \n",chan_ptr->start,chan_ptr->len);
#endif
        extract_payload(&(in_frame_buf[FRAME_START_IDX]), (byte_idx - NUM_FRAMING_BYTES), receiveBuffer, receiveBytes);
        return;
    }
#ifdef DEBUGPRINT
    printf("Entering serial loop...\n");
#endif
    clock_gettime(CLOCK_MONOTONIC, &start_t);
    while(1)
    {

        // if (failedcrc){
            // printf("AFTER FAIL: %f\n",elapsed_sec);
        // }
        if (byte_idx == FRAME_BUF_SIZ)
        {
            // Buffer overrun
            return;
        }
        clock_gettime(CLOCK_MONOTONIC, &current_t);
        elapsed_sec = diff_timespec(&current_t, &start_t);
        if (elapsed_sec >= timeout){
            if (am_in_frame==CORRECT_FRAME) {
                printf("ReadFrameTimeout after: %f s\n",elapsed_sec);
                printf("partial rx frame[%d] : ",byte_idx);
                for (tempval=0; tempval<byte_idx; tempval++){
                    printf(" %02X",in_frame_buf[tempval]);
                }
                printf("\n");
            } else {
#ifdef DEBUGPRINT
                printf("Timed out after %f s\n",elapsed_sec);
#endif
            }
            *receiveBytes =  0;
            am_in_frame = UNFRAMED;
            return;
        }

        if (in_escape && (am_in_frame==CORRECT_FRAME)){
            //carryover escape character from buffer
            tempval = ESCAPE_BYTE;
        } else {
            //normal operations
            tempval = read_byte(devh);
        }

        if (tempval<0) {
#ifdef DEBUGPRINT
            //printf("ReadByteTimeout: %f\n",elapsed_sec);
#endif
            continue; //byte read timeout.
        } else {
            c = (uint8_t) tempval;
        }

        if ((c & 0xFF) == (START_FRAME_BYTE & 0xFF))
        {
#ifdef DEBUGPRINT
            printf("     StartByte time %f:\n     ",elapsed_sec);
#endif
            timeout = FRAME_TIMEOUT_SEC;
            byte_idx = 0;
            do {
                clock_gettime(CLOCK_MONOTONIC, &current_t);
                elapsed_sec = diff_timespec(&current_t, &start_t);
                if (elapsed_sec>timeout) continue;
                tempval = read_byte(devh);
            } while (tempval < 0);
            c = (uint8_t) tempval & 0xFF;
            uint8_t needs_escape = 0;
            if (c == ESCAPE_BYTE){
                needs_escape = 1;
                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec>timeout) continue;
                    tempval = read_byte(devh);
                } while (tempval < 0);
                c = (uint8_t) tempval & 0xFF;
            }
            if (c == channel_ID) {
                //found correct frame
                am_in_frame = CORRECT_FRAME;
                in_frame_buf[byte_idx++] = c;
            } else {
                am_in_frame = OTHER_FRAME;
                other_frame_ID = c;
                tempval = get_channel(other_frame_ID, &chan_ptr);
                if (tempval < 0){
                    chan_ptr = unframed_ptr;
                    am_in_frame = UNFRAMED;
                }
                add_byte(START_FRAME_BYTE,chan_ptr);
                if(needs_escape) add_byte(ESCAPE_BYTE,chan_ptr);
                add_byte(c,chan_ptr);
            }
            continue;
        }
        if (am_in_frame == CORRECT_FRAME) {
            if ((c & 0xFF) == (ESCAPE_BYTE & 0xFF))
            {
                in_escape = 1;

                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec>timeout) continue;
                    tempval = read_byte(devh);
                } while (tempval < 0);

                c = (uint8_t) tempval;
                switch (c){
                    case ESCAPED_END_FRAME_BYTE:
                        c = END_FRAME_BYTE;
                        break;
                    case ESCAPED_START_FRAME_BYTE:
                        c = START_FRAME_BYTE;
                        break;
                    case ESCAPED_ESCAPE_BYTE:
                        c = ESCAPE_BYTE;
                        break;
                    default:
                        break;
                }
                in_frame_buf[byte_idx++] = c;
                in_escape = 0;
    #ifdef DEBUGPRINT
                printf(" %02X",c);
    #endif
                continue;
            }

            if ((c & 0xFF) == (END_FRAME_BYTE & 0xFF))
            {
                // printf("\n     EndByte time %f:\n",elapsed_sec);
                // frame_buf[byte_idx++] = c;

                /*
                 * Check CRC: if good end loop.  If bad, start looking for start byte.
                 * Check Frame Status:  If zero, end loop.  If non-zero, start looking for start byte.
                 */

                 /*
                  * byte_idx - 3 = total frame length - channel_ID byte - crc_bytes[2]
                  * &(frame_buf[1]) is first byte after channel_ID byte
                  */

                am_in_frame = UNFRAMED;

                calc_crc = calcFlirCRC16Bytes((byte_idx - 2), &(in_frame_buf[CRC_START_IDX]));

                if ( (((calc_crc >> 8) &0xFF) != in_frame_buf[byte_idx - 2]) || ((calc_crc &0xFF) != in_frame_buf[byte_idx - 1]) )
                {
                    printf("Failed POLL packet integrity check (calc) %02X%02X !=  (recd) %02X%02X\n",((calc_crc >> 8) &0xFF),(calc_crc&0xFF),in_frame_buf[byte_idx - 2],in_frame_buf[byte_idx - 1]);
                    printf("RAW Receive Packet: ");
                    for (tempval=0;tempval<byte_idx;tempval++){
                        printf(" %02X",in_frame_buf[tempval]);
                    }
                    printf("\n");
                    // printf("     Failed time %f:\n",elapsed_sec);
                    // failedcrc = 1;
                    byte_idx = 0;
                    clock_gettime(CLOCK_MONOTONIC, &start_t);
                    timeout= (double)start_byte_ms/1000.0;
                    continue;
                }
    #ifdef DEBUGPRINT
                else {
                    printf("\n");
                }
    #endif
                found_complete_frame = 1;
                break;
            }

            in_frame_buf[byte_idx++] = c;
#ifdef DEBUGPRINT
            printf(" %02X",c);
#endif
        } else if(am_in_frame == OTHER_FRAME) {
            if ((c & 0xFF) == (ESCAPE_BYTE & 0xFF)) {
                in_escape = 1;
                add_byte(c,chan_ptr);
                do {
                    clock_gettime(CLOCK_MONOTONIC, &current_t);
                    elapsed_sec = diff_timespec(&current_t, &start_t);
                    if (elapsed_sec>timeout) continue;
                    tempval = read_byte(devh);
                } while (tempval < 0);
                c = (uint8_t) tempval;
                add_byte(c,chan_ptr);
                in_escape = 0;

            } else if ((c & 0xFF) == (END_FRAME_BYTE & 0xFF)) {
                add_byte(c,chan_ptr);
                am_in_frame = UNFRAMED;
            }

#ifdef DEBUGPRINT
            printf("(%02d:%02X)",chan_ptr->channel,c);
#endif
            continue;
        } else { //Unframed data
#ifdef DEBUGPRINT
            printf("(U:%02X)",c);
#endif
            add_byte(c,unframed_ptr);
        }
    }
    if (found_complete_frame) {
        extract_payload(&(in_frame_buf[FRAME_START_IDX]), (byte_idx - NUM_FRAMING_BYTES), receiveBuffer, receiveBytes);
        return;
    } else {
        *receiveBytes =  0;
        return;
    }
}


void read_unframed(libusb_device_handle *devh, uint16_t start_byte_ms, uint32_t *receiveBytes, uint8_t *receiveBuffer){
    int tempval = 0;
    // frame_state am_in_frame = UNFRAMED;
    uint8_t found_complete_frame=0, in_escape=0;
    uint8_t c;
    // uint8_t failedcrc = 0;
    uint16_t calc_crc;

    get_unframed(&unframed_ptr);

//    clock_t start_t,elapsed_t;
//  float elapsed_sec;
//  float timeout = (float)start_byte_ms/1000.0;
    *receiveBytes =  0;

    while(unframed_ptr->len > 0){

        if (*receiveBytes == FRAME_BUF_SIZ) return;

        tempval = get_byte(&c,unframed_ptr);
        if (tempval < 0){
            break;
        }

        receiveBuffer[(*receiveBytes)++] = c;
#ifdef DEBUGPRINT
        printf(" %02X",c);
#endif
    }
}

static int32_t create_frame(uint8_t *frame_buf, uint8_t channel_ID, uint8_t *payload, uint32_t payload_len)
{
    uint32_t i;
    int32_t out_len = 0;
    uint16_t crc_out = FLIR_CRC_INITIAL_VALUE;
    frame_buf[out_len++] = (uint8_t) START_FRAME_BYTE;
    frame_buf[out_len++] = (uint8_t) 0x00;  // Channel ID
    crc_out = ByteCRC16(0x00, (int) crc_out);
    // frame_buf[out_len++] = (uint8_t) 0x00;  // Removed Frame status byte[0]
    // crc_out = ByteCRC16(0x00, (int) crc_out);
    // frame_buf[out_len++] = (uint8_t) 0x00;  // Removed Frame status byte[1]
    // crc_out = ByteCRC16(0x00, (int) crc_out);

    if ((payload_len + 5) > FRAME_BUF_SIZ) // start + channel_ID + payload + crc_bytes[2] + end
        return (-1);

    for(i=0; i < payload_len; i++)
    {
        if ((payload[i] == START_FRAME_BYTE) || (payload[i] == END_FRAME_BYTE) || (payload[i] == ESCAPE_BYTE)){
            frame_buf[out_len++] = ESCAPE_BYTE;
            uint8_t c = payload[i];
            crc_out = ByteCRC16((int) c, (int) crc_out);
            switch (c)
            {
                case END_FRAME_BYTE:
                    c = ESCAPED_END_FRAME_BYTE;
                    break;
                case START_FRAME_BYTE:
                    c = ESCAPED_START_FRAME_BYTE;
                    break;
                case ESCAPE_BYTE:
                    c = ESCAPED_ESCAPE_BYTE;
                    break;
                default:
                    break;
            }
            frame_buf[out_len++] = c;

        }
        else
        {
            frame_buf[out_len++] = payload[i];
            crc_out = ByteCRC16((int) payload[i], (int) crc_out);
        }
        if ((out_len + 3) > FRAME_BUF_SIZ)
            return (-2);
    }

    // crc_out = calcFlirCRC16Bytes(out_len, frame_buf);
    uint8_t crcbyte = ((crc_out >> 8) & 0xFF);
    if ((crcbyte == START_FRAME_BYTE) || (crcbyte == END_FRAME_BYTE) || (crcbyte == ESCAPE_BYTE)) {
        frame_buf[out_len++] = ESCAPE_BYTE;
        uint8_t c = crcbyte;
        switch (c)
        {
            case END_FRAME_BYTE:
                c = ESCAPED_END_FRAME_BYTE;
                break;
            case START_FRAME_BYTE:
                c = ESCAPED_START_FRAME_BYTE;
                break;
            case ESCAPE_BYTE:
                c = ESCAPED_ESCAPE_BYTE;
                break;
            default:
                break;
        }
        frame_buf[out_len++] = c;
    }
    else
    {
        frame_buf[out_len++] = crcbyte;
    }

    crcbyte = (crc_out & 0xFF);
    if ((crcbyte == START_FRAME_BYTE) || (crcbyte == END_FRAME_BYTE) || (crcbyte == ESCAPE_BYTE)) {
        frame_buf[out_len++] = ESCAPE_BYTE;
        uint8_t c = crcbyte;
        switch (c)
        {
            case END_FRAME_BYTE:
                c = ESCAPED_END_FRAME_BYTE;
                break;
            case START_FRAME_BYTE:
                c = ESCAPED_START_FRAME_BYTE;
                break;
            case ESCAPE_BYTE:
                c = ESCAPED_ESCAPE_BYTE;
                break;
            default:
                break;
        }
        frame_buf[out_len++] = c;
    }
    else
    {
        frame_buf[out_len++] = crcbyte;
    }
    frame_buf[out_len++] = END_FRAME_BYTE;

    return(out_len);
}

static int write_frame(libusb_device_handle *devh,uint8_t *frame_buf, uint32_t len)
{
    int i;
#ifdef DEBUGPRINT
    printf("Writing Frame (framewise): ");
    for(i=0; i<len; i++){
        printf(" %02X",frame_buf[i]);
    }
    printf("...\n");
#endif

    int actual_length;
    if (libusb_bulk_transfer(devh, EP_OUT_ADDR, frame_buf, len,
                             &actual_length, 0) < 0) {
        fprintf(stderr, "Error while sending char\n");
        return -1;
    }
    if (actual_length != len)
    {
#ifdef DEBUGPRINT
        printf("Failed.");
#endif
        return -1;
    }
    else
    {
#ifdef DEBUGPRINT
    printf("Success.");
#endif
        return 0;
    }
}

void send_to_camera(libusb_device_handle *devh, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload)
{
    int success=0;//, i=0;

    int32_t out_len;//, in_payload_len, out_payload_len;
    out_len = create_frame(out_frame_buf,channel_ID, sendPayload, sendBytes);
#ifdef DEBUGPRINT
    printf("sendBytes = %u, out_len = %d\n",sendBytes, out_len);
#endif
    success = write_frame(devh,out_frame_buf, out_len);
#ifdef DEBUGPRINT
    printf("frame send status %d.\n",success);
#endif
}

