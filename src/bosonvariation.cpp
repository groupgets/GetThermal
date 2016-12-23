#include "bosonvariation.h"

extern "C" {
#include "boson_sdk/Client_API.h"
#include "boson_sdk/EnumTypes.h"
#include "boson_sdk/UART_Connector.h"
int boson_example();
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

    boson_example();
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

bool BosonVariation::getSupportsHwPseudoColor() const
{
    return false;
}

bool BosonVariation::getSupportsRadiometry()
{
    return true;
}

const QVideoSurfaceFormat BosonVariation::getDefaultFormat()
{
    return QVideoSurfaceFormat(QSize(320,256), QVideoFrame::Format_Y16);
}

void BosonVariation::performFfc()
{
    FLR_RESULT result = bosonRunFFC();
    printf("RunFFC:  0x%08X \n", result);
}
