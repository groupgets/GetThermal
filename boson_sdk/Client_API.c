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


#include "Client_API.h"

FLR_RESULT gaoSetGainState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetGainState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainState()

FLR_RESULT gaoGetGainState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetGainState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainState()

FLR_RESULT gaoSetFfcState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetFfcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFfcState()

FLR_RESULT gaoGetFfcState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetFfcState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcState()

FLR_RESULT gaoSetTempCorrectionState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetTempCorrectionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTempCorrectionState()

FLR_RESULT gaoGetTempCorrectionState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetTempCorrectionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTempCorrectionState()

FLR_RESULT gaoSetIConstL(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetIConstL(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIConstL()

FLR_RESULT gaoGetIConstL(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetIConstL(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIConstL()

FLR_RESULT gaoSetIConstM(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetIConstM(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIConstM()

FLR_RESULT gaoGetIConstM(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetIConstM(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIConstM()

FLR_RESULT gaoSetAveragerState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetAveragerState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAveragerState()

FLR_RESULT gaoGetAveragerState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetAveragerState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAveragerState()

FLR_RESULT gaoSetNumFFCFrames(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetNumFFCFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetNumFFCFrames()

FLR_RESULT gaoGetNumFFCFrames(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetNumFFCFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNumFFCFrames()

FLR_RESULT gaoSetAveragerThreshold(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetAveragerThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAveragerThreshold()

FLR_RESULT gaoGetAveragerThreshold(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetAveragerThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAveragerThreshold()

FLR_RESULT gaoGetRnsState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetRnsState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetRnsState()

FLR_RESULT gaoSetTestRampState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgGaoSetTestRampState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTestRampState()

FLR_RESULT gaoGetTestRampState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgGaoGetTestRampState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTestRampState()

FLR_RESULT roicGetFPATemp(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATemp(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATemp()

FLR_RESULT roicGetFrameCount(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFrameCount(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFrameCount()

FLR_RESULT roicGetActiveNormalizationTarget(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetActiveNormalizationTarget(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetActiveNormalizationTarget()

FLR_RESULT roicGetControlWord(FLR_ROIC_CONTROL_WORD_T *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetControlWord(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetControlWord()

FLR_RESULT roicSetFPARampState(const FLR_ENABLE_E state){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPARampState(state);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPARampState()

FLR_RESULT roicGetFPARampState(FLR_ENABLE_E *state){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPARampState(state);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPARampState()

FLR_RESULT roicGetCurrentNUCIndex(int32_t *index){
	FLR_RESULT returncode = CLIENT_pkgRoicGetCurrentNUCIndex(index);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCurrentNUCIndex()

FLR_RESULT roicGetSensorADC1(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetSensorADC1(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorADC1()

FLR_RESULT roicGetSensorADC2(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetSensorADC2(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorADC2()

FLR_RESULT roicSetFPATempOffset(const int16_t data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempOffset(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempOffset()

FLR_RESULT roicGetFPATempOffset(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempOffset(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempOffset()

FLR_RESULT roicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempMode()

FLR_RESULT roicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempMode()

FLR_RESULT roicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempTable(table);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempTable()

FLR_RESULT roicSetFPATempValue(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgRoicSetFPATempValue(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFPATempValue()

FLR_RESULT roicGetFPATempValue(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgRoicGetFPATempValue(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFPATempValue()

FLR_RESULT bprSetState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgBprSetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetState()

FLR_RESULT bprGetState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgBprGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

FLR_RESULT telemetrySetState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTelemetrySetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetState()

FLR_RESULT telemetryGetState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTelemetryGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

FLR_RESULT telemetrySetLocation(const FLR_TELEMETRY_LOC_E data){
	FLR_RESULT returncode = CLIENT_pkgTelemetrySetLocation(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLocation()

FLR_RESULT telemetryGetLocation(FLR_TELEMETRY_LOC_E *data){
	FLR_RESULT returncode = CLIENT_pkgTelemetryGetLocation(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLocation()

FLR_RESULT bosonGetCameraSN(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCameraSN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraSN()

FLR_RESULT bosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCameraPN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraPN()

FLR_RESULT bosonSetSensorSN(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetSensorSN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSensorSN()

FLR_RESULT bosonGetSensorSN(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSensorSN(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorSN()

FLR_RESULT bosonRunFFC(){
	FLR_RESULT returncode = CLIENT_pkgBosonRunFFC();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RunFFC()

FLR_RESULT bosonSetFFCTempThreshold(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCTempThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCTempThreshold()

FLR_RESULT bosonGetFFCTempThreshold(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCTempThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCTempThreshold()

FLR_RESULT bosonSetFFCFrameThreshold(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCFrameThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCFrameThreshold()

FLR_RESULT bosonGetFFCFrameThreshold(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCFrameThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCFrameThreshold()

FLR_RESULT bosonGetFFCInProgress(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCInProgress(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCInProgress()

FLR_RESULT bosonReboot(){
	FLR_RESULT returncode = CLIENT_pkgBosonReboot();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Reboot()

FLR_RESULT bosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFFCMode(ffcMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFFCMode()

FLR_RESULT bosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFFCMode(ffcMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFFCMode()

FLR_RESULT bosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode){
	FLR_RESULT returncode = CLIENT_pkgBosonSetGainMode(gainMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainMode()

FLR_RESULT bosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode){
	FLR_RESULT returncode = CLIENT_pkgBosonGetGainMode(gainMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainMode()

FLR_RESULT bosonWriteDynamicHeaderToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteDynamicHeaderToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteDynamicHeaderToFlash()

FLR_RESULT bosonReadDynamicHeaderFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonReadDynamicHeaderFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadDynamicHeaderFromFlash()

FLR_RESULT bosonRestoreFactoryDefaultsFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RestoreFactoryDefaultsFromFlash()

FLR_RESULT bosonReadSensorIdHeaderFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonReadSensorIdHeaderFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadSensorIdHeaderFromFlash()

FLR_RESULT bosonReadCameraIdHeaderFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonReadCameraIdHeaderFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadCameraIdHeaderFromFlash()

FLR_RESULT bosonRestoreFactoryBadPixelsFromFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RestoreFactoryBadPixelsFromFlash()

FLR_RESULT bosonWriteBadPixelsToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteBadPixelsToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteBadPixelsToFlash()

FLR_RESULT bosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSoftwareRev(major, minor, patch);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSoftwareRev()

FLR_RESULT bosonSetBadPixelLocation(const uint32_t row, const uint32_t col){
	FLR_RESULT returncode = CLIENT_pkgBosonSetBadPixelLocation(row, col);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetBadPixelLocation()

FLR_RESULT bosonlookupFPATempDegCx10(int16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonlookupFPATempDegCx10(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of lookupFPATempDegCx10()

FLR_RESULT bosonlookupFPATempDegKx10(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonlookupFPATempDegKx10(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of lookupFPATempDegKx10()

FLR_RESULT bosonWriteLensGainToFlash(){
	FLR_RESULT returncode = CLIENT_pkgBosonWriteLensGainToFlash();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteLensGainToFlash()

FLR_RESULT bosonSetLensNumber(const uint32_t lensNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonSetLensNumber(lensNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLensNumber()

FLR_RESULT bosonGetLensNumber(uint32_t *lensNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetLensNumber(lensNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLensNumber()

FLR_RESULT bosonSetTableNumber(const uint32_t tableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonSetTableNumber(tableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTableNumber()

FLR_RESULT bosonGetTableNumber(uint32_t *tableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetTableNumber(tableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTableNumber()

FLR_RESULT bosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSensorPN(sensorPN);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSensorPN()

FLR_RESULT bosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct){
	FLR_RESULT returncode = CLIENT_pkgBosonSetGainSwitchParams(parm_struct);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainSwitchParams()

FLR_RESULT bosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct){
	FLR_RESULT returncode = CLIENT_pkgBosonGetGainSwitchParams(parm_struct);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainSwitchParams()

FLR_RESULT bosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSwitchToHighGainFlag(switchToHighGainFlag);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSwitchToHighGainFlag()

FLR_RESULT bosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag){
	FLR_RESULT returncode = CLIENT_pkgBosonGetSwitchToLowGainFlag(switchToLowGainFlag);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSwitchToLowGainFlag()

FLR_RESULT bosonGetCLowToHighPercent(uint32_t *cLowToHighPercent){
	FLR_RESULT returncode = CLIENT_pkgBosonGetCLowToHighPercent(cLowToHighPercent);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCLowToHighPercent()

FLR_RESULT bosonGetMaxLensTables(uint32_t *maxLensTables){
	FLR_RESULT returncode = CLIENT_pkgBosonGetMaxLensTables(maxLensTables);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxLensTables()

FLR_RESULT bosonGetFfcWaitCloseFrames(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFfcWaitCloseFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcWaitCloseFrames()

FLR_RESULT bosonSetFfcWaitCloseFrames(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgBosonSetFfcWaitCloseFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFfcWaitCloseFrames()

FLR_RESULT bosonCheckForTableSwitch(){
	FLR_RESULT returncode = CLIENT_pkgBosonCheckForTableSwitch();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of CheckForTableSwitch()

FLR_RESULT bosonGetDesiredTableNumber(uint32_t *desiredTableNumber){
	FLR_RESULT returncode = CLIENT_pkgBosonGetDesiredTableNumber(desiredTableNumber);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDesiredTableNumber()

FLR_RESULT bosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus){
	FLR_RESULT returncode = CLIENT_pkgBosonGetFfcStatus(ffcStatus);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFfcStatus()

FLR_RESULT dvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState){
	FLR_RESULT returncode = CLIENT_pkgDvoSetAnalogVideoState(analogVideoState);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAnalogVideoState()

FLR_RESULT dvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState){
	FLR_RESULT returncode = CLIENT_pkgDvoGetAnalogVideoState(analogVideoState);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAnalogVideoState()

FLR_RESULT dvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputFormat(format);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputFormat()

FLR_RESULT dvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputFormat(format);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputFormat()

FLR_RESULT dvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputYCbCrSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputYCbCrSettings()

FLR_RESULT dvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputYCbCrSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputYCbCrSettings()

FLR_RESULT dvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings){
	FLR_RESULT returncode = CLIENT_pkgDvoSetOutputRGBSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutputRGBSettings()

FLR_RESULT dvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings){
	FLR_RESULT returncode = CLIENT_pkgDvoGetOutputRGBSettings(settings);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutputRGBSettings()

FLR_RESULT dvoApplyCustomSettings(){
	FLR_RESULT returncode = CLIENT_pkgDvoApplyCustomSettings();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ApplyCustomSettings()

FLR_RESULT dvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode){
	FLR_RESULT returncode = CLIENT_pkgDvoSetDisplayMode(displayMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDisplayMode()

FLR_RESULT dvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode){
	FLR_RESULT returncode = CLIENT_pkgDvoGetDisplayMode(displayMode);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDisplayMode()

FLR_RESULT dvoSetType(const FLR_DVO_TYPE_E tap){
	FLR_RESULT returncode = CLIENT_pkgDvoSetType(tap);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetType()

FLR_RESULT dvoGetType(FLR_DVO_TYPE_E *tap){
	FLR_RESULT returncode = CLIENT_pkgDvoGetType(tap);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetType()

FLR_RESULT captureSingleFrame(){
	FLR_RESULT returncode = CLIENT_pkgCaptureSingleFrame();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SingleFrame()

FLR_RESULT captureFrames(const FLR_CAPTURE_SETTINGS_T data){
	FLR_RESULT returncode = CLIENT_pkgCaptureFrames(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Frames()

FLR_RESULT scnrSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

FLR_RESULT scnrGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

FLR_RESULT scnrSetThColSum(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThColSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThColSum()

FLR_RESULT scnrGetThColSum(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThColSum(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThColSum()

FLR_RESULT scnrSetThPixel(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetThPixel()

FLR_RESULT scnrGetThPixel(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThPixel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixel()

FLR_RESULT scnrSetMaxCorr(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgScnrSetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxCorr()

FLR_RESULT scnrGetMaxCorr(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetMaxCorr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorr()

FLR_RESULT scnrRestoreDefaults(){
	FLR_RESULT returncode = CLIENT_pkgScnrRestoreDefaults();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of RestoreDefaults()

FLR_RESULT scnrGetThPixelApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetThPixelApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetThPixelApplied()

FLR_RESULT scnrGetMaxCorrApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgScnrGetMaxCorrApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxCorrApplied()

FLR_RESULT agcSetPercentPerBin(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetPercentPerBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPercentPerBin()

FLR_RESULT agcGetPercentPerBin(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetPercentPerBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPercentPerBin()

FLR_RESULT agcSetLinearPercent(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetLinearPercent(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetLinearPercent()

FLR_RESULT agcGetLinearPercent(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetLinearPercent(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLinearPercent()

FLR_RESULT agcSetOutlierCut(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetOutlierCut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetOutlierCut()

FLR_RESULT agcGetOutlierCut(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetOutlierCut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetOutlierCut()

FLR_RESULT agcSetDrOut(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetDrOut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDrOut()

FLR_RESULT agcGetDrOut(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetDrOut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDrOut()

FLR_RESULT agcSetMaxGain(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetMaxGain(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMaxGain()

FLR_RESULT agcGetMaxGain(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetMaxGain(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxGain()

FLR_RESULT agcSetdf(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetdf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Setdf()

FLR_RESULT agcGetdf(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetdf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Getdf()

FLR_RESULT agcSetGamma(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetGamma(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGamma()

FLR_RESULT agcGetGamma(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetGamma(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGamma()

FLR_RESULT agcGetFirstBin(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetFirstBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFirstBin()

FLR_RESULT agcGetLastBin(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetLastBin(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetLastBin()

FLR_RESULT agcSetDetailHeadroom(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetDetailHeadroom(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDetailHeadroom()

FLR_RESULT agcGetDetailHeadroom(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetDetailHeadroom(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDetailHeadroom()

FLR_RESULT agcSetd2br(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetd2br(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Setd2br()

FLR_RESULT agcGetd2br(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetd2br(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of Getd2br()

FLR_RESULT agcSetSigmaR(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetSigmaR(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSigmaR()

FLR_RESULT agcGetSigmaR(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetSigmaR(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSigmaR()

FLR_RESULT agcSetUseEntropy(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgAgcSetUseEntropy(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetUseEntropy()

FLR_RESULT agcGetUseEntropy(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetUseEntropy(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetUseEntropy()

FLR_RESULT agcSetROI(const FLR_AGC_ROI_T roi){
	FLR_RESULT returncode = CLIENT_pkgAgcSetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetROI()

FLR_RESULT agcGetROI(FLR_AGC_ROI_T *roi){
	FLR_RESULT returncode = CLIENT_pkgAgcGetROI(roi);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetROI()

FLR_RESULT agcGetMaxGainApplied(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetMaxGainApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxGainApplied()

FLR_RESULT agcGetSigmaRApplied(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcGetSigmaRApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSigmaRApplied()

FLR_RESULT tfSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTfSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

FLR_RESULT tfGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

FLR_RESULT tfSetDelta_nf(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetDelta_nf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDelta_nf()

FLR_RESULT tfGetDelta_nf(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetDelta_nf(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDelta_nf()

FLR_RESULT tfSetTHDeltaMotion(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetTHDeltaMotion(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetTHDeltaMotion()

FLR_RESULT tfGetTHDeltaMotion(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetTHDeltaMotion(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTHDeltaMotion()

FLR_RESULT tfSetWLut(const FLR_TF_WLUT_T data){
	FLR_RESULT returncode = CLIENT_pkgTfSetWLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetWLut()

FLR_RESULT tfGetWLut(FLR_TF_WLUT_T *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetWLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetWLut()

FLR_RESULT tfGetMotionCount(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionCount(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionCount()

FLR_RESULT tfSetMotionMode(const FLR_TF_MOTION_MODE_E data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionMode()

FLR_RESULT tfGetMotionMode(FLR_TF_MOTION_MODE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionMode(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionMode()

FLR_RESULT tfSetMotionState(const FLR_TF_MOTION_E data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionState()

FLR_RESULT tfGetMotionState(FLR_TF_MOTION_E *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionState()

FLR_RESULT tfSetMotionThreshold(const uint32_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionThreshold()

FLR_RESULT tfGetMotionThreshold(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionThreshold(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionThreshold()

FLR_RESULT tfSetMotionDeltaLUT(const FLR_TF_MOTION_DELTA_LUT_T data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionDeltaLUT(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionDeltaLUT()

FLR_RESULT tfGetMotionDeltaLUT(FLR_TF_MOTION_DELTA_LUT_T *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionDeltaLUT(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionDeltaLUT()

FLR_RESULT tfSetMotionDeltaIndex(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgTfSetMotionDeltaIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionDeltaIndex()

FLR_RESULT tfGetMotionDeltaIndex(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetMotionDeltaIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionDeltaIndex()

FLR_RESULT tfSetNfLut(const FLR_TF_NF_LUT_T data){
	FLR_RESULT returncode = CLIENT_pkgTfSetNfLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetNfLut()

FLR_RESULT tfGetNfLut(FLR_TF_NF_LUT_T *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetNfLut(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetNfLut()

FLR_RESULT tfGetDelta_nfApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetDelta_nfApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDelta_nfApplied()

FLR_RESULT tfGetTHDeltaMotionApplied(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetTHDeltaMotionApplied(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetTHDeltaMotionApplied()

FLR_RESULT tfGetSnapshotBufferAddr(uint32_t *data){
	FLR_RESULT returncode = CLIENT_pkgTfGetSnapshotBufferAddr(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSnapshotBufferAddr()

FLR_RESULT memReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemReadCapture(bufferNum, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadCapture()

FLR_RESULT memGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns){
	FLR_RESULT returncode = CLIENT_pkgMemGetCaptureSize(bytes, rows, columns);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCaptureSize()

FLR_RESULT memWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemWriteFlash(location, index, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of WriteFlash()

FLR_RESULT memReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgMemReadFlash(location, index, offset, sizeInBytes, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of ReadFlash()

FLR_RESULT memGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes){
	FLR_RESULT returncode = CLIENT_pkgMemGetFlashSize(location, bytes);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFlashSize()

FLR_RESULT memEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index){
	FLR_RESULT returncode = CLIENT_pkgMemEraseFlash(location, index);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of EraseFlash()

FLR_RESULT memEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length){
	FLR_RESULT returncode = CLIENT_pkgMemEraseFlashPartial(location, index, offset, length);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of EraseFlashPartial()

FLR_RESULT colorLutSetControl(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgColorlutSetControl(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetControl()

FLR_RESULT colorLutGetControl(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgColorlutGetControl(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetControl()

FLR_RESULT colorLutSetId(const FLR_COLORLUT_ID_E data){
	FLR_RESULT returncode = CLIENT_pkgColorlutSetId(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetId()

FLR_RESULT colorLutGetId(FLR_COLORLUT_ID_E *data){
	FLR_RESULT returncode = CLIENT_pkgColorlutGetId(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetId()

FLR_RESULT spnrSetEnableState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetEnableState()

FLR_RESULT spnrGetEnableState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetEnableState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetEnableState()

FLR_RESULT spnrGetState(FLR_SPNR_STATE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetState()

FLR_RESULT spnrGetSF(float *sf){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetSF(sf);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSF()

FLR_RESULT spnrSetScaleFactorLUT(const FLR_SPNR_SF_LUT_T data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetScaleFactorLUT(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetScaleFactorLUT()

FLR_RESULT spnrGetScaleFactorLUT(FLR_SPNR_SF_LUT_T *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetScaleFactorLUT(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetScaleFactorLUT()

FLR_RESULT spnrSetUpdateRateIndex(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetUpdateRateIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetUpdateRateIndex()

FLR_RESULT spnrGetUpdateRateIndex(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetUpdateRateIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetUpdateRateIndex()

FLR_RESULT spnrSetAutoExecuteState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetAutoExecuteState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetAutoExecuteState()

FLR_RESULT spnrGetAutoExecuteState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetAutoExecuteState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetAutoExecuteState()

FLR_RESULT spnrGetSFApplied(float *sf){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetSFApplied(sf);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSFApplied()

FLR_RESULT spnrSetFrameBasedSF(const float sf){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetFrameBasedSF(sf);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFrameBasedSF()

FLR_RESULT spnrGetFrameBasedSF(float *sf){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetFrameBasedSF(sf);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFrameBasedSF()

FLR_RESULT spnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data){
	FLR_RESULT returncode = CLIENT_pkgSpnrSetPSDKernel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetPSDKernel()

FLR_RESULT spnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data){
	FLR_RESULT returncode = CLIENT_pkgSpnrGetPSDKernel(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetPSDKernel()

FLR_RESULT scalerGetMaxZoom(uint32_t *zoom){
	FLR_RESULT returncode = CLIENT_pkgScalerGetMaxZoom(zoom);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxZoom()

FLR_RESULT scalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams){
	FLR_RESULT returncode = CLIENT_pkgScalerSetZoom(zoomParams);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetZoom()

FLR_RESULT scalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams){
	FLR_RESULT returncode = CLIENT_pkgScalerGetZoom(zoomParams);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetZoom()

FLR_RESULT scalerSetFilter(const FLR_SCALER_FILTER_E filter){
	FLR_RESULT returncode = CLIENT_pkgScalerSetFilter(filter);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFilter()

FLR_RESULT scalerGetFilter(FLR_SCALER_FILTER_E *filter){
	FLR_RESULT returncode = CLIENT_pkgScalerGetFilter(filter);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFilter()

FLR_RESULT sysctrlSetFreezeState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgSysctrlSetFreezeState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetFreezeState()

FLR_RESULT sysctrlGetFreezeState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgSysctrlGetFreezeState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetFreezeState()

FLR_RESULT sysctrlGetCameraFrameRate(uint32_t *frameRate){
	FLR_RESULT returncode = CLIENT_pkgSysctrlGetCameraFrameRate(frameRate);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetCameraFrameRate()

FLR_RESULT agcClawSetDampingFactor(const uint16_t data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawSetDampingFactor(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetDampingFactor()

FLR_RESULT agcClawGetDampingFactor(uint16_t *data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawGetDampingFactor(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetDampingFactor()

FLR_RESULT agcClawSetClipLimit(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawSetClipLimit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetClipLimit()

FLR_RESULT agcClawGetClipLimit(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawGetClipLimit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetClipLimit()

FLR_RESULT agcClawSetGainLimit(const float data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawSetGainLimit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetGainLimit()

FLR_RESULT agcClawGetGainLimit(float *data){
	FLR_RESULT returncode = CLIENT_pkgAgcclawGetGainLimit(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetGainLimit()

FLR_RESULT testRampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetType(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetType()

FLR_RESULT testRampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetType(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetType()

FLR_RESULT testRampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetSettings(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetSettings()

FLR_RESULT testRampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetSettings(index, data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetSettings()

FLR_RESULT testRampSetMotionState(const FLR_ENABLE_E data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetMotionState()

FLR_RESULT testRampGetMotionState(FLR_ENABLE_E *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetMotionState(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMotionState()

FLR_RESULT testRampSetIndex(const uint8_t data){
	FLR_RESULT returncode = CLIENT_pkgTestrampSetIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of SetIndex()

FLR_RESULT testRampGetIndex(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetIndex()

FLR_RESULT testRampGetMaxIndex(uint8_t *data){
	FLR_RESULT returncode = CLIENT_pkgTestrampGetMaxIndex(data);
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of GetMaxIndex()

FLR_RESULT dummyBadCommand(){
	FLR_RESULT returncode = CLIENT_pkgDummyBadCommand();
	// Check for any errorcode
	if((uint32_t) returncode){
		return returncode;
	}
	return R_SUCCESS;
} // End of BadCommand()

