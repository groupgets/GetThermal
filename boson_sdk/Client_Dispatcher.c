//  /////////////////////////////////////////////////////
//  // DO NOT EDIT.  This is a machine generated file. //
//  /////////////////////////////////////////////////////
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

#include "Client_Dispatcher.h"

FLR_RESULT CLIENT_dispatcher(uint32_t seqNum, FLR_FUNCTION fnID, const uint8_t *sendData, const uint32_t sendBytes, const uint8_t *receiveData, uint32_t *receiveBytes) {
	
	uint32_t i;
	
	// Allocated buffer with extra space for payload header
	uint8_t sendPayload[530];
	uint8_t *pyldPtr = (uint8_t *)sendPayload;
	
	// Write sequence number to first 4 bytes
	UINT_32ToByte(seqNum, (const uint8_t *)pyldPtr);
	pyldPtr += 4;
	
	// Write function ID to second 4 bytes
	UINT_32ToByte((const uint32_t) fnID, (const uint8_t *)pyldPtr);
	pyldPtr += 4;
	
	// Write 0xFFFFFFFF to third 4 bytes
	UINT_32ToByte(0xFFFFFFFF, (const uint8_t *)pyldPtr);
	pyldPtr += 4;
	
	// Copy sendData to payload buffer
	uint8_t *dataPtr = (uint8_t *)sendData;
	for(i = 0;i<sendBytes;i++) {
		*pyldPtr++ = *dataPtr++;
	}
	
	// Allocated buffer with extra space for return data
	uint8_t receivePayload[530];
	uint8_t *inPtr = (uint8_t *)receivePayload;
	
	*receiveBytes+=12;
	uint8_t CommandChannel = 0x00;
	SendToCamera(CommandChannel, sendBytes+12,sendPayload);
	ReadFrame(CommandChannel, receiveBytes,receivePayload);
	if (*receiveBytes<12) ReadFrame(CommandChannel, receiveBytes,receivePayload);
	if (*receiveBytes<12) return R_UART_RECEIVE_TIMEOUT;
	// Evaluate sequence bytes as UINT_32
	uint32_t returnSequence;
	byteToUINT_32( (const uint8_t *) inPtr, &returnSequence);
	inPtr += 4;
	
	// Ensure that received sequence matches sent sequence
	if(returnSequence ^ seqNum){
		return R_SDK_DSPCH_SEQUENCE_MISMATCH;
	}
	
	// Evaluate CMD ID bytes as UINT_32 
	uint32_t cmdID;
	byteToUINT_32( (const uint8_t *) inPtr, &cmdID);
	inPtr += 4;
	
	// Ensure that received CMD ID matches sent CMD ID
	if(cmdID ^ (uint32_t) fnID){
		return R_SDK_DSPCH_ID_MISMATCH;
	}
	
	// Evaluate Payload Status bytes as UINT_32
	uint32_t pyldStatus;
	byteToUINT_32( (const uint8_t *) inPtr, &pyldStatus);
	inPtr += 4;
	
	const FLR_RESULT returncode = (FLR_RESULT) pyldStatus;
	// Check for any errorcode
	if(returncode != R_SUCCESS){
		return returncode;
	}
	
	// Now have Good Tx, Good Sequence, Good CMD ID, and Good Status.
	// inPtr at Data block, fill receiveData buffer with outPtr
	uint8_t *outPtr = (uint8_t *)receiveData;
	// decrement receiveBytes by 12 (len of header bytes)
	*receiveBytes-=12;
	
	uint32_t localvar = *receiveBytes; //shouldn't have to do this, but it works.
	for(i=0;i<localvar;i++) {
		*outPtr++ = *inPtr++;
	}
	
	return R_SUCCESS;
} // End CLIENT_dispatcher()
