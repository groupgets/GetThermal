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


#ifndef ENUM_TYPES_H
#define ENUM_TYPES_H

#include <stdint.h>


enum e_FLR_ENABLE_E {
	FLR_DISABLE = (int32_t) 0,
	FLR_ENABLE = (int32_t) 1,
	FLR_ENABLE_END = (int32_t) 2,
};
typedef enum e_FLR_ENABLE_E FLR_ENABLE_E;

enum e_FLR_ROIC_SENSOR_TYPE_E {
	FLR_ROIC_1406_SENSOR = (int32_t) 0,
	FLR_ROIC_0801_SENSOR = (int32_t) 1,
	FLR_ROIC_1407_SENSOR = (int32_t) 2,
	FLR_ROIC_1403_SENSOR = (int32_t) 3,
	FLR_ROIC_SENSOR_TYPE_END = (int32_t) 4,
};
typedef enum e_FLR_ROIC_SENSOR_TYPE_E FLR_ROIC_SENSOR_TYPE_E;

enum e_FLR_ROIC_STATUS_E {
	FLR_ROIC_READY = (int32_t) 0,
	FLR_ROIC_BUSY = (int32_t) 1,
	FLR_ROIC_DONE = (int32_t) 2,
	FLR_ROIC_STATUS_END = (int32_t) 3,
};
typedef enum e_FLR_ROIC_STATUS_E FLR_ROIC_STATUS_E;

enum e_FLR_ROIC_TEMP_MODE_E {
	FLR_ROIC_TEMP_NORMAL_MODE = (int32_t) 0,
	FLR_ROIC_TEMP_OFFSET_MODE = (int32_t) 1,
	FLR_ROIC_TEMP_STATIC_MODE = (int32_t) 2,
	FLR_ROIC_TEMP_MODE_END = (int32_t) 3,
};
typedef enum e_FLR_ROIC_TEMP_MODE_E FLR_ROIC_TEMP_MODE_E;

enum e_FLR_TELEMETRY_LOC_E {
	FLR_TELEMETRY_LOC_TOP = (int32_t) 0,
	FLR_TELEMETRY_LOC_BOTTOM = (int32_t) 1,
	FLR_TELEMETRY_LOC_END = (int32_t) 2,
};
typedef enum e_FLR_TELEMETRY_LOC_E FLR_TELEMETRY_LOC_E;

enum e_FLR_BOSON_GAINMODE_E {
	FLR_BOSON_HIGH_GAIN = (int32_t) 0,
	FLR_BOSON_LOW_GAIN = (int32_t) 1,
	FLR_BOSON_AUTO_GAIN = (int32_t) 2,
	FLR_BOSON_DUAL_GAIN = (int32_t) 3,
	FLR_BOSON_MANUAL_GAIN = (int32_t) 4,
	FLR_BOSON_GAINMODE_END = (int32_t) 5,
};
typedef enum e_FLR_BOSON_GAINMODE_E FLR_BOSON_GAINMODE_E;

enum e_FLR_BOSON_FFCMODE_E {
	FLR_BOSON_MANUAL_FFC = (int32_t) 0,
	FLR_BOSON_AUTO_FFC = (int32_t) 1,
	FLR_BOSON_EXTERNAL_FFC = (int32_t) 2,
	FLR_BOSON_SHUTTER_TEST_FFC = (int32_t) 3,
	FLR_BOSON_FFCMODE_END = (int32_t) 4,
};
typedef enum e_FLR_BOSON_FFCMODE_E FLR_BOSON_FFCMODE_E;

enum e_FLR_BOSON_STARTUPMODE_E {
	FLR_BOSON_NORMALSTART = (int32_t) 0,
	FLR_BOSON_FASTSTART = (int32_t) 1,
	FLR_BOSON_STARTUPMODE_END = (int32_t) 2,
};
typedef enum e_FLR_BOSON_STARTUPMODE_E FLR_BOSON_STARTUPMODE_E;

enum e_FLR_BOSON_FFCSTATUS_E {
	FLR_BOSON_NO_FFC_PERFORMED = (int32_t) 0,
	FLR_BOSON_FFC_IMMINENT = (int32_t) 1,
	FLR_BOSON_FFC_IN_PROGRESS = (int32_t) 2,
	FLR_BOSON_FFC_COMPLETE = (int32_t) 3,
	FLR_BOSON_FFCSTATUS_END = (int32_t) 4,
};
typedef enum e_FLR_BOSON_FFCSTATUS_E FLR_BOSON_FFCSTATUS_E;

enum e_FLR_DVO_OUTPUT_FORMAT_E {
	FLR_DVO_RGB = (int32_t) 0,
	FLR_DVO_YCBCR = (int32_t) 1,
	FLR_DVO_DEFAULT_FORMAT = (int32_t) 2,
	FLR_DVO_OUTPUT_FORMAT_END = (int32_t) 3,
};
typedef enum e_FLR_DVO_OUTPUT_FORMAT_E FLR_DVO_OUTPUT_FORMAT_E;

enum e_FLR_DVO_OUTPUT_RGB_FORMAT_E {
	FLR_DVO_RGB888 = (int32_t) 0,
	FLR_DVO_MRGB888 = (int32_t) 1,
	FLR_DVO_OUTPUT_RGB_FORMAT_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_OUTPUT_RGB_FORMAT_E FLR_DVO_OUTPUT_RGB_FORMAT_E;

enum e_FLR_DVO_OUTPUT_YCBCR_FORMAT_E {
	FLR_DVO_YCBCR422_8B = (int32_t) 0,
	FLR_DVO_MYCBCR422_8B = (int32_t) 1,
	FLR_DVO_OUTPUT_YCBCR_FORMAT_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_OUTPUT_YCBCR_FORMAT_E FLR_DVO_OUTPUT_YCBCR_FORMAT_E;

enum e_FLR_DVO_OUTPUT_CBCR_ORDER_E {
	FLR_DVO_CRCB = (int32_t) 0,
	FLR_DVO_CBCR = (int32_t) 1,
	FLR_DVO_OUTPUT_CBCR_ORDER_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_OUTPUT_CBCR_ORDER_E FLR_DVO_OUTPUT_CBCR_ORDER_E;

enum e_FLR_DVO_OUTPUT_Y_ORDER_E {
	FLR_DVO_YFIRST = (int32_t) 0,
	FLR_DVO_YLAST = (int32_t) 1,
	FLR_DVO_OUTPUT_Y_ORDER_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_OUTPUT_Y_ORDER_E FLR_DVO_OUTPUT_Y_ORDER_E;

enum e_FLR_DVO_OUTPUT_RGB_ORDER_E {
	FLR_DVO_ORDER_RGB = (int32_t) 0,
	FLR_DVO_ORDER_BGR = (int32_t) 1,
	FLR_DVO_OUTPUT_RGB_ORDER_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_OUTPUT_RGB_ORDER_E FLR_DVO_OUTPUT_RGB_ORDER_E;

enum e_FLR_DVO_TYPE_E {
	FLR_DVO_TYPE_MONO16 = (int32_t) 0,
	FLR_DVO_TYPE_MONO8 = (int32_t) 1,
	FLR_DVO_TYPE_COLOR = (int32_t) 2,
	FLR_DVO_TYPE_ANALOG = (int32_t) 3,
	FLR_DVO_TYPE_END = (int32_t) 4,
};
typedef enum e_FLR_DVO_TYPE_E FLR_DVO_TYPE_E;

enum e_FLR_DVO_DISPLAY_MODE_E {
	FLR_DVO_CONTINUOUS = (int32_t) 0,
	FLR_DVO_ONE_SHOT = (int32_t) 1,
	FLR_DVO_DISPLAY_MODE_END = (int32_t) 2,
};
typedef enum e_FLR_DVO_DISPLAY_MODE_E FLR_DVO_DISPLAY_MODE_E;

enum e_FLR_CAPTURE_SRC_E {
	FLR_CAPTURE_SRC_NUC = (int32_t) 1,
	FLR_CAPTURE_SRC_BPR = (int32_t) 2,
	FLR_CAPTURE_SRC_TNF = (int32_t) 3,
};
typedef enum e_FLR_CAPTURE_SRC_E FLR_CAPTURE_SRC_E;

enum e_FLR_TF_MOTION_E {
	FLR_TF_MOTION_READY = (int32_t) 0,
	FLR_TF_MOTION_DESIRED = (int32_t) 1,
	FLR_TF_MOTION_IN_PROGRESS = (int32_t) 2,
	FLR_TF_MOTION_COMPLETE = (int32_t) 3,
	FLR_TF_MOTION_END = (int32_t) 4,
};
typedef enum e_FLR_TF_MOTION_E FLR_TF_MOTION_E;

enum e_FLR_TF_MOTION_MODE_E {
	FLR_TF_MOTION_MODE_FRAME_BASED = (int32_t) 0,
	FLR_TF_MOTION_MODE_MOTION_BASED = (int32_t) 1,
	FLR_TF_MOTION_MODE_END = (int32_t) 2,
};
typedef enum e_FLR_TF_MOTION_MODE_E FLR_TF_MOTION_MODE_E;

enum e_FLR_MEM_LOCATION_E {
	FLR_MEM_INVALID = (int32_t) 0,
	FLR_MEM_BOOTLOADER = (int32_t) 1,
	FLR_MEM_UPGRADE_APP = (int32_t) 2,
	FLR_MEM_LENS_NVFFC = (int32_t) 3,
	FLR_MEM_LENS_SFFC = (int32_t) 4,
	FLR_MEM_LENS_GAIN = (int32_t) 5,
	FLR_MEM_LENS_DISTORTION = (int32_t) 6,
	FLR_MEM_USER_SPACE = (int32_t) 7,
	FLR_MEM_RUN_CMDS = (int32_t) 8,
	FLR_MEM_LAST = (int32_t) 9,
};
typedef enum e_FLR_MEM_LOCATION_E FLR_MEM_LOCATION_E;

enum e_FLR_COLORLUT_ID_E {
	FLR_COLORLUT_0 = (int32_t) 0,
	FLR_COLORLUT_DEFAULT = (int32_t) 0,
	FLR_COLORLUT_WHITEHOT = (int32_t) 0,
	FLR_COLORLUT_1 = (int32_t) 1,
	FLR_COLORLUT_BLACKHOT = (int32_t) 1,
	FLR_COLORLUT_2 = (int32_t) 2,
	FLR_COLORLUT_REDHOT = (int32_t) 2,
	FLR_COLORLUT_3 = (int32_t) 3,
	FLR_COLORLUT_RAINBOW = (int32_t) 3,
	FLR_COLORLUT_4 = (int32_t) 4,
	FLR_COLORLUT_IRONBOW = (int32_t) 4,
	FLR_COLORLUT_5 = (int32_t) 5,
	FLR_COLORLUT_LAVA = (int32_t) 5,
	FLR_COLORLUT_6 = (int32_t) 6,
	FLR_COLORLUT_ARCTIC = (int32_t) 6,
	FLR_COLORLUT_7 = (int32_t) 7,
	FLR_COLORLUT_GLOBOW = (int32_t) 7,
	FLR_COLORLUT_8 = (int32_t) 8,
	FLR_COLORLUT_GRADEDFIRE = (int32_t) 8,
	FLR_COLORLUT_9 = (int32_t) 9,
	FLR_COLORLUT_INSTALERT = (int32_t) 9,
	FLR_COLORLUT_ID_END = (int32_t) 10,
};
typedef enum e_FLR_COLORLUT_ID_E FLR_COLORLUT_ID_E;

enum e_FLR_SPNR_STATE_E {
	FLR_SPNR_READY = (int32_t) 0,
	FLR_SPNR_DESIRED = (int32_t) 1,
	FLR_SPNR_IN_PROGRESS = (int32_t) 2,
	FLR_SPNR_COMPLETE = (int32_t) 3,
};
typedef enum e_FLR_SPNR_STATE_E FLR_SPNR_STATE_E;

enum e_FLR_SPNR_ONESHOT_STATE_E {
	FLR_SPNR_ONE_SHOT_READY = (int32_t) 0,
	FLR_SPNR_ONE_SHOT_EXECUTE = (int32_t) 1,
	FLR_SPNR_ONE_SHOT_RESET = (int32_t) 2,
	FLR_SPNR_ONE_SHOT_INIT = (int32_t) 3,
};
typedef enum e_FLR_SPNR_ONESHOT_STATE_E FLR_SPNR_ONESHOT_STATE_E;

enum e_FLR_SCALER_FILTER_E {
	FLR_SCALER_FLT_LINEAR = (int32_t) 0,
	FLR_SCALER_FLT_LANCZOS2 = (int32_t) 1,
	FLR_SCALER_FLT_LANCZOS3 = (int32_t) 2,
	FLR_SCALER_FLT_BICUBIC = (int32_t) 3,
	FLR_SCALER_FLT_IMPULSE = (int32_t) 10,
	FLR_SCALER_FLT_ONE = (int32_t) 11,
	FLR_SCALER_FLT_ZERO = (int32_t) 12,
	FLR_SCALER_FILTER_END = (int32_t) 13,
};
typedef enum e_FLR_SCALER_FILTER_E FLR_SCALER_FILTER_E;

enum e_FLR_SYSCTRL_USBSRC_E {
	FLR_SYSCTRL_USBSRC_NONE = (int32_t) 0,
	FLR_SYSCTRL_USBSRC_COLOR_YUV420P = (int32_t) 1,
	FLR_SYSCTRL_USBSRC_IR16 = (int32_t) 2,
	FLR_SYSCTRL_USBSRC_LAST = (int32_t) 3,
};
typedef enum e_FLR_SYSCTRL_USBSRC_E FLR_SYSCTRL_USBSRC_E;

enum e_FLR_TESTRAMP_TYPE_E {
	FLR_TESTRAMP_ZERO = (int32_t) 0,
	FLR_TESTRAMP_INCREMENTING = (int32_t) 1,
	FLR_TESTRAMP_VERT_SHADE = (int32_t) 2,
	FLR_TESTRAMP_HORIZ_SHADE = (int32_t) 3,
	FLR_TESTRAMP_BIG_VERT_SHADE = (int32_t) 4,
	FLR_TESTRAMP_SIMPLE_VERTICAL = (int32_t) 5,
	FLR_TESTRAMP_VTST_CHECKERBOARD = (int32_t) 6,
	FLR_TESTRAMP_VTST_DIAGONAL_STRIPE = (int32_t) 7,
};
typedef enum e_FLR_TESTRAMP_TYPE_E FLR_TESTRAMP_TYPE_E;

#endif //ENUM_TYPES_H
