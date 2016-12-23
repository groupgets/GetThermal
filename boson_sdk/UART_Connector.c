
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2015, FLIR Systems                                          */
/*  All rights reserved.                                                      */
/*                                                                            */
/*  This document is controlled to FLIR Technology Level 2. The information   */
/*  contained in this document pertains to a dual use product controlled for  */
/*  export by the Export Administration Regulations (EAR). Diversion contrary */
/*  to US law is prohibited. US Department of Commerce authorization is not   */
/*  required prior to export or transfer to foreign persons or parties unless */
/*  otherwise prohibited.                                                     */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>

#include "UART_Connector.h"

uint8_t open_port(libusb_device_handle *devh);
void close_port(libusb_device_handle *devh);
void send_to_camera(libusb_device_handle *devh, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);//, uint32_t *receiveBytes, uint8_t *receivePayload);
// void read_command(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload, uint32_t *receiveBytes, uint8_t *receivePayload);
void read_frame(libusb_device_handle *devh,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
void read_unframed(libusb_device_handle *devh, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);

static uint8_t isInitialized = 0;

/* We use a global variable to keep the device handle
 */
static struct libusb_device_handle *devh = NULL;

FLR_RESULT Initialize(libusb_device_handle *indevh)
{
	if (isInitialized) return R_UART_PORT_ALREADY_OPEN; 
	
    devh = indevh;
	
//	__declspec( dllimport ) uint8_t open_port(int32_t port_num, int32_t baud_rate);
    if (open_port(devh)) return R_UART_PORT_FAILURE;

	isInitialized = 1;
	return FLR_COMM_OK; // 0 == success.
}

void Close()
{
//	__declspec( dllimport ) void close_port(int32_t port_num);
    close_port(devh);
	isInitialized = 0;
    devh = NULL;
//	myPort = 0;
}

void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData)
{
	if (!isInitialized) return;
	
//	__declspec( dllimport ) void send_to_camera(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);
    send_to_camera(devh, channelID, sendBytes, sendData);
}


void ReadFrame( uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData)
{ 
//	__declspec( dllimport ) void read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	// hardcoded 1000ms polling delay for now
    read_frame(devh, channelID, 1000, receiveBytes, receiveData);
}


void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData)
{
//	__declspec( dllimport ) void read_unframed(int32_t port_num, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	// hardcoded 25ms polling delay for now
    read_unframed(devh, 25, receiveBytes,receiveData);
}
