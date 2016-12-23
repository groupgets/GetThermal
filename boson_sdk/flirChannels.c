#include "flirChannels.h"

static uint8_t is_initialized = 0;

int16_t get_channel(uint8_t channel_ID, CHANNEL_T **return_channel){
	uint16_t i;
	for (i=1;i<NUM_CHANNELS;i++){
		if (channel_ID == channel_list[i].channel){
			*return_channel = &(channel_list[i]);
			return channel_ID;
		}
	}
	return -1;
}

void get_unframed(CHANNEL_T **return_channel){
	*return_channel = &(channel_list[0]);
	return;
}

void add_byte(uint8_t inbyte,CHANNEL_T *channel_ptr){
	uint32_t index;
	uint16_t start = (channel_ptr->start);
	if (channel_ptr->len != CHANNEL_BUF_SIZ){
		index = start + (channel_ptr->len);
		(channel_ptr->buff)[index] = inbyte;
		(channel_ptr->len)++;
	} else {
		(channel_ptr->buff)[start] = inbyte;
		(channel_ptr->start) = (start + 1)%CHANNEL_BUF_SIZ;
	}
}

int32_t get_byte(uint8_t *outbyte,CHANNEL_T *channel_ptr){
	//return remaining length if success, -1 if channel already empty
	if (channel_ptr->len == 0) {
		return -1;
	} else {
		*outbyte = (channel_ptr->buff)[(channel_ptr->start)];
		(channel_ptr->start)++;
		return --(channel_ptr->len);
	}
}

void initialize_channels(){
	if (is_initialized==0) {
		chan_ptr = &(channel_list[0]);
		chan_ptr->channel = 0x00; // unframed "channel" always slot 0
		chan_ptr->len = 0;
		chan_ptr->start = 0;
		chan_ptr = &(channel_list[1]);
		chan_ptr->channel = 0x00; // command channel
		chan_ptr->len = 0;
		chan_ptr->start = 0;
		chan_ptr = &(channel_list[2]);
		chan_ptr->channel = 0x99; // "0x99" debug channel
		chan_ptr->len = 0;
		chan_ptr->start = 0;
		chan_ptr = &(channel_list[3]);
		chan_ptr->channel = 0x63; // "99" alt debug channel
		chan_ptr->len = 0;
		chan_ptr->start = 0;
		
		is_initialized = 1;
	} 
}
