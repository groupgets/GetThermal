#include "leptonvariation.h"
#include "uvc_sdk.h"
#include "LEPTON_SDK.h"
#include "LEPTON_OEM.h"
#include "LEPTON_RAD.h"
#include "LEPTON_SYS.h"
#include "LEPTON_VID.h"

#define LEP_CID_AGC_MODULE (0x0100)
#define LEP_CID_OEM_MODULE (0x0800)
#define LEP_CID_RAD_MODULE (0x0E00)
#define LEP_CID_SYS_MODULE (0x0200)
#define LEP_CID_VID_MODULE (0x0300)

typedef enum {
  VC_CONTROL_XU_LEP_AGC_ID = 3,
  VC_CONTROL_XU_LEP_OEM_ID,
  VC_CONTROL_XU_LEP_RAD_ID,
  VC_CONTROL_XU_LEP_SYS_ID,
  VC_CONTROL_XU_LEP_VID_ID,
} VC_TERMINAL_ID;

#define QML_REGISTER_ENUM(name) \
    qmlRegisterUncreatableType<LEP::QE_##name>("GetThermal", 1,0, "LEP_" #name, "You can't create enumeration " #name); \
    qRegisterMetaType<LEP::QE_##name::E>("LEP_" #name);

void registerLeptonVariationQmlTypes()
{
    QML_REGISTER_ENUM(PCOLOR_LUT_E)
    QML_REGISTER_ENUM(POLARITY_E)
    QML_REGISTER_ENUM(VID_SBNUC_ENABLE_E)
    QML_REGISTER_ENUM(AGC_ENABLE_E)
    QML_REGISTER_ENUM(AGC_POLICY_E)
    QML_REGISTER_ENUM(AGC_HEQ_SCALE_FACTOR_E)
}

LeptonVariation::LeptonVariation(uvc_context_t *ctx,
                                 uvc_device_t *dev,
                                 uvc_device_handle_t *devh)
    : ctx(ctx)
    , dev(dev)
    , devh(devh)
{
    printf("Initializing lepton SDK with UVC backend...\n");

    uvc_get_device_descriptor(dev, &desc);
    printf("Using %s %s with firmware %s\n", desc->manufacturer, desc->product, desc->serialNumber);

    m_portDesc.portID = 0;
    m_portDesc.portType = LEP_CCI_UVC;
    m_portDesc.userPtr = this;
    LEP_OpenPort(m_portDesc.portID,
                 m_portDesc.portType,
                 0,
                 &m_portDesc);
    printf("OK\n");

    const uvc_extension_unit_t *units = uvc_get_extension_units(devh);
    while (units)
    {
        printf("Found extension unit ID %d, controls: %08llx, GUID:", units->bUnitID, units->bmControls);
        for (int i = 0; i < 16; i++)
            printf(" %02x", units->guidExtensionCode[i]);
        printf("\n");
        units = units->next;
    }

    this->setObjectName("LeptonVariation");
}

LeptonVariation::~LeptonVariation()
{
    uvc_free_device_descriptor(desc);
}

const AbstractCCInterface& LeptonVariation::operator =(const AbstractCCInterface&)
{
    return LeptonVariation(ctx, dev, devh);
}

const QString LeptonVariation::getSysFlirSerialNumber()
{
    uint64_t serialNumber = pget<uint64_t, uint64_t>(LEP_GetSysFlirSerialNumber);
    return QString::asprintf("%08llx", serialNumber);
}

const QString LeptonVariation::getOemFlirPartNumber()
{
    LEP_OEM_PART_NUMBER_T serialNumber;
    LEP_GetOemFlirPartNumber(&m_portDesc, &serialNumber);
    return QString::fromLatin1(serialNumber.value, LEP_SYS_MAX_SERIAL_NUMBER_CHAR_SIZE);
}

const QString LeptonVariation::getOemGppSoftwareVersion()
{
    LEP_OEM_SW_VERSION_T swVers;
    LEP_GetOemSoftwareVersion(&m_portDesc, &swVers);
    return QString::asprintf("%d.%d.%d", swVers.gpp_major, swVers.gpp_minor, swVers.gpp_build);
}

const QString LeptonVariation::getOemDspSoftwareVersion()
{
    LEP_OEM_SW_VERSION_T swVers;
    LEP_GetOemSoftwareVersion(&m_portDesc, &swVers);
    return QString::asprintf("%d.%d.%d", swVers.dsp_major, swVers.dsp_minor, swVers.dsp_build);
}

const QString LeptonVariation::getPtFirmwareVersion() const
{
    return QString::asprintf("%s", desc->serialNumber);
}

bool LeptonVariation::getSupportsHwPseudoColor() const
{
    return !getPtFirmwareVersion().contains("Y16");
}

bool LeptonVariation::getSupportsRadiometry()
{
    return !getSupportsHwPseudoColor() && getOemFlirPartNumber().contains("500-0763-01");
}

const QVideoSurfaceFormat LeptonVariation::getDefaultFormat()
{
    if (getPtFirmwareVersion().contains("Y16"))
    {
        return QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_Y16);
    }
    else
    {
        return QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_RGB24);
    }
}


void LeptonVariation::performFfc()
{
    //LEP_RunOemFFC(&m_portDesc);
    LEP_RunSysFFCNormalization(&m_portDesc);
}

int LeptonVariation::leptonCommandIdToUnitId(LEP_COMMAND_ID commandID)
{
    int unit_id;

    switch (commandID & 0x3f00) // Ignore upper 2 bits including OEM bit
    {
    case LEP_CID_AGC_MODULE:
        unit_id = VC_CONTROL_XU_LEP_AGC_ID;
        break;

    case LEP_CID_OEM_MODULE:
        unit_id = VC_CONTROL_XU_LEP_OEM_ID;
        break;

    case LEP_CID_RAD_MODULE:
        unit_id = VC_CONTROL_XU_LEP_RAD_ID;
        break;

    case LEP_CID_SYS_MODULE:
        unit_id = VC_CONTROL_XU_LEP_SYS_ID;
        break;

    case LEP_CID_VID_MODULE:
        unit_id = VC_CONTROL_XU_LEP_VID_ID;
        break;

    default:
        return LEP_RANGE_ERROR;
    }

    return unit_id;
}

LEP_RESULT LeptonVariation::UVC_GetAttribute(LEP_COMMAND_ID commandID,
                            LEP_ATTRIBUTE_T_PTR attributePtr,
                            LEP_UINT16 attributeWordLength)
{
    int unit_id;
    int control_id;
    int result;

    unit_id = leptonCommandIdToUnitId(commandID);
    if (unit_id < 0)
        return (LEP_RESULT)unit_id;

    control_id = ((commandID & 0x00ff) >> 2) + 1;

    // Size in 16-bit words needs to be in bytes
    attributeWordLength *= 2;

    result = uvc_get_ctrl(devh, unit_id, control_id, attributePtr, attributeWordLength, UVC_GET_CUR);
    if (result != attributeWordLength)
    {
        printf("UVC_GetAttribute failed: %d", result);
        return LEP_COMM_ERROR_READING_COMM;
    }

    return LEP_OK;
}

LEP_RESULT LeptonVariation::UVC_SetAttribute(LEP_COMMAND_ID commandID,
                            LEP_ATTRIBUTE_T_PTR attributePtr,
                            LEP_UINT16 attributeWordLength)
{
    int unit_id;
    int control_id;
    int result;

    unit_id = leptonCommandIdToUnitId(commandID);
    if (unit_id < 0)
        return (LEP_RESULT)unit_id;

    control_id = ((commandID & 0x00ff) >> 2) + 1;

    // Size in 16-bit words needs to be in bytes
    attributeWordLength *= 2;

    result = uvc_set_ctrl(devh, unit_id, control_id, attributePtr, attributeWordLength);
    if (result != attributeWordLength)
    {
        printf("UVC_SetAttribute failed: %d", result);
        return LEP_COMM_ERROR_READING_COMM;
    }

    return LEP_OK;
}

LEP_RESULT LeptonVariation::UVC_RunCommand(LEP_COMMAND_ID commandID)
{
    int unit_id;
    int control_id;
    int result;

    unit_id = leptonCommandIdToUnitId(commandID);
    if (unit_id < 0)
        return (LEP_RESULT)unit_id;

    control_id = ((commandID & 0x00ff) >> 2) + 1;

    result = uvc_set_ctrl(devh, unit_id, control_id, &control_id, 1);
    if (result != 1)
    {
        printf("UVC_RunCommand failed: %d", result);
        return LEP_COMM_ERROR_READING_COMM;
    }

    return LEP_OK;
}

/* --------------------------------------------------------------------- */
/* -------- static wrapper functions for use by Lepton SDK only -------- */
/* --------------------------------------------------------------------- */

LEP_RESULT UVC_GetAttribute(LEP_CAMERA_PORT_DESC_T_PTR portDescPtr,
                            LEP_COMMAND_ID commandID,
                            LEP_ATTRIBUTE_T_PTR attributePtr,
                            LEP_UINT16 attributeWordLength)
{
    return static_cast<LeptonVariation*>(portDescPtr->userPtr) ->
            UVC_GetAttribute(commandID, attributePtr, attributeWordLength);
}

LEP_RESULT UVC_SetAttribute(LEP_CAMERA_PORT_DESC_T_PTR portDescPtr,
                            LEP_COMMAND_ID commandID,
                            LEP_ATTRIBUTE_T_PTR attributePtr,
                            LEP_UINT16 attributeWordLength)
{
    return static_cast<LeptonVariation*>(portDescPtr->userPtr) ->
            UVC_SetAttribute(commandID, attributePtr, attributeWordLength);
}

LEP_RESULT UVC_RunCommand(LEP_CAMERA_PORT_DESC_T_PTR portDescPtr,
                          LEP_COMMAND_ID commandID)
{
    return static_cast<LeptonVariation*>(portDescPtr->userPtr) ->
            UVC_RunCommand(commandID);
}
