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


#ifndef CLIENT_API_H
#define CLIENT_API_H

#include <stdint.h>
#include "EnumTypes.h"
#include "ReturnCodes.h"
#include "Serializer_Struct.h"
#include "Client_Packager.h"


#define MAX_MEMORY_CHUNK  256
FLR_RESULT gaoSetGainState(const FLR_ENABLE_E data);
FLR_RESULT gaoGetGainState(FLR_ENABLE_E *data);
FLR_RESULT gaoSetFfcState(const FLR_ENABLE_E data);
FLR_RESULT gaoGetFfcState(FLR_ENABLE_E *data);
FLR_RESULT gaoSetTempCorrectionState(const FLR_ENABLE_E data);
FLR_RESULT gaoGetTempCorrectionState(FLR_ENABLE_E *data);
FLR_RESULT gaoSetIConstL(const int16_t data);
FLR_RESULT gaoGetIConstL(int16_t *data);
FLR_RESULT gaoSetIConstM(const int16_t data);
FLR_RESULT gaoGetIConstM(int16_t *data);
FLR_RESULT gaoSetAveragerState(const FLR_ENABLE_E data);
FLR_RESULT gaoGetAveragerState(FLR_ENABLE_E *data);
FLR_RESULT gaoSetNumFFCFrames(const uint16_t data);
FLR_RESULT gaoGetNumFFCFrames(uint16_t *data);
FLR_RESULT gaoSetAveragerThreshold(const uint16_t data);
FLR_RESULT gaoGetAveragerThreshold(uint16_t *data);
FLR_RESULT gaoGetRnsState(FLR_ENABLE_E *data);
FLR_RESULT gaoSetTestRampState(const FLR_ENABLE_E data);
FLR_RESULT gaoGetTestRampState(FLR_ENABLE_E *data);
FLR_RESULT roicGetFPATemp(uint16_t *data);
FLR_RESULT roicGetFrameCount(uint32_t *data);
FLR_RESULT roicGetActiveNormalizationTarget(uint16_t *data);
FLR_RESULT roicGetControlWord(FLR_ROIC_CONTROL_WORD_T *data);
FLR_RESULT roicSetFPARampState(const FLR_ENABLE_E state);
FLR_RESULT roicGetFPARampState(FLR_ENABLE_E *state);
FLR_RESULT roicGetCurrentNUCIndex(int32_t *index);
FLR_RESULT roicGetSensorADC1(uint16_t *data);
FLR_RESULT roicGetSensorADC2(uint16_t *data);
FLR_RESULT roicSetFPATempOffset(const int16_t data);
FLR_RESULT roicGetFPATempOffset(int16_t *data);
FLR_RESULT roicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data);
FLR_RESULT roicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data);
FLR_RESULT roicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table);
FLR_RESULT roicSetFPATempValue(const uint16_t data);
FLR_RESULT roicGetFPATempValue(uint16_t *data);
FLR_RESULT bprSetState(const FLR_ENABLE_E data);
FLR_RESULT bprGetState(FLR_ENABLE_E *data);
FLR_RESULT telemetrySetState(const FLR_ENABLE_E data);
FLR_RESULT telemetryGetState(FLR_ENABLE_E *data);
FLR_RESULT telemetrySetLocation(const FLR_TELEMETRY_LOC_E data);
FLR_RESULT telemetryGetLocation(FLR_TELEMETRY_LOC_E *data);
FLR_RESULT bosonGetCameraSN(uint32_t *data);
FLR_RESULT bosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data);
FLR_RESULT bosonSetSensorSN(const uint32_t data);
FLR_RESULT bosonGetSensorSN(uint32_t *data);
FLR_RESULT bosonRunFFC();
FLR_RESULT bosonSetFFCTempThreshold(const uint16_t data);
FLR_RESULT bosonGetFFCTempThreshold(uint16_t *data);
FLR_RESULT bosonSetFFCFrameThreshold(const uint32_t data);
FLR_RESULT bosonGetFFCFrameThreshold(uint32_t *data);
FLR_RESULT bosonGetFFCInProgress(int16_t *data);
FLR_RESULT bosonReboot();
FLR_RESULT bosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode);
FLR_RESULT bosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode);
FLR_RESULT bosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode);
FLR_RESULT bosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode);
FLR_RESULT bosonWriteDynamicHeaderToFlash();
FLR_RESULT bosonReadDynamicHeaderFromFlash();
FLR_RESULT bosonRestoreFactoryDefaultsFromFlash();
FLR_RESULT bosonReadSensorIdHeaderFromFlash();
FLR_RESULT bosonReadCameraIdHeaderFromFlash();
FLR_RESULT bosonRestoreFactoryBadPixelsFromFlash();
FLR_RESULT bosonWriteBadPixelsToFlash();
FLR_RESULT bosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch);
FLR_RESULT bosonSetBadPixelLocation(const uint32_t row, const uint32_t col);
FLR_RESULT bosonlookupFPATempDegCx10(int16_t *data);
FLR_RESULT bosonlookupFPATempDegKx10(uint16_t *data);
FLR_RESULT bosonWriteLensGainToFlash();
FLR_RESULT bosonSetLensNumber(const uint32_t lensNumber);
FLR_RESULT bosonGetLensNumber(uint32_t *lensNumber);
FLR_RESULT bosonSetTableNumber(const uint32_t tableNumber);
FLR_RESULT bosonGetTableNumber(uint32_t *tableNumber);
FLR_RESULT bosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN);
FLR_RESULT bosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct);
FLR_RESULT bosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct);
FLR_RESULT bosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag);
FLR_RESULT bosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag);
FLR_RESULT bosonGetCLowToHighPercent(uint32_t *cLowToHighPercent);
FLR_RESULT bosonGetMaxLensTables(uint32_t *maxLensTables);
FLR_RESULT bosonGetFfcWaitCloseFrames(uint16_t *data);
FLR_RESULT bosonSetFfcWaitCloseFrames(const uint16_t data);
FLR_RESULT bosonCheckForTableSwitch();
FLR_RESULT bosonGetDesiredTableNumber(uint32_t *desiredTableNumber);
FLR_RESULT bosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus);
FLR_RESULT dvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState);
FLR_RESULT dvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState);
FLR_RESULT dvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format);
FLR_RESULT dvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format);
FLR_RESULT dvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings);
FLR_RESULT dvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings);
FLR_RESULT dvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings);
FLR_RESULT dvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings);
FLR_RESULT dvoApplyCustomSettings();
FLR_RESULT dvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode);
FLR_RESULT dvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode);
FLR_RESULT dvoSetType(const FLR_DVO_TYPE_E tap);
FLR_RESULT dvoGetType(FLR_DVO_TYPE_E *tap);
FLR_RESULT captureSingleFrame();
FLR_RESULT captureFrames(const FLR_CAPTURE_SETTINGS_T data);
FLR_RESULT scnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT scnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT scnrSetThColSum(const uint16_t data);
FLR_RESULT scnrGetThColSum(uint16_t *data);
FLR_RESULT scnrSetThPixel(const uint16_t data);
FLR_RESULT scnrGetThPixel(uint16_t *data);
FLR_RESULT scnrSetMaxCorr(const uint16_t data);
FLR_RESULT scnrGetMaxCorr(uint16_t *data);
FLR_RESULT scnrRestoreDefaults();
FLR_RESULT scnrGetThPixelApplied(uint16_t *data);
FLR_RESULT scnrGetMaxCorrApplied(uint16_t *data);
FLR_RESULT agcSetPercentPerBin(const float data);
FLR_RESULT agcGetPercentPerBin(float *data);
FLR_RESULT agcSetLinearPercent(const float data);
FLR_RESULT agcGetLinearPercent(float *data);
FLR_RESULT agcSetOutlierCut(const float data);
FLR_RESULT agcGetOutlierCut(float *data);
FLR_RESULT agcSetDrOut(const float data);
FLR_RESULT agcGetDrOut(float *data);
FLR_RESULT agcSetMaxGain(const float data);
FLR_RESULT agcGetMaxGain(float *data);
FLR_RESULT agcSetdf(const float data);
FLR_RESULT agcGetdf(float *data);
FLR_RESULT agcSetGamma(const float data);
FLR_RESULT agcGetGamma(float *data);
FLR_RESULT agcGetFirstBin(uint32_t *data);
FLR_RESULT agcGetLastBin(uint32_t *data);
FLR_RESULT agcSetDetailHeadroom(const float data);
FLR_RESULT agcGetDetailHeadroom(float *data);
FLR_RESULT agcSetd2br(const float data);
FLR_RESULT agcGetd2br(float *data);
FLR_RESULT agcSetSigmaR(const float data);
FLR_RESULT agcGetSigmaR(float *data);
FLR_RESULT agcSetUseEntropy(const FLR_ENABLE_E data);
FLR_RESULT agcGetUseEntropy(FLR_ENABLE_E *data);
FLR_RESULT agcSetROI(const FLR_AGC_ROI_T roi);
FLR_RESULT agcGetROI(FLR_AGC_ROI_T *roi);
FLR_RESULT agcGetMaxGainApplied(float *data);
FLR_RESULT agcGetSigmaRApplied(float *data);
FLR_RESULT tfSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT tfGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT tfSetDelta_nf(const uint16_t data);
FLR_RESULT tfGetDelta_nf(uint16_t *data);
FLR_RESULT tfSetTHDeltaMotion(const uint16_t data);
FLR_RESULT tfGetTHDeltaMotion(uint16_t *data);
FLR_RESULT tfSetWLut(const FLR_TF_WLUT_T data);
FLR_RESULT tfGetWLut(FLR_TF_WLUT_T *data);
FLR_RESULT tfGetMotionCount(uint32_t *data);
FLR_RESULT tfSetMotionMode(const FLR_TF_MOTION_MODE_E data);
FLR_RESULT tfGetMotionMode(FLR_TF_MOTION_MODE_E *data);
FLR_RESULT tfSetMotionState(const FLR_TF_MOTION_E data);
FLR_RESULT tfGetMotionState(FLR_TF_MOTION_E *data);
FLR_RESULT tfSetMotionThreshold(const uint32_t data);
FLR_RESULT tfGetMotionThreshold(uint32_t *data);
FLR_RESULT tfSetMotionDeltaLUT(const FLR_TF_MOTION_DELTA_LUT_T data);
FLR_RESULT tfGetMotionDeltaLUT(FLR_TF_MOTION_DELTA_LUT_T *data);
FLR_RESULT tfSetMotionDeltaIndex(const uint16_t data);
FLR_RESULT tfGetMotionDeltaIndex(uint16_t *data);
FLR_RESULT tfSetNfLut(const FLR_TF_NF_LUT_T data);
FLR_RESULT tfGetNfLut(FLR_TF_NF_LUT_T *data);
FLR_RESULT tfGetDelta_nfApplied(uint16_t *data);
FLR_RESULT tfGetTHDeltaMotionApplied(uint16_t *data);
FLR_RESULT tfGetSnapshotBufferAddr(uint32_t *data);
FLR_RESULT memReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT memGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
FLR_RESULT memWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT memReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT memGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes);
FLR_RESULT memEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index);
FLR_RESULT memEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length);
FLR_RESULT colorLutSetControl(const FLR_ENABLE_E data);
FLR_RESULT colorLutGetControl(FLR_ENABLE_E *data);
FLR_RESULT colorLutSetId(const FLR_COLORLUT_ID_E data);
FLR_RESULT colorLutGetId(FLR_COLORLUT_ID_E *data);
FLR_RESULT spnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT spnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT spnrGetState(FLR_SPNR_STATE_E *data);
FLR_RESULT spnrGetSF(float *sf);
FLR_RESULT spnrSetScaleFactorLUT(const FLR_SPNR_SF_LUT_T data);
FLR_RESULT spnrGetScaleFactorLUT(FLR_SPNR_SF_LUT_T *data);
FLR_RESULT spnrSetUpdateRateIndex(const uint16_t data);
FLR_RESULT spnrGetUpdateRateIndex(uint16_t *data);
FLR_RESULT spnrSetAutoExecuteState(const FLR_ENABLE_E data);
FLR_RESULT spnrGetAutoExecuteState(FLR_ENABLE_E *data);
FLR_RESULT spnrGetSFApplied(float *sf);
FLR_RESULT spnrSetFrameBasedSF(const float sf);
FLR_RESULT spnrGetFrameBasedSF(float *sf);
FLR_RESULT spnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data);
FLR_RESULT spnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data);
FLR_RESULT scalerGetMaxZoom(uint32_t *zoom);
FLR_RESULT scalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams);
FLR_RESULT scalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams);
FLR_RESULT scalerSetFilter(const FLR_SCALER_FILTER_E filter);
FLR_RESULT scalerGetFilter(FLR_SCALER_FILTER_E *filter);
FLR_RESULT sysctrlSetFreezeState(const FLR_ENABLE_E data);
FLR_RESULT sysctrlGetFreezeState(FLR_ENABLE_E *data);
FLR_RESULT sysctrlGetCameraFrameRate(uint32_t *frameRate);
FLR_RESULT agcClawSetDampingFactor(const uint16_t data);
FLR_RESULT agcClawGetDampingFactor(uint16_t *data);
FLR_RESULT agcClawSetClipLimit(const float data);
FLR_RESULT agcClawGetClipLimit(float *data);
FLR_RESULT agcClawSetGainLimit(const float data);
FLR_RESULT agcClawGetGainLimit(float *data);
FLR_RESULT testRampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data);
FLR_RESULT testRampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data);
FLR_RESULT testRampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data);
FLR_RESULT testRampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data);
FLR_RESULT testRampSetMotionState(const FLR_ENABLE_E data);
FLR_RESULT testRampGetMotionState(FLR_ENABLE_E *data);
FLR_RESULT testRampSetIndex(const uint8_t data);
FLR_RESULT testRampGetIndex(uint8_t *data);
FLR_RESULT testRampGetMaxIndex(uint8_t *data);
FLR_RESULT dummyBadCommand();


#endif
