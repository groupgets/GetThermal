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

#ifndef FUNCTION_CODES_H
#define FUNCTION_CODES_H

enum _functionCodes {
	MAXFUNCCODE = 0xFFFFFFFF,
	// Module gao
	GAO_SETGAINSTATE                   =      1, // 0x00000001
	GAO_GETGAINSTATE                   =      2, // 0x00000002
	GAO_SETFFCSTATE                    =      3, // 0x00000003
	GAO_GETFFCSTATE                    =      4, // 0x00000004
	GAO_SETTEMPCORRECTIONSTATE         =      5, // 0x00000005
	GAO_GETTEMPCORRECTIONSTATE         =      6, // 0x00000006
	GAO_SETICONSTL                     =      7, // 0x00000007
	GAO_GETICONSTL                     =      8, // 0x00000008
	GAO_SETICONSTM                     =      9, // 0x00000009
	GAO_GETICONSTM                     =     10, // 0x0000000A
	GAO_SETAVERAGERSTATE               =     11, // 0x0000000B
	GAO_GETAVERAGERSTATE               =     12, // 0x0000000C
	GAO_SETNUMFFCFRAMES                =     13, // 0x0000000D
	GAO_GETNUMFFCFRAMES                =     14, // 0x0000000E
	GAO_SETAVERAGERTHRESHOLD           =     15, // 0x0000000F
	GAO_GETAVERAGERTHRESHOLD           =     16, // 0x00000010
	GAO_GETRNSSTATE                    =     18, // 0x00000012
	GAO_SETTESTRAMPSTATE               =     19, // 0x00000013
	GAO_GETTESTRAMPSTATE               =     20, // 0x00000014
	// Module lagrange
	// Module roic
	ROIC_GETFPATEMP                    = 131073, // 0x00020001
	ROIC_GETFRAMECOUNT                 = 131074, // 0x00020002
	ROIC_GETACTIVENORMALIZATIONTARGET  = 131078, // 0x00020006
	ROIC_GETCONTROLWORD                = 131089, // 0x00020011
	ROIC_SETFPARAMPSTATE               = 131092, // 0x00020014
	ROIC_GETFPARAMPSTATE               = 131093, // 0x00020015
	ROIC_GETCURRENTNUCINDEX            = 131096, // 0x00020018
	ROIC_GETSENSORADC1                 = 131097, // 0x00020019
	ROIC_GETSENSORADC2                 = 131098, // 0x0002001A
	ROIC_SETFPATEMPOFFSET              = 131099, // 0x0002001B
	ROIC_GETFPATEMPOFFSET              = 131100, // 0x0002001C
	ROIC_SETFPATEMPMODE                = 131101, // 0x0002001D
	ROIC_GETFPATEMPMODE                = 131102, // 0x0002001E
	ROIC_GETFPATEMPTABLE               = 131104, // 0x00020020
	ROIC_SETFPATEMPVALUE               = 131106, // 0x00020022
	ROIC_GETFPATEMPVALUE               = 131107, // 0x00020023
	// Module bpr
	BPR_SETSTATE                       = 196610, // 0x00030002
	BPR_GETSTATE                       = 196609, // 0x00030001
	// Module telemetry
	TELEMETRY_SETSTATE                 = 262145, // 0x00040001
	TELEMETRY_GETSTATE                 = 262146, // 0x00040002
	TELEMETRY_SETLOCATION              = 262147, // 0x00040003
	TELEMETRY_GETLOCATION              = 262148, // 0x00040004
	// Module boson
	BOSON_GETCAMERASN                  = 327682, // 0x00050002
	BOSON_GETCAMERAPN                  = 327684, // 0x00050004
	BOSON_SETSENSORSN                  = 327685, // 0x00050005
	BOSON_GETSENSORSN                  = 327686, // 0x00050006
	BOSON_RUNFFC                       = 327687, // 0x00050007
	BOSON_SETFFCTEMPTHRESHOLD          = 327688, // 0x00050008
	BOSON_GETFFCTEMPTHRESHOLD          = 327689, // 0x00050009
	BOSON_SETFFCFRAMETHRESHOLD         = 327690, // 0x0005000A
	BOSON_GETFFCFRAMETHRESHOLD         = 327691, // 0x0005000B
	BOSON_GETFFCINPROGRESS             = 327692, // 0x0005000C
	BOSON_REBOOT                       = 327696, // 0x00050010
	BOSON_SETFFCMODE                   = 327698, // 0x00050012
	BOSON_GETFFCMODE                   = 327699, // 0x00050013
	BOSON_SETGAINMODE                  = 327700, // 0x00050014
	BOSON_GETGAINMODE                  = 327701, // 0x00050015
	BOSON_WRITEDYNAMICHEADERTOFLASH    = 327704, // 0x00050018
	BOSON_READDYNAMICHEADERFROMFLASH   = 327705, // 0x00050019
	BOSON_RESTOREFACTORYDEFAULTSFROMFLASH = 327707, // 0x0005001B
	BOSON_READSENSORIDHEADERFROMFLASH  = 327709, // 0x0005001D
	BOSON_READCAMERAIDHEADERFROMFLASH  = 327711, // 0x0005001F
	BOSON_RESTOREFACTORYBADPIXELSFROMFLASH = 327712, // 0x00050020
	BOSON_WRITEBADPIXELSTOFLASH        = 327713, // 0x00050021
	BOSON_GETSOFTWAREREV               = 327714, // 0x00050022
	BOSON_SETBADPIXELLOCATION          = 327725, // 0x0005002D
	BOSON_LOOKUPFPATEMPDEGCX10         = 327728, // 0x00050030
	BOSON_LOOKUPFPATEMPDEGKX10         = 327729, // 0x00050031
	BOSON_WRITELENSGAINTOFLASH         = 327733, // 0x00050035
	BOSON_SETLENSNUMBER                = 327736, // 0x00050038
	BOSON_GETLENSNUMBER                = 327737, // 0x00050039
	BOSON_SETTABLENUMBER               = 327738, // 0x0005003A
	BOSON_GETTABLENUMBER               = 327739, // 0x0005003B
	BOSON_GETSENSORPN                  = 327743, // 0x0005003F
	BOSON_SETGAINSWITCHPARAMS          = 327744, // 0x00050040
	BOSON_GETGAINSWITCHPARAMS          = 327745, // 0x00050041
	BOSON_GETSWITCHTOHIGHGAINFLAG      = 327746, // 0x00050042
	BOSON_GETSWITCHTOLOWGAINFLAG       = 327747, // 0x00050043
	BOSON_GETCLOWTOHIGHPERCENT         = 327748, // 0x00050044
	BOSON_GETMAXLENSTABLES             = 327750, // 0x00050046
	BOSON_GETFFCWAITCLOSEFRAMES        = 327758, // 0x0005004E
	BOSON_SETFFCWAITCLOSEFRAMES        = 327759, // 0x0005004F
	BOSON_CHECKFORTABLESWITCH          = 327760, // 0x00050050
	BOSON_GETDESIREDTABLENUMBER        = 327762, // 0x00050052
	BOSON_GETFFCSTATUS                 = 327764, // 0x00050054
	// Module dvo
	DVO_SETANALOGVIDEOSTATE            = 393220, // 0x00060004
	DVO_GETANALOGVIDEOSTATE            = 393221, // 0x00060005
	DVO_SETOUTPUTFORMAT                = 393222, // 0x00060006
	DVO_GETOUTPUTFORMAT                = 393223, // 0x00060007
	DVO_SETOUTPUTYCBCRSETTINGS         = 393224, // 0x00060008
	DVO_GETOUTPUTYCBCRSETTINGS         = 393225, // 0x00060009
	DVO_SETOUTPUTRGBSETTINGS           = 393226, // 0x0006000A
	DVO_GETOUTPUTRGBSETTINGS           = 393227, // 0x0006000B
	DVO_APPLYCUSTOMSETTINGS            = 393228, // 0x0006000C
	DVO_SETDISPLAYMODE                 = 393229, // 0x0006000D
	DVO_GETDISPLAYMODE                 = 393230, // 0x0006000E
	DVO_SETTYPE                        = 393231, // 0x0006000F
	DVO_GETTYPE                        = 393232, // 0x00060010
	// Module capture
	CAPTURE_SINGLEFRAME                = 458753, // 0x00070001
	CAPTURE_FRAMES                     = 458754, // 0x00070002
	// Module scnr
	SCNR_SETENABLESTATE                = 524289, // 0x00080001
	SCNR_GETENABLESTATE                = 524290, // 0x00080002
	SCNR_SETTHCOLSUM                   = 524291, // 0x00080003
	SCNR_GETTHCOLSUM                   = 524292, // 0x00080004
	SCNR_SETTHPIXEL                    = 524293, // 0x00080005
	SCNR_GETTHPIXEL                    = 524294, // 0x00080006
	SCNR_SETMAXCORR                    = 524295, // 0x00080007
	SCNR_GETMAXCORR                    = 524296, // 0x00080008
	SCNR_RESTOREDEFAULTS               = 524297, // 0x00080009
	SCNR_GETTHPIXELAPPLIED             = 524298, // 0x0008000A
	SCNR_GETMAXCORRAPPLIED             = 524299, // 0x0008000B
	// Module agc
	AGC_SETPERCENTPERBIN               = 589825, // 0x00090001
	AGC_GETPERCENTPERBIN               = 589826, // 0x00090002
	AGC_SETLINEARPERCENT               = 589827, // 0x00090003
	AGC_GETLINEARPERCENT               = 589828, // 0x00090004
	AGC_SETOUTLIERCUT                  = 589829, // 0x00090005
	AGC_GETOUTLIERCUT                  = 589830, // 0x00090006
	AGC_SETDROUT                       = 589831, // 0x00090007
	AGC_GETDROUT                       = 589832, // 0x00090008
	AGC_SETMAXGAIN                     = 589833, // 0x00090009
	AGC_GETMAXGAIN                     = 589834, // 0x0009000A
	AGC_SETDF                          = 589835, // 0x0009000B
	AGC_GETDF                          = 589836, // 0x0009000C
	AGC_SETGAMMA                       = 589837, // 0x0009000D
	AGC_GETGAMMA                       = 589838, // 0x0009000E
	AGC_GETFIRSTBIN                    = 589840, // 0x00090010
	AGC_GETLASTBIN                     = 589842, // 0x00090012
	AGC_SETDETAILHEADROOM              = 589843, // 0x00090013
	AGC_GETDETAILHEADROOM              = 589844, // 0x00090014
	AGC_SETD2BR                        = 589845, // 0x00090015
	AGC_GETD2BR                        = 589846, // 0x00090016
	AGC_SETSIGMAR                      = 589847, // 0x00090017
	AGC_GETSIGMAR                      = 589848, // 0x00090018
	AGC_SETUSEENTROPY                  = 589854, // 0x0009001E
	AGC_GETUSEENTROPY                  = 589855, // 0x0009001F
	AGC_SETROI                         = 589856, // 0x00090020
	AGC_GETROI                         = 589857, // 0x00090021
	AGC_GETMAXGAINAPPLIED              = 589861, // 0x00090025
	AGC_GETSIGMARAPPLIED               = 589862, // 0x00090026
	// Module tf
	TF_SETENABLESTATE                  = 655361, // 0x000A0001
	TF_GETENABLESTATE                  = 655362, // 0x000A0002
	TF_SETDELTA_NF                     = 655363, // 0x000A0003
	TF_GETDELTA_NF                     = 655364, // 0x000A0004
	TF_SETTHDELTAMOTION                = 655365, // 0x000A0005
	TF_GETTHDELTAMOTION                = 655366, // 0x000A0006
	TF_SETWLUT                         = 655367, // 0x000A0007
	TF_GETWLUT                         = 655368, // 0x000A0008
	TF_GETMOTIONCOUNT                  = 655369, // 0x000A0009
	TF_SETMOTIONMODE                   = 655370, // 0x000A000A
	TF_GETMOTIONMODE                   = 655371, // 0x000A000B
	TF_SETMOTIONSTATE                  = 655372, // 0x000A000C
	TF_GETMOTIONSTATE                  = 655373, // 0x000A000D
	TF_SETMOTIONTHRESHOLD              = 655374, // 0x000A000E
	TF_GETMOTIONTHRESHOLD              = 655375, // 0x000A000F
	TF_SETMOTIONDELTALUT               = 655376, // 0x000A0010
	TF_GETMOTIONDELTALUT               = 655377, // 0x000A0011
	TF_SETMOTIONDELTAINDEX             = 655378, // 0x000A0012
	TF_GETMOTIONDELTAINDEX             = 655379, // 0x000A0013
	TF_SETNFLUT                        = 655380, // 0x000A0014
	TF_GETNFLUT                        = 655381, // 0x000A0015
	TF_GETDELTA_NFAPPLIED              = 655382, // 0x000A0016
	TF_GETTHDELTAMOTIONAPPLIED         = 655383, // 0x000A0017
	TF_GETSNAPSHOTBUFFERADDR           = 655384, // 0x000A0018
	// Module mem
	MEM_READCAPTURE                    = 4294901763, // 0xFFFF0003
	MEM_GETCAPTURESIZE                 = 4294901764, // 0xFFFF0004
	MEM_WRITEFLASH                     = 4294901765, // 0xFFFF0005
	MEM_READFLASH                      = 4294901766, // 0xFFFF0006
	MEM_GETFLASHSIZE                   = 4294901767, // 0xFFFF0007
	MEM_ERASEFLASH                     = 4294901768, // 0xFFFF0008
	MEM_ERASEFLASHPARTIAL              = 4294901769, // 0xFFFF0009
	// Module colorLut
	COLORLUT_SETCONTROL                = 720897, // 0x000B0001
	COLORLUT_GETCONTROL                = 720898, // 0x000B0002
	COLORLUT_SETID                     = 720899, // 0x000B0003
	COLORLUT_GETID                     = 720900, // 0x000B0004
	// Module spnr
	SPNR_SETENABLESTATE                = 786433, // 0x000C0001
	SPNR_GETENABLESTATE                = 786434, // 0x000C0002
	SPNR_GETSTATE                      = 786436, // 0x000C0004
	SPNR_GETSF                         = 786444, // 0x000C000C
	SPNR_SETSCALEFACTORLUT             = 786447, // 0x000C000F
	SPNR_GETSCALEFACTORLUT             = 786448, // 0x000C0010
	SPNR_SETUPDATERATEINDEX            = 786449, // 0x000C0011
	SPNR_GETUPDATERATEINDEX            = 786450, // 0x000C0012
	SPNR_SETAUTOEXECUTESTATE           = 786451, // 0x000C0013
	SPNR_GETAUTOEXECUTESTATE           = 786452, // 0x000C0014
	SPNR_GETSFAPPLIED                  = 786453, // 0x000C0015
	SPNR_SETFRAMEBASEDSF               = 786456, // 0x000C0018
	SPNR_GETFRAMEBASEDSF               = 786457, // 0x000C0019
	SPNR_SETPSDKERNEL                  = 786458, // 0x000C001A
	SPNR_GETPSDKERNEL                  = 786459, // 0x000C001B
	// Module scaler
	SCALER_GETMAXZOOM                  = 851969, // 0x000D0001
	SCALER_SETZOOM                     = 851970, // 0x000D0002
	SCALER_GETZOOM                     = 851971, // 0x000D0003
	SCALER_SETFILTER                   = 851972, // 0x000D0004
	SCALER_GETFILTER                   = 851973, // 0x000D0005
	// Module sysctrl
	SYSCTRL_SETFREEZESTATE             = 917505, // 0x000E0001
	SYSCTRL_GETFREEZESTATE             = 917506, // 0x000E0002
	SYSCTRL_GETCAMERAFRAMERATE         = 917511, // 0x000E0007
	// Module agcClaw
	AGCCLAW_SETDAMPINGFACTOR           = 983041, // 0x000F0001
	AGCCLAW_GETDAMPINGFACTOR           = 983042, // 0x000F0002
	AGCCLAW_SETCLIPLIMIT               = 983043, // 0x000F0003
	AGCCLAW_GETCLIPLIMIT               = 983044, // 0x000F0004
	AGCCLAW_SETGAINLIMIT               = 983045, // 0x000F0005
	AGCCLAW_GETGAINLIMIT               = 983046, // 0x000F0006
	// Module testRamp
	TESTRAMP_SETTYPE                   = 1048576, // 0x00100000
	TESTRAMP_GETTYPE                   = 1048577, // 0x00100001
	TESTRAMP_SETSETTINGS               = 1048578, // 0x00100002
	TESTRAMP_GETSETTINGS               = 1048579, // 0x00100003
	TESTRAMP_SETMOTIONSTATE            = 1048580, // 0x00100004
	TESTRAMP_GETMOTIONSTATE            = 1048581, // 0x00100005
	TESTRAMP_SETINDEX                  = 1048582, // 0x00100006
	TESTRAMP_GETINDEX                  = 1048583, // 0x00100007
	TESTRAMP_GETMAXINDEX               = 1048584, // 0x00100008
	// Module testFramework
	// Module dummy
	DUMMY_BADCOMMAND                   = 3735928559, // 0xDEADBEEF
};
typedef enum _functionCodes FLR_FUNCTION;

#endif // FUNCTION_CODES_H
