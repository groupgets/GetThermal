#include "bosonvariation.h"

extern "C" {
#include "boson_sdk/Client_API.h"
#include "boson_sdk/EnumTypes.h"
#include "boson_sdk/UART_Connector.h"
int boson_example();
}

#define QML_REGISTER_ENUM(name) \
    qmlRegisterUncreatableType<FLR::QE_##name>("GetThermal", 1,0, "FLR_" #name, "You can't create enumeration " #name); \
    qRegisterMetaType<FLR::QE_##name::E>("FLR_" #name);

void registerBosonVariationQmlTypes()
{
    QML_REGISTER_ENUM(COLORLUT_ID_E)
}

BosonVariation::BosonVariation(uvc_context_t *ctx,
                               uvc_device_t *dev,
                               uvc_device_handle_t *devh)
  : ctx(ctx)
  , dev(dev)
  , devh(devh)
  , usb_devh(uvc_get_libusb_handle(devh))
{
    printf("Initializing Boson with UVC backend...\n");

    uvc_get_device_descriptor(dev, &desc);
    printf("Using %s %s with firmware %s\n", desc->manufacturer, desc->product, desc->serialNumber);

    FLR_RESULT result;

    result = Initialize(usb_devh);
    printf("Initialize: 0x%08X\n", result);
    if (result)
    {
        printf("Failed to initialize CCI interface\n");
    }

    this->setObjectName("BosonVariation");
}

BosonVariation::~BosonVariation()
{
    printf("\n\nClosing...\n");
    Close();

    uvc_free_device_descriptor(desc);
}

const AbstractCCInterface& BosonVariation::operator =(const AbstractCCInterface&)
{
    return BosonVariation(ctx, dev, devh);
}

const QString BosonVariation::getCameraPartNumber()
{
    FLR_BOSON_PARTNUMBER_T pn;
    bosonGetCameraPN(&pn);
    return QString::fromLatin1((char*)pn.value, sizeof(pn.value));
}

const QString BosonVariation::getCameraSerialNumber()
{
    uint32_t sn;
    bosonGetCameraSN(&sn);
    return QString::asprintf("%d", sn);
}

const QString BosonVariation::getSensorPartNumber()
{

    FLR_BOSON_SENSOR_PARTNUMBER_T pn;
    bosonGetSensorPN(&pn);
    return QString::fromLatin1((char*)pn.value, sizeof(pn.value));
}

const QString BosonVariation::getSensorSerialNumber()
{
    uint32_t sn;
    bosonGetSensorSN(&sn);
    return QString::asprintf("%d", sn);
}

const QString BosonVariation::getSoftwareRev()
{
    uint32_t maj, min, rev;
    bosonGetSoftwareRev(&maj, &min, &rev);
    return QString::asprintf("%d.%d.%d", maj, min, rev);
}


bool BosonVariation::getSupportsHwPseudoColor() const
{
    return true;
}

bool BosonVariation::getSupportsRadiometry()
{
    return false;
}

const QVideoSurfaceFormat BosonVariation::getDefaultFormat()
{
    return QVideoSurfaceFormat(QSize(640,512), QVideoFrame::Format_YUV420P);
}

float BosonVariation::getCameraInternalTempC()
{
    int16_t temp_c_x10;
    bosonlookupFPATempDegCx10(&temp_c_x10);
    return (float)temp_c_x10 / 10.0f;
}

void BosonVariation::performFfc()
{
    FLR_RESULT result = bosonRunFFC();
    printf("RunFFC:  0x%08X \n", result);
}
