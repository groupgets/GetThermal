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

#include "Client_Packager.h"

static uint32_t commandCount = 0;

// Begin Module: gao
FLR_RESULT CLIENT_pkgGaoSetGainState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetGainState()

FLR_RESULT CLIENT_pkgGaoGetGainState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetGainState()

FLR_RESULT CLIENT_pkgGaoSetFfcState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetFfcState()

FLR_RESULT CLIENT_pkgGaoGetFfcState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetFfcState()

FLR_RESULT CLIENT_pkgGaoSetTempCorrectionState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetTempCorrectionState()

FLR_RESULT CLIENT_pkgGaoGetTempCorrectionState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetTempCorrectionState()

FLR_RESULT CLIENT_pkgGaoSetIConstL(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetIConstL()

FLR_RESULT CLIENT_pkgGaoGetIConstL(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetIConstL()

FLR_RESULT CLIENT_pkgGaoSetIConstM(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetIConstM()

FLR_RESULT CLIENT_pkgGaoGetIConstM(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetIConstM()

FLR_RESULT CLIENT_pkgGaoSetAveragerState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetAveragerState()

FLR_RESULT CLIENT_pkgGaoGetAveragerState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetAveragerState()

FLR_RESULT CLIENT_pkgGaoSetNumFFCFrames(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetNumFFCFrames()

FLR_RESULT CLIENT_pkgGaoGetNumFFCFrames(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetNumFFCFrames()

FLR_RESULT CLIENT_pkgGaoSetAveragerThreshold(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETAVERAGERTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetAveragerThreshold()

FLR_RESULT CLIENT_pkgGaoGetAveragerThreshold(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetAveragerThreshold()

FLR_RESULT CLIENT_pkgGaoGetRnsState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetRnsState()

FLR_RESULT CLIENT_pkgGaoSetTestRampState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoSetTestRampState()

FLR_RESULT CLIENT_pkgGaoGetTestRampState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgGaoGetTestRampState()

// End Module: gao
// Begin Module: lagrange
// End Module: lagrange
// Begin Module: roic
FLR_RESULT CLIENT_pkgRoicGetFPATemp(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMP, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATemp()

FLR_RESULT CLIENT_pkgRoicGetFrameCount(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFrameCount()

FLR_RESULT CLIENT_pkgRoicGetActiveNormalizationTarget(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETACTIVENORMALIZATIONTARGET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetActiveNormalizationTarget()

FLR_RESULT CLIENT_pkgRoicGetControlWord(FLR_ROIC_CONTROL_WORD_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 32;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETCONTROLWORD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_ROIC_CONTROL_WORD_T outVal;
		byteToFLR_ROIC_CONTROL_WORD_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ROIC_CONTROL_WORD_T)outVal;
		inPtr+=32;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetControlWord()

FLR_RESULT CLIENT_pkgRoicSetFPARampState(const FLR_ENABLE_E state) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write state to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = state;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPARampState()

FLR_RESULT CLIENT_pkgRoicGetFPARampState(FLR_ENABLE_E *state) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read state from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*state = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of state handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPARampState()

FLR_RESULT CLIENT_pkgRoicGetCurrentNUCIndex(int32_t *index) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETCURRENTNUCINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read index from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*index = (int32_t)outVal;
		inPtr+=4;
	}// end of index handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetCurrentNUCIndex()

FLR_RESULT CLIENT_pkgRoicGetSensorADC1(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC1, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetSensorADC1()

FLR_RESULT CLIENT_pkgRoicGetSensorADC2(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC2, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetSensorADC2()

FLR_RESULT CLIENT_pkgRoicSetFPATempOffset(const int16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const int16_t inVal = data;
		INT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempOffset()

FLR_RESULT CLIENT_pkgRoicGetFPATempOffset(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempOffset()

FLR_RESULT CLIENT_pkgRoicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ROIC_TEMP_MODE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempMode()

FLR_RESULT CLIENT_pkgRoicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ROIC_TEMP_MODE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempMode()

FLR_RESULT CLIENT_pkgRoicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 64;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPTABLE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read table from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_ROIC_FPATEMP_TABLE_T outVal;
		byteToFLR_ROIC_FPATEMP_TABLE_T( (const uint8_t *) inPtr, &outVal);
		*table = (FLR_ROIC_FPATEMP_TABLE_T)outVal;
		inPtr+=64;
	}// end of table handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempTable()

FLR_RESULT CLIENT_pkgRoicSetFPATempValue(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicSetFPATempValue()

FLR_RESULT CLIENT_pkgRoicGetFPATempValue(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgRoicGetFPATempValue()

// End Module: roic
// Begin Module: bpr
FLR_RESULT CLIENT_pkgBprSetState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBprSetState()

FLR_RESULT CLIENT_pkgBprGetState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBprGetState()

// End Module: bpr
// Begin Module: telemetry
FLR_RESULT CLIENT_pkgTelemetrySetState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetrySetState()

FLR_RESULT CLIENT_pkgTelemetryGetState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetryGetState()

FLR_RESULT CLIENT_pkgTelemetrySetLocation(const FLR_TELEMETRY_LOC_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TELEMETRY_LOC_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetrySetLocation()

FLR_RESULT CLIENT_pkgTelemetryGetLocation(FLR_TELEMETRY_LOC_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TELEMETRY_LOC_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTelemetryGetLocation()

// End Module: telemetry
// Begin Module: boson
FLR_RESULT CLIENT_pkgBosonGetCameraSN(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERASN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCameraSN()

FLR_RESULT CLIENT_pkgBosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 20;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERAPN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_PARTNUMBER_T outVal;
		byteToFLR_BOSON_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_BOSON_PARTNUMBER_T)outVal;
		inPtr+=20;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCameraPN()

FLR_RESULT CLIENT_pkgBosonSetSensorSN(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETSENSORSN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetSensorSN()

FLR_RESULT CLIENT_pkgBosonGetSensorSN(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORSN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSensorSN()

FLR_RESULT CLIENT_pkgBosonRunFFC() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RUNFFC, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRunFFC()

FLR_RESULT CLIENT_pkgBosonSetFFCTempThreshold(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCTempThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCTempThreshold(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCTempThreshold()

FLR_RESULT CLIENT_pkgBosonSetFFCFrameThreshold(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCFrameThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCFrameThreshold(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCFrameThreshold()

FLR_RESULT CLIENT_pkgBosonGetFFCInProgress(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCINPROGRESS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCInProgress()

FLR_RESULT CLIENT_pkgBosonReboot() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_REBOOT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReboot()

FLR_RESULT CLIENT_pkgBosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write ffcMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_FFCMODE_E inVal = ffcMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFFCMode()

FLR_RESULT CLIENT_pkgBosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*ffcMode = (FLR_BOSON_FFCMODE_E)outVal;
		inPtr+=4;
	}// end of ffcMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFFCMode()

FLR_RESULT CLIENT_pkgBosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write gainMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_GAINMODE_E inVal = gainMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetGainMode()

FLR_RESULT CLIENT_pkgBosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read gainMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*gainMode = (FLR_BOSON_GAINMODE_E)outVal;
		inPtr+=4;
	}// end of gainMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetGainMode()

FLR_RESULT CLIENT_pkgBosonWriteDynamicHeaderToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEDYNAMICHEADERTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteDynamicHeaderToFlash()

FLR_RESULT CLIENT_pkgBosonReadDynamicHeaderFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_READDYNAMICHEADERFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReadDynamicHeaderFromFlash()

FLR_RESULT CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYDEFAULTSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash()

FLR_RESULT CLIENT_pkgBosonReadSensorIdHeaderFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_READSENSORIDHEADERFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReadSensorIdHeaderFromFlash()

FLR_RESULT CLIENT_pkgBosonReadCameraIdHeaderFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_READCAMERAIDHEADERFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonReadCameraIdHeaderFromFlash()

FLR_RESULT CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYBADPIXELSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash()

FLR_RESULT CLIENT_pkgBosonWriteBadPixelsToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEBADPIXELSTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteBadPixelsToFlash()

FLR_RESULT CLIENT_pkgBosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSOFTWAREREV, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read major from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*major = (uint32_t)outVal;
		inPtr+=4;
	}// end of major handling
	
	// read minor from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*minor = (uint32_t)outVal;
		inPtr+=4;
	}// end of minor handling
	
	// read patch from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*patch = (uint32_t)outVal;
		inPtr+=4;
	}// end of patch handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSoftwareRev()

FLR_RESULT CLIENT_pkgBosonSetBadPixelLocation(const uint32_t row, const uint32_t col) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write row to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = row;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write col to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = col;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETBADPIXELLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetBadPixelLocation()

FLR_RESULT CLIENT_pkgBosonlookupFPATempDegCx10(int16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGCX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int16_t outVal;
		byteToINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (int16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonlookupFPATempDegCx10()

FLR_RESULT CLIENT_pkgBosonlookupFPATempDegKx10(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGKX10, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonlookupFPATempDegKx10()

FLR_RESULT CLIENT_pkgBosonWriteLensGainToFlash() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITELENSGAINTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonWriteLensGainToFlash()

FLR_RESULT CLIENT_pkgBosonSetLensNumber(const uint32_t lensNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write lensNumber to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = lensNumber;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetLensNumber()

FLR_RESULT CLIENT_pkgBosonGetLensNumber(uint32_t *lensNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read lensNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*lensNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of lensNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetLensNumber()

FLR_RESULT CLIENT_pkgBosonSetTableNumber(const uint32_t tableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write tableNumber to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = tableNumber;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetTableNumber()

FLR_RESULT CLIENT_pkgBosonGetTableNumber(uint32_t *tableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read tableNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*tableNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of tableNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetTableNumber()

FLR_RESULT CLIENT_pkgBosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 32;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORPN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sensorPN from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_SENSOR_PARTNUMBER_T outVal;
		byteToFLR_BOSON_SENSOR_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
		*sensorPN = (FLR_BOSON_SENSOR_PARTNUMBER_T)outVal;
		inPtr+=32;
	}// end of sensorPN handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSensorPN()

FLR_RESULT CLIENT_pkgBosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 16;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write parm_struct to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_BOSON_GAIN_SWITCH_PARAMS_T *inVal = (const FLR_BOSON_GAIN_SWITCH_PARAMS_T *) &parm_struct;
		FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 16;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetGainSwitchParams()

FLR_RESULT CLIENT_pkgBosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 16;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read parm_struct from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_BOSON_GAIN_SWITCH_PARAMS_T outVal;
		byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T( (const uint8_t *) inPtr, &outVal);
		*parm_struct = (FLR_BOSON_GAIN_SWITCH_PARAMS_T)outVal;
		inPtr+=16;
	}// end of parm_struct handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetGainSwitchParams()

FLR_RESULT CLIENT_pkgBosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOHIGHGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read switchToHighGainFlag from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*switchToHighGainFlag = (uint8_t)outVal;
		inPtr+=1;
	}// end of switchToHighGainFlag handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSwitchToHighGainFlag()

FLR_RESULT CLIENT_pkgBosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOLOWGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read switchToLowGainFlag from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*switchToLowGainFlag = (uint8_t)outVal;
		inPtr+=1;
	}// end of switchToLowGainFlag handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetSwitchToLowGainFlag()

FLR_RESULT CLIENT_pkgBosonGetCLowToHighPercent(uint32_t *cLowToHighPercent) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCLOWTOHIGHPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read cLowToHighPercent from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*cLowToHighPercent = (uint32_t)outVal;
		inPtr+=4;
	}// end of cLowToHighPercent handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetCLowToHighPercent()

FLR_RESULT CLIENT_pkgBosonGetMaxLensTables(uint32_t *maxLensTables) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMAXLENSTABLES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read maxLensTables from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*maxLensTables = (uint32_t)outVal;
		inPtr+=4;
	}// end of maxLensTables handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetMaxLensTables()

FLR_RESULT CLIENT_pkgBosonGetFfcWaitCloseFrames(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFfcWaitCloseFrames()

FLR_RESULT CLIENT_pkgBosonSetFfcWaitCloseFrames(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonSetFfcWaitCloseFrames()

FLR_RESULT CLIENT_pkgBosonCheckForTableSwitch() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_CHECKFORTABLESWITCH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonCheckForTableSwitch()

FLR_RESULT CLIENT_pkgBosonGetDesiredTableNumber(uint32_t *desiredTableNumber) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETDESIREDTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read desiredTableNumber from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*desiredTableNumber = (uint32_t)outVal;
		inPtr+=4;
	}// end of desiredTableNumber handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetDesiredTableNumber()

FLR_RESULT CLIENT_pkgBosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCSTATUS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read ffcStatus from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*ffcStatus = (FLR_BOSON_FFCSTATUS_E)outVal;
		inPtr+=4;
	}// end of ffcStatus handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgBosonGetFfcStatus()

// End Module: boson
// Begin Module: dvo
FLR_RESULT CLIENT_pkgDvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write analogVideoState to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = analogVideoState;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetAnalogVideoState()

FLR_RESULT CLIENT_pkgDvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read analogVideoState from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*analogVideoState = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of analogVideoState handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetAnalogVideoState()

FLR_RESULT CLIENT_pkgDvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write format to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_OUTPUT_FORMAT_E inVal = format;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputFormat()

FLR_RESULT CLIENT_pkgDvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read format from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*format = (FLR_DVO_OUTPUT_FORMAT_E)outVal;
		inPtr+=4;
	}// end of format handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputFormat()

FLR_RESULT CLIENT_pkgDvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 12;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write settings to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_YCBCR_SETTINGS_T *inVal = (const FLR_DVO_YCBCR_SETTINGS_T *) &settings;
		FLR_DVO_YCBCR_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 12;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputYCbCrSettings()

FLR_RESULT CLIENT_pkgDvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read settings from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_DVO_YCBCR_SETTINGS_T outVal;
		byteToFLR_DVO_YCBCR_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*settings = (FLR_DVO_YCBCR_SETTINGS_T)outVal;
		inPtr+=12;
	}// end of settings handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputYCbCrSettings()

FLR_RESULT CLIENT_pkgDvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write settings to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_RGB_SETTINGS_T *inVal = (const FLR_DVO_RGB_SETTINGS_T *) &settings;
		FLR_DVO_RGB_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 8;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetOutputRGBSettings()

FLR_RESULT CLIENT_pkgDvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read settings from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_DVO_RGB_SETTINGS_T outVal;
		byteToFLR_DVO_RGB_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*settings = (FLR_DVO_RGB_SETTINGS_T)outVal;
		inPtr+=8;
	}// end of settings handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetOutputRGBSettings()

FLR_RESULT CLIENT_pkgDvoApplyCustomSettings() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_APPLYCUSTOMSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoApplyCustomSettings()

FLR_RESULT CLIENT_pkgDvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write displayMode to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_DISPLAY_MODE_E inVal = displayMode;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetDisplayMode()

FLR_RESULT CLIENT_pkgDvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read displayMode from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*displayMode = (FLR_DVO_DISPLAY_MODE_E)outVal;
		inPtr+=4;
	}// end of displayMode handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetDisplayMode()

FLR_RESULT CLIENT_pkgDvoSetType(const FLR_DVO_TYPE_E tap) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write tap to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_DVO_TYPE_E inVal = tap;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoSetType()

FLR_RESULT CLIENT_pkgDvoGetType(FLR_DVO_TYPE_E *tap) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read tap from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*tap = (FLR_DVO_TYPE_E)outVal;
		inPtr+=4;
	}// end of tap handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDvoGetType()

// End Module: dvo
// Begin Module: capture
FLR_RESULT CLIENT_pkgCaptureSingleFrame() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAME, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureSingleFrame()

FLR_RESULT CLIENT_pkgCaptureFrames(const FLR_CAPTURE_SETTINGS_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 10;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_CAPTURE_SETTINGS_T *inVal = (const FLR_CAPTURE_SETTINGS_T *) &data;
		FLR_CAPTURE_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 10;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_FRAMES, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgCaptureFrames()

// End Module: capture
// Begin Module: scnr
FLR_RESULT CLIENT_pkgScnrSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetEnableState()

FLR_RESULT CLIENT_pkgScnrGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetEnableState()

FLR_RESULT CLIENT_pkgScnrSetThColSum(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThColSum()

FLR_RESULT CLIENT_pkgScnrGetThColSum(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThColSum()

FLR_RESULT CLIENT_pkgScnrSetThPixel(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetThPixel()

FLR_RESULT CLIENT_pkgScnrGetThPixel(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThPixel()

FLR_RESULT CLIENT_pkgScnrSetMaxCorr(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrSetMaxCorr()

FLR_RESULT CLIENT_pkgScnrGetMaxCorr(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetMaxCorr()

FLR_RESULT CLIENT_pkgScnrRestoreDefaults() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_RESTOREDEFAULTS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrRestoreDefaults()

FLR_RESULT CLIENT_pkgScnrGetThPixelApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXELAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetThPixelApplied()

FLR_RESULT CLIENT_pkgScnrGetMaxCorrApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORRAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScnrGetMaxCorrApplied()

// End Module: scnr
// Begin Module: agc
FLR_RESULT CLIENT_pkgAgcSetPercentPerBin(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetPercentPerBin()

FLR_RESULT CLIENT_pkgAgcGetPercentPerBin(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetPercentPerBin()

FLR_RESULT CLIENT_pkgAgcSetLinearPercent(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetLinearPercent()

FLR_RESULT CLIENT_pkgAgcGetLinearPercent(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetLinearPercent()

FLR_RESULT CLIENT_pkgAgcSetOutlierCut(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetOutlierCut()

FLR_RESULT CLIENT_pkgAgcGetOutlierCut(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetOutlierCut()

FLR_RESULT CLIENT_pkgAgcSetDrOut(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDROUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetDrOut()

FLR_RESULT CLIENT_pkgAgcGetDrOut(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDROUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetDrOut()

FLR_RESULT CLIENT_pkgAgcSetMaxGain(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetMaxGain()

FLR_RESULT CLIENT_pkgAgcGetMaxGain(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetMaxGain()

FLR_RESULT CLIENT_pkgAgcSetdf(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetdf()

FLR_RESULT CLIENT_pkgAgcGetdf(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetdf()

FLR_RESULT CLIENT_pkgAgcSetGamma(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetGamma()

FLR_RESULT CLIENT_pkgAgcGetGamma(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetGamma()

FLR_RESULT CLIENT_pkgAgcGetFirstBin(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETFIRSTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetFirstBin()

FLR_RESULT CLIENT_pkgAgcGetLastBin(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLASTBIN, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetLastBin()

FLR_RESULT CLIENT_pkgAgcSetDetailHeadroom(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetDetailHeadroom()

FLR_RESULT CLIENT_pkgAgcGetDetailHeadroom(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetDetailHeadroom()

FLR_RESULT CLIENT_pkgAgcSetd2br(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetd2br()

FLR_RESULT CLIENT_pkgAgcGetd2br(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetd2br()

FLR_RESULT CLIENT_pkgAgcSetSigmaR(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetSigmaR()

FLR_RESULT CLIENT_pkgAgcGetSigmaR(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetSigmaR()

FLR_RESULT CLIENT_pkgAgcSetUseEntropy(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetUseEntropy()

FLR_RESULT CLIENT_pkgAgcGetUseEntropy(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetUseEntropy()

FLR_RESULT CLIENT_pkgAgcSetROI(const FLR_AGC_ROI_T roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 8;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write roi to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_AGC_ROI_T *inVal = (const FLR_AGC_ROI_T *) &roi;
		FLR_AGC_ROI_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 8;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcSetROI()

FLR_RESULT CLIENT_pkgAgcGetROI(FLR_AGC_ROI_T *roi) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETROI, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read roi from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_AGC_ROI_T outVal;
		byteToFLR_AGC_ROI_T( (const uint8_t *) inPtr, &outVal);
		*roi = (FLR_AGC_ROI_T)outVal;
		inPtr+=8;
	}// end of roi handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetROI()

FLR_RESULT CLIENT_pkgAgcGetMaxGainApplied(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAINAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetMaxGainApplied()

FLR_RESULT CLIENT_pkgAgcGetSigmaRApplied(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMARAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcGetSigmaRApplied()

// End Module: agc
// Begin Module: tf
FLR_RESULT CLIENT_pkgTfSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetEnableState()

FLR_RESULT CLIENT_pkgTfGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetEnableState()

FLR_RESULT CLIENT_pkgTfSetDelta_nf(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetDelta_nf()

FLR_RESULT CLIENT_pkgTfGetDelta_nf(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetDelta_nf()

FLR_RESULT CLIENT_pkgTfSetTHDeltaMotion(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetTHDeltaMotion()

FLR_RESULT CLIENT_pkgTfGetTHDeltaMotion(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetTHDeltaMotion()

FLR_RESULT CLIENT_pkgTfSetWLut(const FLR_TF_WLUT_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 32;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_WLUT_T *inVal = (const FLR_TF_WLUT_T *) &data;
		FLR_TF_WLUT_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 32;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetWLut()

FLR_RESULT CLIENT_pkgTfGetWLut(FLR_TF_WLUT_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 32;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TF_WLUT_T outVal;
		byteToFLR_TF_WLUT_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_WLUT_T)outVal;
		inPtr+=32;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetWLut()

FLR_RESULT CLIENT_pkgTfGetMotionCount(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionCount()

FLR_RESULT CLIENT_pkgTfSetMotionMode(const FLR_TF_MOTION_MODE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_MOTION_MODE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionMode()

FLR_RESULT CLIENT_pkgTfGetMotionMode(FLR_TF_MOTION_MODE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONMODE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_MOTION_MODE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionMode()

FLR_RESULT CLIENT_pkgTfSetMotionState(const FLR_TF_MOTION_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_MOTION_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionState()

FLR_RESULT CLIENT_pkgTfGetMotionState(FLR_TF_MOTION_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_MOTION_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionState()

FLR_RESULT CLIENT_pkgTfSetMotionThreshold(const uint32_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = data;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionThreshold()

FLR_RESULT CLIENT_pkgTfGetMotionThreshold(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionThreshold()

FLR_RESULT CLIENT_pkgTfSetMotionDeltaLUT(const FLR_TF_MOTION_DELTA_LUT_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 40;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_MOTION_DELTA_LUT_T *inVal = (const FLR_TF_MOTION_DELTA_LUT_T *) &data;
		FLR_TF_MOTION_DELTA_LUT_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 40;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONDELTALUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionDeltaLUT()

FLR_RESULT CLIENT_pkgTfGetMotionDeltaLUT(FLR_TF_MOTION_DELTA_LUT_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 40;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONDELTALUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TF_MOTION_DELTA_LUT_T outVal;
		byteToFLR_TF_MOTION_DELTA_LUT_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_MOTION_DELTA_LUT_T)outVal;
		inPtr+=40;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionDeltaLUT()

FLR_RESULT CLIENT_pkgTfSetMotionDeltaIndex(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONDELTAINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetMotionDeltaIndex()

FLR_RESULT CLIENT_pkgTfGetMotionDeltaIndex(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONDELTAINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetMotionDeltaIndex()

FLR_RESULT CLIENT_pkgTfSetNfLut(const FLR_TF_NF_LUT_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 34;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TF_NF_LUT_T *inVal = (const FLR_TF_NF_LUT_T *) &data;
		FLR_TF_NF_LUT_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 34;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETNFLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfSetNfLut()

FLR_RESULT CLIENT_pkgTfGetNfLut(FLR_TF_NF_LUT_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 34;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETNFLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TF_NF_LUT_T outVal;
		byteToFLR_TF_NF_LUT_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TF_NF_LUT_T)outVal;
		inPtr+=34;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetNfLut()

FLR_RESULT CLIENT_pkgTfGetDelta_nfApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetDelta_nfApplied()

FLR_RESULT CLIENT_pkgTfGetTHDeltaMotionApplied(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTIONAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetTHDeltaMotionApplied()

FLR_RESULT CLIENT_pkgTfGetSnapshotBufferAddr(uint32_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETSNAPSHOTBUFFERADDR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (uint32_t)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTfGetSnapshotBufferAddr()

// End Module: tf
// Begin Module: mem
FLR_RESULT CLIENT_pkgMemReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 7;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write bufferNum to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = bufferNum;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCAPTURE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
		inPtr+=sizeInBytes;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemReadCapture()

FLR_RESULT CLIENT_pkgMemGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 8;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETCAPTURESIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read bytes from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*bytes = (uint32_t)outVal;
		inPtr+=4;
	}// end of bytes handling
	
	// read rows from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*rows = (uint16_t)outVal;
		inPtr+=2;
	}// end of rows handling
	
	// read columns from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*columns = (uint16_t)outVal;
		inPtr+=2;
	}// end of columns handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemGetCaptureSize()

FLR_RESULT CLIENT_pkgMemWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = (uint32_t) sizeInBytes + 11;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		UCHARArrayToByte(data,sizeInBytes,(const uint8_t *) outPtr);
		outPtr += sizeInBytes;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_WRITEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemWriteFlash()

FLR_RESULT CLIENT_pkgMemReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 11;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write sizeInBytes to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = sizeInBytes;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
		inPtr+=sizeInBytes;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemReadFlash()

FLR_RESULT CLIENT_pkgMemGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETFLASHSIZE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read bytes from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*bytes = (uint32_t)outVal;
		inPtr+=4;
	}// end of bytes handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemGetFlashSize()

FLR_RESULT CLIENT_pkgMemEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemEraseFlash()

FLR_RESULT CLIENT_pkgMemEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 13;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write location to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_MEM_LOCATION_E inVal = location;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write offset to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = offset;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	//write length to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint32_t inVal = length;
		UINT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASHPARTIAL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgMemEraseFlashPartial()

// End Module: mem
// Begin Module: colorLut
FLR_RESULT CLIENT_pkgColorlutSetControl(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutSetControl()

FLR_RESULT CLIENT_pkgColorlutGetControl(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutGetControl()

FLR_RESULT CLIENT_pkgColorlutSetId(const FLR_COLORLUT_ID_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_COLORLUT_ID_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutSetId()

FLR_RESULT CLIENT_pkgColorlutGetId(FLR_COLORLUT_ID_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETID, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_COLORLUT_ID_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgColorlutGetId()

// End Module: colorLut
// Begin Module: spnr
FLR_RESULT CLIENT_pkgSpnrSetEnableState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetEnableState()

FLR_RESULT CLIENT_pkgSpnrGetEnableState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetEnableState()

FLR_RESULT CLIENT_pkgSpnrGetState(FLR_SPNR_STATE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_SPNR_STATE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetState()

FLR_RESULT CLIENT_pkgSpnrGetSF(float *sf) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sf from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sf = (float)outVal;
		inPtr+=4;
	}// end of sf handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetSF()

FLR_RESULT CLIENT_pkgSpnrSetScaleFactorLUT(const FLR_SPNR_SF_LUT_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 40;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SPNR_SF_LUT_T *inVal = (const FLR_SPNR_SF_LUT_T *) &data;
		FLR_SPNR_SF_LUT_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 40;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETSCALEFACTORLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetScaleFactorLUT()

FLR_RESULT CLIENT_pkgSpnrGetScaleFactorLUT(FLR_SPNR_SF_LUT_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 40;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSCALEFACTORLUT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_SPNR_SF_LUT_T outVal;
		byteToFLR_SPNR_SF_LUT_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_SPNR_SF_LUT_T)outVal;
		inPtr+=40;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetScaleFactorLUT()

FLR_RESULT CLIENT_pkgSpnrSetUpdateRateIndex(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETUPDATERATEINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetUpdateRateIndex()

FLR_RESULT CLIENT_pkgSpnrGetUpdateRateIndex(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETUPDATERATEINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetUpdateRateIndex()

FLR_RESULT CLIENT_pkgSpnrSetAutoExecuteState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETAUTOEXECUTESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetAutoExecuteState()

FLR_RESULT CLIENT_pkgSpnrGetAutoExecuteState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETAUTOEXECUTESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetAutoExecuteState()

FLR_RESULT CLIENT_pkgSpnrGetSFApplied(float *sf) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sf from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sf = (float)outVal;
		inPtr+=4;
	}// end of sf handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetSFApplied()

FLR_RESULT CLIENT_pkgSpnrSetFrameBasedSF(const float sf) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write sf to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = sf;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETFRAMEBASEDSF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetFrameBasedSF()

FLR_RESULT CLIENT_pkgSpnrGetFrameBasedSF(float *sf) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETFRAMEBASEDSF, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read sf from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*sf = (float)outVal;
		inPtr+=4;
	}// end of sf handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetFrameBasedSF()

FLR_RESULT CLIENT_pkgSpnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 256;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SPNR_PSD_KERNEL_T *inVal = (const FLR_SPNR_PSD_KERNEL_T *) &data;
		FLR_SPNR_PSD_KERNEL_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 256;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrSetPSDKernel()

FLR_RESULT CLIENT_pkgSpnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 256;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_SPNR_PSD_KERNEL_T outVal;
		byteToFLR_SPNR_PSD_KERNEL_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_SPNR_PSD_KERNEL_T)outVal;
		inPtr+=256;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSpnrGetPSDKernel()

// End Module: spnr
// Begin Module: scaler
FLR_RESULT CLIENT_pkgScalerGetMaxZoom(uint32_t *zoom) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETMAXZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read zoom from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*zoom = (uint32_t)outVal;
		inPtr+=4;
	}// end of zoom handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerGetMaxZoom()

FLR_RESULT CLIENT_pkgScalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 12;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write zoomParams to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SCALER_ZOOM_PARAMS_T *inVal = (const FLR_SCALER_ZOOM_PARAMS_T *) &zoomParams;
		FLR_SCALER_ZOOM_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 12;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerSetZoom()

FLR_RESULT CLIENT_pkgScalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 12;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read zoomParams from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_SCALER_ZOOM_PARAMS_T outVal;
		byteToFLR_SCALER_ZOOM_PARAMS_T( (const uint8_t *) inPtr, &outVal);
		*zoomParams = (FLR_SCALER_ZOOM_PARAMS_T)outVal;
		inPtr+=12;
	}// end of zoomParams handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerGetZoom()

FLR_RESULT CLIENT_pkgScalerSetFilter(const FLR_SCALER_FILTER_E filter) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write filter to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_SCALER_FILTER_E inVal = filter;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETFILTER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerSetFilter()

FLR_RESULT CLIENT_pkgScalerGetFilter(FLR_SCALER_FILTER_E *filter) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETFILTER, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read filter from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*filter = (FLR_SCALER_FILTER_E)outVal;
		inPtr+=4;
	}// end of filter handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgScalerGetFilter()

// End Module: scaler
// Begin Module: sysctrl
FLR_RESULT CLIENT_pkgSysctrlSetFreezeState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_SETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlSetFreezeState()

FLR_RESULT CLIENT_pkgSysctrlGetFreezeState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlGetFreezeState()

FLR_RESULT CLIENT_pkgSysctrlGetCameraFrameRate(uint32_t *frameRate) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETCAMERAFRAMERATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read frameRate from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint32_t outVal;
		byteToUINT_32( (const uint8_t *) inPtr, &outVal);
		*frameRate = (uint32_t)outVal;
		inPtr+=4;
	}// end of frameRate handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgSysctrlGetCameraFrameRate()

// End Module: sysctrl
// Begin Module: agcClaw
FLR_RESULT CLIENT_pkgAgcclawSetDampingFactor(const uint16_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 2;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint16_t inVal = data;
		UINT_16ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 2;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_SETDAMPINGFACTOR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawSetDampingFactor()

FLR_RESULT CLIENT_pkgAgcclawGetDampingFactor(uint16_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 2;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_GETDAMPINGFACTOR, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint16_t outVal;
		byteToUINT_16( (const uint8_t *) inPtr, &outVal);
		*data = (uint16_t)outVal;
		inPtr+=2;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawGetDampingFactor()

FLR_RESULT CLIENT_pkgAgcclawSetClipLimit(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_SETCLIPLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawSetClipLimit()

FLR_RESULT CLIENT_pkgAgcclawGetClipLimit(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_GETCLIPLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawGetClipLimit()

FLR_RESULT CLIENT_pkgAgcclawSetGainLimit(const float data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const float inVal = data;
		FLOATToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_SETGAINLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawSetGainLimit()

FLR_RESULT CLIENT_pkgAgcclawGetGainLimit(float *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGCCLAW_GETGAINLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		float outVal;
		byteToFLOAT( (const uint8_t *) inPtr, &outVal);
		*data = (float)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgAgcclawGetGainLimit()

// End Module: agcClaw
// Begin Module: testRamp
FLR_RESULT CLIENT_pkgTestrampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 5;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TESTRAMP_TYPE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetType()

FLR_RESULT CLIENT_pkgTestrampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TESTRAMP_TYPE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetType()

FLR_RESULT CLIENT_pkgTestrampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 7;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_TESTRAMP_SETTINGS_T *inVal = (const FLR_TESTRAMP_SETTINGS_T *) &data;
		FLR_TESTRAMP_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 6;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetSettings()

FLR_RESULT CLIENT_pkgTestrampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 6;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write index to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = index;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		FLR_TESTRAMP_SETTINGS_T outVal;
		byteToFLR_TESTRAMP_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_TESTRAMP_SETTINGS_T)outVal;
		inPtr+=6;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetSettings()

FLR_RESULT CLIENT_pkgTestrampSetMotionState(const FLR_ENABLE_E data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 4;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const FLR_ENABLE_E inVal = data;
		INT_32ToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 4;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetMotionState()

FLR_RESULT CLIENT_pkgTestrampGetMotionState(FLR_ENABLE_E *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 4;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		int32_t outVal;
		byteToINT_32( (const uint8_t *) inPtr, &outVal);
		*data = (FLR_ENABLE_E)outVal;
		inPtr+=4;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetMotionState()

FLR_RESULT CLIENT_pkgTestrampSetIndex(const uint8_t data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 1;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	//write data to sendData buffer
	{ //Block to allow reuse of inVal
		if(outPtr >= (sendData+sendBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		const uint8_t inVal = data;
		UCHARToByte(inVal, (const uint8_t *) outPtr);
		outPtr += 1;
	}
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampSetIndex()

FLR_RESULT CLIENT_pkgTestrampGetIndex(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetIndex()

FLR_RESULT CLIENT_pkgTestrampGetMaxIndex(uint8_t *data) {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMAXINDEX, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	// read data from receiveData buffer
	{ //Block to allow reuse of outVal
		if(inPtr >= (receiveData+receiveBytes)){
			return R_SDK_PKG_BUFFER_OVERFLOW;
		}
		uint8_t outVal;
		byteToUCHAR( (const uint8_t *) inPtr, &outVal);
		*data = (uint8_t)outVal;
		inPtr+=1;
	}// end of data handling
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgTestrampGetMaxIndex()

// End Module: testRamp
// Begin Module: testFramework
// End Module: testFramework
// Begin Module: dummy
FLR_RESULT CLIENT_pkgDummyBadCommand() {
	// Allocate buffers with space for marshalled data
	uint32_t sendBytes = 0;
	const uint8_t sendData[sendBytes];
	uint32_t receiveBytes = 1;
	uint8_t receiveData[receiveBytes];
	uint8_t *outPtr = (uint8_t *)sendData;
	
	FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DUMMY_BADCOMMAND, sendData, sendBytes, receiveData, &receiveBytes);
	
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	
	uint8_t *inPtr = (uint8_t *)receiveData;
	
	return R_SUCCESS;
	
}// End of CLIENT_pkgDummyBadCommand()

// End Module: dummy
