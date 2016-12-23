#ifndef FLIR_CHANNELS_H
#define FLIR_CHANNELS_H

#include <stdint.h>
#define CHANNEL_BUF_SIZ       32000

struct t_CHANNEL_T {
	uint8_t channel;
	uint16_t start;
	uint16_t len;
	uint8_t buff[CHANNEL_BUF_SIZ];
};
typedef struct t_CHANNEL_T CHANNEL_T;

#define NUM_CHANNELS 4

static CHANNEL_T *chan_ptr;
static CHANNEL_T *unframed_ptr;
static CHANNEL_T channel_list[NUM_CHANNELS];

extern void initialize_channels();
extern int16_t get_channel(uint8_t channel_ID, CHANNEL_T **return_channel);
extern void get_unframed(CHANNEL_T **return_channel);
extern void add_byte(uint8_t inbyte,CHANNEL_T *channel_ptr);
extern int32_t get_byte(uint8_t *outbyte,CHANNEL_T *channel_ptr);

/* Maybe later if number of channels becomes large.
int16_t channel_nums[256] = {
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x00->0x09
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x0A->0x13
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x14->0x1D
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x1E->0x27
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x28->0x31
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x32->0x3B
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x3C->0x45
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x46->0x4F
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x50->0x59
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x5A->0x63
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x64->0x6D
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x6E->0x77
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x78->0x81
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x82->0x8B
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x8C->0x95
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0x96->0x9F
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xA0->0xA9
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xAA->0xB3
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xB4->0xBD
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xBE->0xC7
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xC8->0xD1
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xD2->0xDB
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xDC->0xE5
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xE6->0xEF
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, //0xF0->0xF9
	-1,-1,-1,-1,-1,-1,             //0xFA->0xFF
}
*/


#endif //FLIR_CHANNELS_H