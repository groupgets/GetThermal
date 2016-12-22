#include "bosonvariation.h"

BosonVariation::BosonVariation(uvc_context_t *ctx,
                               uvc_device_t *dev,
                               uvc_device_handle_t *devh)
  : ctx(ctx)
  , dev(dev)
  , devh(devh)
{
    printf("Initializing Boson with UVC backend...\n");

    uvc_get_device_descriptor(dev, &desc);
    printf("Using %s %s with firmware %s\n", desc->manufacturer, desc->product, desc->serialNumber);

}

BosonVariation::~BosonVariation()
{
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
