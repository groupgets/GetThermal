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

#ifndef CLIENT_PACKAGER_H
#define CLIENT_PACKAGER_H

#include <stdint.h>
#include "EnumTypes.h"
#include "ReturnCodes.h"
#include "Serializer_Struct.h"
#include "FunctionCodes.h"
#include "Client_Dispatcher.h"

// Begin Module: gao
FLR_RESULT CLIENT_pkgGaoSetGainState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetGainState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetFfcState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetFfcState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetTempCorrectionState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetTempCorrectionState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetIConstL(const int16_t data);
FLR_RESULT CLIENT_pkgGaoGetIConstL(int16_t *data);
FLR_RESULT CLIENT_pkgGaoSetIConstM(const int16_t data);
FLR_RESULT CLIENT_pkgGaoGetIConstM(int16_t *data);
FLR_RESULT CLIENT_pkgGaoSetAveragerState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetAveragerState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetNumFFCFrames(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetNumFFCFrames(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoSetAveragerThreshold(const uint16_t data);
FLR_RESULT CLIENT_pkgGaoGetAveragerThreshold(uint16_t *data);
FLR_RESULT CLIENT_pkgGaoGetRnsState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgGaoSetTestRampState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgGaoGetTestRampState(FLR_ENABLE_E *data);
// End Module: gao

// Begin Module: lagrange
// End Module: lagrange

// Begin Module: roic
FLR_RESULT CLIENT_pkgRoicGetFPATemp(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicGetFrameCount(uint32_t *data);
FLR_RESULT CLIENT_pkgRoicGetActiveNormalizationTarget(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicGetControlWord(FLR_ROIC_CONTROL_WORD_T *data);
FLR_RESULT CLIENT_pkgRoicSetFPARampState(const FLR_ENABLE_E state);
FLR_RESULT CLIENT_pkgRoicGetFPARampState(FLR_ENABLE_E *state);
FLR_RESULT CLIENT_pkgRoicGetCurrentNUCIndex(int32_t *index);
FLR_RESULT CLIENT_pkgRoicGetSensorADC1(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicGetSensorADC2(uint16_t *data);
FLR_RESULT CLIENT_pkgRoicSetFPATempOffset(const int16_t data);
FLR_RESULT CLIENT_pkgRoicGetFPATempOffset(int16_t *data);
FLR_RESULT CLIENT_pkgRoicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data);
FLR_RESULT CLIENT_pkgRoicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data);
FLR_RESULT CLIENT_pkgRoicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table);
FLR_RESULT CLIENT_pkgRoicSetFPATempValue(const uint16_t data);
FLR_RESULT CLIENT_pkgRoicGetFPATempValue(uint16_t *data);
// End Module: roic

// Begin Module: bpr
FLR_RESULT CLIENT_pkgBprSetState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgBprGetState(FLR_ENABLE_E *data);
// End Module: bpr

// Begin Module: telemetry
FLR_RESULT CLIENT_pkgTelemetrySetState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTelemetryGetState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTelemetrySetLocation(const FLR_TELEMETRY_LOC_E data);
FLR_RESULT CLIENT_pkgTelemetryGetLocation(FLR_TELEMETRY_LOC_E *data);
// End Module: telemetry

// Begin Module: boson
FLR_RESULT CLIENT_pkgBosonGetCameraSN(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data);
FLR_RESULT CLIENT_pkgBosonSetSensorSN(const uint32_t data);
FLR_RESULT CLIENT_pkgBosonGetSensorSN(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonRunFFC();
FLR_RESULT CLIENT_pkgBosonSetFFCTempThreshold(const uint16_t data);
FLR_RESULT CLIENT_pkgBosonGetFFCTempThreshold(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonSetFFCFrameThreshold(const uint32_t data);
FLR_RESULT CLIENT_pkgBosonGetFFCFrameThreshold(uint32_t *data);
FLR_RESULT CLIENT_pkgBosonGetFFCInProgress(int16_t *data);
FLR_RESULT CLIENT_pkgBosonReboot();
FLR_RESULT CLIENT_pkgBosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode);
FLR_RESULT CLIENT_pkgBosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode);
FLR_RESULT CLIENT_pkgBosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode);
FLR_RESULT CLIENT_pkgBosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode);
FLR_RESULT CLIENT_pkgBosonWriteDynamicHeaderToFlash();
FLR_RESULT CLIENT_pkgBosonReadDynamicHeaderFromFlash();
FLR_RESULT CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash();
FLR_RESULT CLIENT_pkgBosonReadSensorIdHeaderFromFlash();
FLR_RESULT CLIENT_pkgBosonReadCameraIdHeaderFromFlash();
FLR_RESULT CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash();
FLR_RESULT CLIENT_pkgBosonWriteBadPixelsToFlash();
FLR_RESULT CLIENT_pkgBosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch);
FLR_RESULT CLIENT_pkgBosonSetBadPixelLocation(const uint32_t row, const uint32_t col);
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegCx10(int16_t *data);
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegKx10(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonWriteLensGainToFlash();
FLR_RESULT CLIENT_pkgBosonSetLensNumber(const uint32_t lensNumber);
FLR_RESULT CLIENT_pkgBosonGetLensNumber(uint32_t *lensNumber);
FLR_RESULT CLIENT_pkgBosonSetTableNumber(const uint32_t tableNumber);
FLR_RESULT CLIENT_pkgBosonGetTableNumber(uint32_t *tableNumber);
FLR_RESULT CLIENT_pkgBosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN);
FLR_RESULT CLIENT_pkgBosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct);
FLR_RESULT CLIENT_pkgBosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct);
FLR_RESULT CLIENT_pkgBosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag);
FLR_RESULT CLIENT_pkgBosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag);
FLR_RESULT CLIENT_pkgBosonGetCLowToHighPercent(uint32_t *cLowToHighPercent);
FLR_RESULT CLIENT_pkgBosonGetMaxLensTables(uint32_t *maxLensTables);
FLR_RESULT CLIENT_pkgBosonGetFfcWaitCloseFrames(uint16_t *data);
FLR_RESULT CLIENT_pkgBosonSetFfcWaitCloseFrames(const uint16_t data);
FLR_RESULT CLIENT_pkgBosonCheckForTableSwitch();
FLR_RESULT CLIENT_pkgBosonGetDesiredTableNumber(uint32_t *desiredTableNumber);
FLR_RESULT CLIENT_pkgBosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus);
// End Module: boson

// Begin Module: dvo
FLR_RESULT CLIENT_pkgDvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState);
FLR_RESULT CLIENT_pkgDvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState);
FLR_RESULT CLIENT_pkgDvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format);
FLR_RESULT CLIENT_pkgDvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format);
FLR_RESULT CLIENT_pkgDvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings);
FLR_RESULT CLIENT_pkgDvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings);
FLR_RESULT CLIENT_pkgDvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings);
FLR_RESULT CLIENT_pkgDvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings);
FLR_RESULT CLIENT_pkgDvoApplyCustomSettings();
FLR_RESULT CLIENT_pkgDvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode);
FLR_RESULT CLIENT_pkgDvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode);
FLR_RESULT CLIENT_pkgDvoSetType(const FLR_DVO_TYPE_E tap);
FLR_RESULT CLIENT_pkgDvoGetType(FLR_DVO_TYPE_E *tap);
// End Module: dvo

// Begin Module: capture
FLR_RESULT CLIENT_pkgCaptureSingleFrame();
FLR_RESULT CLIENT_pkgCaptureFrames(const FLR_CAPTURE_SETTINGS_T data);
// End Module: capture

// Begin Module: scnr
FLR_RESULT CLIENT_pkgScnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgScnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgScnrSetThColSum(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThColSum(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetThPixel(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetThPixel(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrSetMaxCorr(const uint16_t data);
FLR_RESULT CLIENT_pkgScnrGetMaxCorr(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrRestoreDefaults();
FLR_RESULT CLIENT_pkgScnrGetThPixelApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgScnrGetMaxCorrApplied(uint16_t *data);
// End Module: scnr

// Begin Module: agc
FLR_RESULT CLIENT_pkgAgcSetPercentPerBin(const float data);
FLR_RESULT CLIENT_pkgAgcGetPercentPerBin(float *data);
FLR_RESULT CLIENT_pkgAgcSetLinearPercent(const float data);
FLR_RESULT CLIENT_pkgAgcGetLinearPercent(float *data);
FLR_RESULT CLIENT_pkgAgcSetOutlierCut(const float data);
FLR_RESULT CLIENT_pkgAgcGetOutlierCut(float *data);
FLR_RESULT CLIENT_pkgAgcSetDrOut(const float data);
FLR_RESULT CLIENT_pkgAgcGetDrOut(float *data);
FLR_RESULT CLIENT_pkgAgcSetMaxGain(const float data);
FLR_RESULT CLIENT_pkgAgcGetMaxGain(float *data);
FLR_RESULT CLIENT_pkgAgcSetdf(const float data);
FLR_RESULT CLIENT_pkgAgcGetdf(float *data);
FLR_RESULT CLIENT_pkgAgcSetGamma(const float data);
FLR_RESULT CLIENT_pkgAgcGetGamma(float *data);
FLR_RESULT CLIENT_pkgAgcGetFirstBin(uint32_t *data);
FLR_RESULT CLIENT_pkgAgcGetLastBin(uint32_t *data);
FLR_RESULT CLIENT_pkgAgcSetDetailHeadroom(const float data);
FLR_RESULT CLIENT_pkgAgcGetDetailHeadroom(float *data);
FLR_RESULT CLIENT_pkgAgcSetd2br(const float data);
FLR_RESULT CLIENT_pkgAgcGetd2br(float *data);
FLR_RESULT CLIENT_pkgAgcSetSigmaR(const float data);
FLR_RESULT CLIENT_pkgAgcGetSigmaR(float *data);
FLR_RESULT CLIENT_pkgAgcSetUseEntropy(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgAgcGetUseEntropy(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgAgcSetROI(const FLR_AGC_ROI_T roi);
FLR_RESULT CLIENT_pkgAgcGetROI(FLR_AGC_ROI_T *roi);
FLR_RESULT CLIENT_pkgAgcGetMaxGainApplied(float *data);
FLR_RESULT CLIENT_pkgAgcGetSigmaRApplied(float *data);
// End Module: agc

// Begin Module: tf
FLR_RESULT CLIENT_pkgTfSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTfGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTfSetDelta_nf(const uint16_t data);
FLR_RESULT CLIENT_pkgTfGetDelta_nf(uint16_t *data);
FLR_RESULT CLIENT_pkgTfSetTHDeltaMotion(const uint16_t data);
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotion(uint16_t *data);
FLR_RESULT CLIENT_pkgTfSetWLut(const FLR_TF_WLUT_T data);
FLR_RESULT CLIENT_pkgTfGetWLut(FLR_TF_WLUT_T *data);
FLR_RESULT CLIENT_pkgTfGetMotionCount(uint32_t *data);
FLR_RESULT CLIENT_pkgTfSetMotionMode(const FLR_TF_MOTION_MODE_E data);
FLR_RESULT CLIENT_pkgTfGetMotionMode(FLR_TF_MOTION_MODE_E *data);
FLR_RESULT CLIENT_pkgTfSetMotionState(const FLR_TF_MOTION_E data);
FLR_RESULT CLIENT_pkgTfGetMotionState(FLR_TF_MOTION_E *data);
FLR_RESULT CLIENT_pkgTfSetMotionThreshold(const uint32_t data);
FLR_RESULT CLIENT_pkgTfGetMotionThreshold(uint32_t *data);
FLR_RESULT CLIENT_pkgTfSetMotionDeltaLUT(const FLR_TF_MOTION_DELTA_LUT_T data);
FLR_RESULT CLIENT_pkgTfGetMotionDeltaLUT(FLR_TF_MOTION_DELTA_LUT_T *data);
FLR_RESULT CLIENT_pkgTfSetMotionDeltaIndex(const uint16_t data);
FLR_RESULT CLIENT_pkgTfGetMotionDeltaIndex(uint16_t *data);
FLR_RESULT CLIENT_pkgTfSetNfLut(const FLR_TF_NF_LUT_T data);
FLR_RESULT CLIENT_pkgTfGetNfLut(FLR_TF_NF_LUT_T *data);
FLR_RESULT CLIENT_pkgTfGetDelta_nfApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotionApplied(uint16_t *data);
FLR_RESULT CLIENT_pkgTfGetSnapshotBufferAddr(uint32_t *data);
// End Module: tf

// Begin Module: mem
FLR_RESULT CLIENT_pkgMemReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns);
FLR_RESULT CLIENT_pkgMemWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data);
FLR_RESULT CLIENT_pkgMemGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes);
FLR_RESULT CLIENT_pkgMemEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index);
FLR_RESULT CLIENT_pkgMemEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length);
// End Module: mem

// Begin Module: colorLut
FLR_RESULT CLIENT_pkgColorlutSetControl(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgColorlutGetControl(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgColorlutSetId(const FLR_COLORLUT_ID_E data);
FLR_RESULT CLIENT_pkgColorlutGetId(FLR_COLORLUT_ID_E *data);
// End Module: colorLut

// Begin Module: spnr
FLR_RESULT CLIENT_pkgSpnrSetEnableState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSpnrGetEnableState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSpnrGetState(FLR_SPNR_STATE_E *data);
FLR_RESULT CLIENT_pkgSpnrGetSF(float *sf);
FLR_RESULT CLIENT_pkgSpnrSetScaleFactorLUT(const FLR_SPNR_SF_LUT_T data);
FLR_RESULT CLIENT_pkgSpnrGetScaleFactorLUT(FLR_SPNR_SF_LUT_T *data);
FLR_RESULT CLIENT_pkgSpnrSetUpdateRateIndex(const uint16_t data);
FLR_RESULT CLIENT_pkgSpnrGetUpdateRateIndex(uint16_t *data);
FLR_RESULT CLIENT_pkgSpnrSetAutoExecuteState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSpnrGetAutoExecuteState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSpnrGetSFApplied(float *sf);
FLR_RESULT CLIENT_pkgSpnrSetFrameBasedSF(const float sf);
FLR_RESULT CLIENT_pkgSpnrGetFrameBasedSF(float *sf);
FLR_RESULT CLIENT_pkgSpnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data);
FLR_RESULT CLIENT_pkgSpnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data);
// End Module: spnr

// Begin Module: scaler
FLR_RESULT CLIENT_pkgScalerGetMaxZoom(uint32_t *zoom);
FLR_RESULT CLIENT_pkgScalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams);
FLR_RESULT CLIENT_pkgScalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams);
FLR_RESULT CLIENT_pkgScalerSetFilter(const FLR_SCALER_FILTER_E filter);
FLR_RESULT CLIENT_pkgScalerGetFilter(FLR_SCALER_FILTER_E *filter);
// End Module: scaler

// Begin Module: sysctrl
FLR_RESULT CLIENT_pkgSysctrlSetFreezeState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgSysctrlGetFreezeState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgSysctrlGetCameraFrameRate(uint32_t *frameRate);
// End Module: sysctrl

// Begin Module: agcClaw
FLR_RESULT CLIENT_pkgAgcclawSetDampingFactor(const uint16_t data);
FLR_RESULT CLIENT_pkgAgcclawGetDampingFactor(uint16_t *data);
FLR_RESULT CLIENT_pkgAgcclawSetClipLimit(const float data);
FLR_RESULT CLIENT_pkgAgcclawGetClipLimit(float *data);
FLR_RESULT CLIENT_pkgAgcclawSetGainLimit(const float data);
FLR_RESULT CLIENT_pkgAgcclawGetGainLimit(float *data);
// End Module: agcClaw

// Begin Module: testRamp
FLR_RESULT CLIENT_pkgTestrampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data);
FLR_RESULT CLIENT_pkgTestrampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data);
FLR_RESULT CLIENT_pkgTestrampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data);
FLR_RESULT CLIENT_pkgTestrampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data);
FLR_RESULT CLIENT_pkgTestrampSetMotionState(const FLR_ENABLE_E data);
FLR_RESULT CLIENT_pkgTestrampGetMotionState(FLR_ENABLE_E *data);
FLR_RESULT CLIENT_pkgTestrampSetIndex(const uint8_t data);
FLR_RESULT CLIENT_pkgTestrampGetIndex(uint8_t *data);
FLR_RESULT CLIENT_pkgTestrampGetMaxIndex(uint8_t *data);
// End Module: testRamp

// Begin Module: testFramework
// End Module: testFramework

// Begin Module: dummy
FLR_RESULT CLIENT_pkgDummyBadCommand();
// End Module: dummy

#endif // CLIENT_PACKAGER_H

