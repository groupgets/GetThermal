#ifndef BOSONVARIATION_H
#define BOSONVARIATION_H

#include <QObject>

#include <libuvc/libuvc.h>

#include "abstractccinterface.h"

class BosonVariation : public AbstractCCInterface
{
    Q_OBJECT
public:
    BosonVariation(uvc_context_t *ctx,
                   uvc_device_t *dev,
                   uvc_device_handle_t *devh);

    virtual ~BosonVariation();

    virtual const AbstractCCInterface& operator =(const AbstractCCInterface&);

    Q_PROPERTY(bool supportsHwPseudoColor READ getSupportsHwPseudoColor)
    bool getSupportsHwPseudoColor() const;

    Q_PROPERTY(bool supportsRadiometry READ getSupportsRadiometry)
    bool getSupportsRadiometry();

    Q_PROPERTY(const QVideoSurfaceFormat defaultFormat READ getDefaultFormat)
    virtual const QVideoSurfaceFormat getDefaultFormat();

public slots:
    virtual void performFfc() {}

private:
    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    uvc_device_descriptor_t *desc;
};

#endif // BOSONVARIATION_H
