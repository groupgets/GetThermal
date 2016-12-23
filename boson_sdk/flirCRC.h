#ifndef _FLIR_CRC_H_
#define _FLIR_CRC_H_

#include <stdint.h>

#define FLIR_CRC_INITIAL_VALUE      (0x1D0F)

uint16_t calcFlirCRC16Words(unsigned int count, short *buffer);
uint16_t calcFlirCRC16Bytes(unsigned int count, char *buffer);
int ByteCRC16(int value, int crcin);
#endif // _FLIR_CRC_H_
