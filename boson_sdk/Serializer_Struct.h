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


#ifndef SERIALIZER_STRUCT_H
#define SERIALIZER_STRUCT_H

#include <stdint.h>
#include "EnumTypes.h"
#include "Serializer_BuiltIn.h"

struct t_FLR_ROIC_CONTROL_WORD_T {
	uint16_t value[16];
};
typedef struct t_FLR_ROIC_CONTROL_WORD_T FLR_ROIC_CONTROL_WORD_T;

void byteToFLR_ROIC_CONTROL_WORD_T(const uint8_t *inBuff, FLR_ROIC_CONTROL_WORD_T *outVal);
void FLR_ROIC_CONTROL_WORD_TToByte(const FLR_ROIC_CONTROL_WORD_T *inVal, const uint8_t *outBuff);

struct t_FLR_ROIC_FPATEMP_TABLE_T {
	int16_t value[32];
};
typedef struct t_FLR_ROIC_FPATEMP_TABLE_T FLR_ROIC_FPATEMP_TABLE_T;

void byteToFLR_ROIC_FPATEMP_TABLE_T(const uint8_t *inBuff, FLR_ROIC_FPATEMP_TABLE_T *outVal);
void FLR_ROIC_FPATEMP_TABLE_TToByte(const FLR_ROIC_FPATEMP_TABLE_T *inVal, const uint8_t *outBuff);

struct t_FLR_BOSON_PARTNUMBER_T {
	uint8_t value[20];
};
typedef struct t_FLR_BOSON_PARTNUMBER_T FLR_BOSON_PARTNUMBER_T;

void byteToFLR_BOSON_PARTNUMBER_T(const uint8_t *inBuff, FLR_BOSON_PARTNUMBER_T *outVal);
void FLR_BOSON_PARTNUMBER_TToByte(const FLR_BOSON_PARTNUMBER_T *inVal, const uint8_t *outBuff);

struct t_FLR_BOSON_SENSOR_PARTNUMBER_T {
	uint8_t value[32];
};
typedef struct t_FLR_BOSON_SENSOR_PARTNUMBER_T FLR_BOSON_SENSOR_PARTNUMBER_T;

void byteToFLR_BOSON_SENSOR_PARTNUMBER_T(const uint8_t *inBuff, FLR_BOSON_SENSOR_PARTNUMBER_T *outVal);
void FLR_BOSON_SENSOR_PARTNUMBER_TToByte(const FLR_BOSON_SENSOR_PARTNUMBER_T *inVal, const uint8_t *outBuff);

struct t_FLR_BOSON_GAIN_SWITCH_PARAMS_T {
	uint32_t pHighToLowPercent;
	uint32_t cHighToLowPercent;
	uint32_t pLowToHighPercent;
	uint32_t hysteresisPercent;
};
typedef struct t_FLR_BOSON_GAIN_SWITCH_PARAMS_T FLR_BOSON_GAIN_SWITCH_PARAMS_T;

void byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T(const uint8_t *inBuff, FLR_BOSON_GAIN_SWITCH_PARAMS_T *outVal);
void FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte(const FLR_BOSON_GAIN_SWITCH_PARAMS_T *inVal, const uint8_t *outBuff);

struct t_FLR_DVO_YCBCR_SETTINGS_T {
	FLR_DVO_OUTPUT_YCBCR_FORMAT_E ycbcrFormat;
	FLR_DVO_OUTPUT_CBCR_ORDER_E cbcrOrder;
	FLR_DVO_OUTPUT_Y_ORDER_E yOrder;
};
typedef struct t_FLR_DVO_YCBCR_SETTINGS_T FLR_DVO_YCBCR_SETTINGS_T;

void byteToFLR_DVO_YCBCR_SETTINGS_T(const uint8_t *inBuff, FLR_DVO_YCBCR_SETTINGS_T *outVal);
void FLR_DVO_YCBCR_SETTINGS_TToByte(const FLR_DVO_YCBCR_SETTINGS_T *inVal, const uint8_t *outBuff);

struct t_FLR_DVO_RGB_SETTINGS_T {
	FLR_DVO_OUTPUT_RGB_FORMAT_E rgbFormat;
	FLR_DVO_OUTPUT_RGB_ORDER_E rgbOrder;
};
typedef struct t_FLR_DVO_RGB_SETTINGS_T FLR_DVO_RGB_SETTINGS_T;

void byteToFLR_DVO_RGB_SETTINGS_T(const uint8_t *inBuff, FLR_DVO_RGB_SETTINGS_T *outVal);
void FLR_DVO_RGB_SETTINGS_TToByte(const FLR_DVO_RGB_SETTINGS_T *inVal, const uint8_t *outBuff);

struct t_FLR_CAPTURE_SETTINGS_T {
	FLR_CAPTURE_SRC_E dataSrc;
	uint32_t numFrames;
	uint16_t bufferIndex;
};
typedef struct t_FLR_CAPTURE_SETTINGS_T FLR_CAPTURE_SETTINGS_T;

void byteToFLR_CAPTURE_SETTINGS_T(const uint8_t *inBuff, FLR_CAPTURE_SETTINGS_T *outVal);
void FLR_CAPTURE_SETTINGS_TToByte(const FLR_CAPTURE_SETTINGS_T *inVal, const uint8_t *outBuff);

struct t_FLR_AGC_ROI_T {
	uint16_t rowStart;
	uint16_t rowStop;
	uint16_t colStart;
	uint16_t colStop;
};
typedef struct t_FLR_AGC_ROI_T FLR_AGC_ROI_T;

void byteToFLR_AGC_ROI_T(const uint8_t *inBuff, FLR_AGC_ROI_T *outVal);
void FLR_AGC_ROI_TToByte(const FLR_AGC_ROI_T *inVal, const uint8_t *outBuff);

struct t_FLR_TF_WLUT_T {
	uint8_t value[32];
};
typedef struct t_FLR_TF_WLUT_T FLR_TF_WLUT_T;

void byteToFLR_TF_WLUT_T(const uint8_t *inBuff, FLR_TF_WLUT_T *outVal);
void FLR_TF_WLUT_TToByte(const FLR_TF_WLUT_T *inVal, const uint8_t *outBuff);

struct t_FLR_TF_NF_LUT_T {
	uint16_t value[17];
};
typedef struct t_FLR_TF_NF_LUT_T FLR_TF_NF_LUT_T;

void byteToFLR_TF_NF_LUT_T(const uint8_t *inBuff, FLR_TF_NF_LUT_T *outVal);
void FLR_TF_NF_LUT_TToByte(const FLR_TF_NF_LUT_T *inVal, const uint8_t *outBuff);

struct t_FLR_TF_MOTION_DELTA_LUT_T {
	uint32_t value[10];
};
typedef struct t_FLR_TF_MOTION_DELTA_LUT_T FLR_TF_MOTION_DELTA_LUT_T;

void byteToFLR_TF_MOTION_DELTA_LUT_T(const uint8_t *inBuff, FLR_TF_MOTION_DELTA_LUT_T *outVal);
void FLR_TF_MOTION_DELTA_LUT_TToByte(const FLR_TF_MOTION_DELTA_LUT_T *inVal, const uint8_t *outBuff);

struct t_FLR_SPNR_PSD_KERNEL_T {
	float fvalue[64];
};
typedef struct t_FLR_SPNR_PSD_KERNEL_T FLR_SPNR_PSD_KERNEL_T;

void byteToFLR_SPNR_PSD_KERNEL_T(const uint8_t *inBuff, FLR_SPNR_PSD_KERNEL_T *outVal);
void FLR_SPNR_PSD_KERNEL_TToByte(const FLR_SPNR_PSD_KERNEL_T *inVal, const uint8_t *outBuff);

struct t_FLR_SPNR_SF_LUT_T {
	float value[10];
};
typedef struct t_FLR_SPNR_SF_LUT_T FLR_SPNR_SF_LUT_T;

void byteToFLR_SPNR_SF_LUT_T(const uint8_t *inBuff, FLR_SPNR_SF_LUT_T *outVal);
void FLR_SPNR_SF_LUT_TToByte(const FLR_SPNR_SF_LUT_T *inVal, const uint8_t *outBuff);

struct t_FLR_SCALER_ZOOM_AREA_T {
	uint32_t zoom;
	FLR_SCALER_FILTER_E filter;
	uint32_t xStart;
	uint32_t yStart;
	uint32_t width;
	uint32_t height;
};
typedef struct t_FLR_SCALER_ZOOM_AREA_T FLR_SCALER_ZOOM_AREA_T;

void byteToFLR_SCALER_ZOOM_AREA_T(const uint8_t *inBuff, FLR_SCALER_ZOOM_AREA_T *outVal);
void FLR_SCALER_ZOOM_AREA_TToByte(const FLR_SCALER_ZOOM_AREA_T *inVal, const uint8_t *outBuff);

struct t_FLR_SCALER_ZOOM_PARAMS_T {
	uint32_t zoom;
	uint32_t xCenter;
	uint32_t yCenter;
};
typedef struct t_FLR_SCALER_ZOOM_PARAMS_T FLR_SCALER_ZOOM_PARAMS_T;

void byteToFLR_SCALER_ZOOM_PARAMS_T(const uint8_t *inBuff, FLR_SCALER_ZOOM_PARAMS_T *outVal);
void FLR_SCALER_ZOOM_PARAMS_TToByte(const FLR_SCALER_ZOOM_PARAMS_T *inVal, const uint8_t *outBuff);

struct t_FLR_TESTRAMP_SETTINGS_T {
	uint16_t start;
	uint16_t end;
	uint16_t increment;
};
typedef struct t_FLR_TESTRAMP_SETTINGS_T FLR_TESTRAMP_SETTINGS_T;

void byteToFLR_TESTRAMP_SETTINGS_T(const uint8_t *inBuff, FLR_TESTRAMP_SETTINGS_T *outVal);
void FLR_TESTRAMP_SETTINGS_TToByte(const FLR_TESTRAMP_SETTINGS_T *inVal, const uint8_t *outBuff);

#endif //SERIALIZER_STRUCT_H
