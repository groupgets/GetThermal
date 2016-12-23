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


#include <stdint.h>
#include "Serializer_Struct.h"

void byteToFLR_ROIC_CONTROL_WORD_T(const uint8_t *inBuff, FLR_ROIC_CONTROL_WORD_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16Array((const uint8_t *)ptr,(outVal->value),(uint16_t) 16);
	ptr += 32;
	
} //end byteToFLR_ROIC_CONTROL_WORD_T()
void FLR_ROIC_CONTROL_WORD_TToByte(const FLR_ROIC_CONTROL_WORD_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ArrayToByte((const uint16_t *)(inVal->value), (uint16_t) 16,(const uint8_t *)ptr);
	ptr += 32;
	
} //end FLR_ROIC_CONTROL_WORD_TToByte()
void byteToFLR_ROIC_FPATEMP_TABLE_T(const uint8_t *inBuff, FLR_ROIC_FPATEMP_TABLE_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=64) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_16Array((const uint8_t *)ptr,(outVal->value),(uint16_t) 32);
	ptr += 64;
	
} //end byteToFLR_ROIC_FPATEMP_TABLE_T()
void FLR_ROIC_FPATEMP_TABLE_TToByte(const FLR_ROIC_FPATEMP_TABLE_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=64) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_16ArrayToByte((const int16_t *)(inVal->value), (uint16_t) 32,(const uint8_t *)ptr);
	ptr += 64;
	
} //end FLR_ROIC_FPATEMP_TABLE_TToByte()
void byteToFLR_BOSON_PARTNUMBER_T(const uint8_t *inBuff, FLR_BOSON_PARTNUMBER_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=20) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUCHARArray((const uint8_t *)ptr,(outVal->value),(uint16_t) 20);
	ptr += 20;
	
} //end byteToFLR_BOSON_PARTNUMBER_T()
void FLR_BOSON_PARTNUMBER_TToByte(const FLR_BOSON_PARTNUMBER_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=20) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UCHARArrayToByte((const uint8_t *)(inVal->value), (uint16_t) 20,(const uint8_t *)ptr);
	ptr += 20;
	
} //end FLR_BOSON_PARTNUMBER_TToByte()
void byteToFLR_BOSON_SENSOR_PARTNUMBER_T(const uint8_t *inBuff, FLR_BOSON_SENSOR_PARTNUMBER_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUCHARArray((const uint8_t *)ptr,(outVal->value),(uint16_t) 32);
	ptr += 32;
	
} //end byteToFLR_BOSON_SENSOR_PARTNUMBER_T()
void FLR_BOSON_SENSOR_PARTNUMBER_TToByte(const FLR_BOSON_SENSOR_PARTNUMBER_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UCHARArrayToByte((const uint8_t *)(inVal->value), (uint16_t) 32,(const uint8_t *)ptr);
	ptr += 32;
	
} //end FLR_BOSON_SENSOR_PARTNUMBER_TToByte()
void byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T(const uint8_t *inBuff, FLR_BOSON_GAIN_SWITCH_PARAMS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->pHighToLowPercent));
	ptr += 4;
	
	if(ptr-inBuff>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->cHighToLowPercent));
	ptr += 4;
	
	if(ptr-inBuff>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->pLowToHighPercent));
	ptr += 4;
	
	if(ptr-inBuff>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->hysteresisPercent));
	ptr += 4;
	
} //end byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T()
void FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte(const FLR_BOSON_GAIN_SWITCH_PARAMS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->pHighToLowPercent),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->cHighToLowPercent),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->pLowToHighPercent),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=16) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->hysteresisPercent),(const uint8_t *)ptr);
	ptr += 4;
	
} //end FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte()
void byteToFLR_DVO_YCBCR_SETTINGS_T(const uint8_t *inBuff, FLR_DVO_YCBCR_SETTINGS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->ycbcrFormat));
	ptr += 4;
	
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->cbcrOrder));
	ptr += 4;
	
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->yOrder));
	ptr += 4;
	
} //end byteToFLR_DVO_YCBCR_SETTINGS_T()
void FLR_DVO_YCBCR_SETTINGS_TToByte(const FLR_DVO_YCBCR_SETTINGS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->ycbcrFormat), (const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->cbcrOrder), (const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->yOrder), (const uint8_t *)ptr);
	ptr += 4;
	
} //end FLR_DVO_YCBCR_SETTINGS_TToByte()
void byteToFLR_DVO_RGB_SETTINGS_T(const uint8_t *inBuff, FLR_DVO_RGB_SETTINGS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->rgbFormat));
	ptr += 4;
	
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->rgbOrder));
	ptr += 4;
	
} //end byteToFLR_DVO_RGB_SETTINGS_T()
void FLR_DVO_RGB_SETTINGS_TToByte(const FLR_DVO_RGB_SETTINGS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->rgbFormat), (const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->rgbOrder), (const uint8_t *)ptr);
	ptr += 4;
	
} //end FLR_DVO_RGB_SETTINGS_TToByte()
void byteToFLR_CAPTURE_SETTINGS_T(const uint8_t *inBuff, FLR_CAPTURE_SETTINGS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->dataSrc));
	ptr += 4;
	
	if(ptr-inBuff>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->numFrames));
	ptr += 4;
	
	if(ptr-inBuff>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->bufferIndex));
	ptr += 2;
	
} //end byteToFLR_CAPTURE_SETTINGS_T()
void FLR_CAPTURE_SETTINGS_TToByte(const FLR_CAPTURE_SETTINGS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->dataSrc), (const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->numFrames),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=10) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->bufferIndex),(const uint8_t *)ptr);
	ptr += 2;
	
} //end FLR_CAPTURE_SETTINGS_TToByte()
void byteToFLR_AGC_ROI_T(const uint8_t *inBuff, FLR_AGC_ROI_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->rowStart));
	ptr += 2;
	
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->rowStop));
	ptr += 2;
	
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->colStart));
	ptr += 2;
	
	if(ptr-inBuff>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->colStop));
	ptr += 2;
	
} //end byteToFLR_AGC_ROI_T()
void FLR_AGC_ROI_TToByte(const FLR_AGC_ROI_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->rowStart),(const uint8_t *)ptr);
	ptr += 2;
	
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->rowStop),(const uint8_t *)ptr);
	ptr += 2;
	
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->colStart),(const uint8_t *)ptr);
	ptr += 2;
	
	if((ptr-outBuff)>=8) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->colStop),(const uint8_t *)ptr);
	ptr += 2;
	
} //end FLR_AGC_ROI_TToByte()
void byteToFLR_TF_WLUT_T(const uint8_t *inBuff, FLR_TF_WLUT_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUCHARArray((const uint8_t *)ptr,(outVal->value),(uint16_t) 32);
	ptr += 32;
	
} //end byteToFLR_TF_WLUT_T()
void FLR_TF_WLUT_TToByte(const FLR_TF_WLUT_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=32) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UCHARArrayToByte((const uint8_t *)(inVal->value), (uint16_t) 32,(const uint8_t *)ptr);
	ptr += 32;
	
} //end FLR_TF_WLUT_TToByte()
void byteToFLR_TF_NF_LUT_T(const uint8_t *inBuff, FLR_TF_NF_LUT_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=34) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16Array((const uint8_t *)ptr,(outVal->value),(uint16_t) 17);
	ptr += 34;
	
} //end byteToFLR_TF_NF_LUT_T()
void FLR_TF_NF_LUT_TToByte(const FLR_TF_NF_LUT_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=34) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ArrayToByte((const uint16_t *)(inVal->value), (uint16_t) 17,(const uint8_t *)ptr);
	ptr += 34;
	
} //end FLR_TF_NF_LUT_TToByte()
void byteToFLR_TF_MOTION_DELTA_LUT_T(const uint8_t *inBuff, FLR_TF_MOTION_DELTA_LUT_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=40) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32Array((const uint8_t *)ptr,(outVal->value),(uint16_t) 10);
	ptr += 40;
	
} //end byteToFLR_TF_MOTION_DELTA_LUT_T()
void FLR_TF_MOTION_DELTA_LUT_TToByte(const FLR_TF_MOTION_DELTA_LUT_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=40) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ArrayToByte((const uint32_t *)(inVal->value), (uint16_t) 10,(const uint8_t *)ptr);
	ptr += 40;
	
} //end FLR_TF_MOTION_DELTA_LUT_TToByte()
void byteToFLR_SPNR_PSD_KERNEL_T(const uint8_t *inBuff, FLR_SPNR_PSD_KERNEL_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=256) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToFLOATArray((const uint8_t *)ptr,(outVal->fvalue),(uint16_t) 64);
	ptr += 256;
	
} //end byteToFLR_SPNR_PSD_KERNEL_T()
void FLR_SPNR_PSD_KERNEL_TToByte(const FLR_SPNR_PSD_KERNEL_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=256) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	FLOATArrayToByte((const float *)(inVal->fvalue), (uint16_t) 64,(const uint8_t *)ptr);
	ptr += 256;
	
} //end FLR_SPNR_PSD_KERNEL_TToByte()
void byteToFLR_SPNR_SF_LUT_T(const uint8_t *inBuff, FLR_SPNR_SF_LUT_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=40) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToFLOATArray((const uint8_t *)ptr,(outVal->value),(uint16_t) 10);
	ptr += 40;
	
} //end byteToFLR_SPNR_SF_LUT_T()
void FLR_SPNR_SF_LUT_TToByte(const FLR_SPNR_SF_LUT_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=40) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	FLOATArrayToByte((const float *)(inVal->value), (uint16_t) 10,(const uint8_t *)ptr);
	ptr += 40;
	
} //end FLR_SPNR_SF_LUT_TToByte()
void byteToFLR_SCALER_ZOOM_AREA_T(const uint8_t *inBuff, FLR_SCALER_ZOOM_AREA_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->zoom));
	ptr += 4;
	
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToINT_32((const uint8_t *)ptr,(int32_t*)&(outVal->filter));
	ptr += 4;
	
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->xStart));
	ptr += 4;
	
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->yStart));
	ptr += 4;
	
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->width));
	ptr += 4;
	
	if(ptr-inBuff>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->height));
	ptr += 4;
	
} //end byteToFLR_SCALER_ZOOM_AREA_T()
void FLR_SCALER_ZOOM_AREA_TToByte(const FLR_SCALER_ZOOM_AREA_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->zoom),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	INT_32ToByte((const int32_t) (inVal->filter), (const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->xStart),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->yStart),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->width),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=24) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->height),(const uint8_t *)ptr);
	ptr += 4;
	
} //end FLR_SCALER_ZOOM_AREA_TToByte()
void byteToFLR_SCALER_ZOOM_PARAMS_T(const uint8_t *inBuff, FLR_SCALER_ZOOM_PARAMS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->zoom));
	ptr += 4;
	
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->xCenter));
	ptr += 4;
	
	if(ptr-inBuff>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_32((const uint8_t *)ptr,&(outVal->yCenter));
	ptr += 4;
	
} //end byteToFLR_SCALER_ZOOM_PARAMS_T()
void FLR_SCALER_ZOOM_PARAMS_TToByte(const FLR_SCALER_ZOOM_PARAMS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->zoom),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->xCenter),(const uint8_t *)ptr);
	ptr += 4;
	
	if((ptr-outBuff)>=12) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_32ToByte((const uint32_t) (inVal->yCenter),(const uint8_t *)ptr);
	ptr += 4;
	
} //end FLR_SCALER_ZOOM_PARAMS_TToByte()
void byteToFLR_TESTRAMP_SETTINGS_T(const uint8_t *inBuff, FLR_TESTRAMP_SETTINGS_T *outVal) {
	
	uint8_t *ptr = (uint8_t *)inBuff;
	if(ptr-inBuff>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->start));
	ptr += 2;
	
	if(ptr-inBuff>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->end));
	ptr += 2;
	
	if(ptr-inBuff>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	byteToUINT_16((const uint8_t *)ptr,&(outVal->increment));
	ptr += 2;
	
} //end byteToFLR_TESTRAMP_SETTINGS_T()
void FLR_TESTRAMP_SETTINGS_TToByte(const FLR_TESTRAMP_SETTINGS_T *inVal, const uint8_t *outBuff) {
	
	uint8_t *ptr = (uint8_t *)outBuff;
	if((ptr-outBuff)>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->start),(const uint8_t *)ptr);
	ptr += 2;
	
	if((ptr-outBuff)>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->end),(const uint8_t *)ptr);
	ptr += 2;
	
	if((ptr-outBuff)>=6) {
		return;// R_CAM_PKG_BUFFER_OVERFLOW;
	}
	UINT_16ToByte((const uint16_t) (inVal->increment),(const uint8_t *)ptr);
	ptr += 2;
	
} //end FLR_TESTRAMP_SETTINGS_TToByte()
