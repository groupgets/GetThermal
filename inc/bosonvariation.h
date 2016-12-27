#ifndef BOSONVARIATION_H
#define BOSONVARIATION_H

#include <QObject>

#include <libuvc/libuvc.h>

#include "abstractccinterface.h"
#include "bosonvariation_types.h"

extern "C" {
#include "boson_sdk/Client_API.h"
}

#include <functional>
using namespace std;
using namespace std::placeholders;
using namespace FLR;

#define BOSON_SIMPLE_PROPERTY(type, sdk_type, name, sdk_get, sdk_set) \
    Q_PROPERTY(type name \
               READ (bind_get<sdk_type, type>(sdk_get)) \
               WRITE (bind_set<sdk_type, type>(sdk_set, (bind(&BosonVariation::name##Changed, _t, _1)))) \
               NOTIFY name##Changed)

#define BOSON_ENUM_PROPERTY(type, name, sdk_get, sdk_set) \
    BOSON_SIMPLE_PROPERTY(type, FLR_##type, name, sdk_get, sdk_set)

#define BOSON_UINT16_PROPERTY(name, sdk_get, sdk_set) \
    BOSON_SIMPLE_PROPERTY(unsigned int, uint16_t, name, sdk_get, sdk_set)

class BosonVariation : public AbstractCCInterface
{
    Q_OBJECT
public:
    BosonVariation(uvc_context_t *ctx,
                   uvc_device_t *dev,
                   uvc_device_handle_t *devh);

    virtual ~BosonVariation();

    virtual const AbstractCCInterface& operator =(const AbstractCCInterface&);

    BOSON_ENUM_PROPERTY(COLORLUT_ID_E, colorLutId, colorLutGetId, colorLutSetId)

    Q_PROPERTY(const QString cameraSerialNumber READ getCameraSerialNumber)
    const QString getCameraSerialNumber();

    Q_PROPERTY(const QString cameraPartNumber READ getCameraPartNumber)
    const QString getCameraPartNumber();

    Q_PROPERTY(const QString sensorSerialNumber READ getSensorSerialNumber)
    const QString getSensorSerialNumber();

    Q_PROPERTY(const QString sensorPartNumber READ getSensorPartNumber)
    const QString getSensorPartNumber();

    Q_PROPERTY(const QString softwareRev READ getSoftwareRev)
    const QString getSoftwareRev();

    Q_PROPERTY(float cameraInternalTempC READ getCameraInternalTempC NOTIFY cameraInternalTempChanged)
    float getCameraInternalTempC();

    Q_PROPERTY(bool supportsHwPseudoColor READ getSupportsHwPseudoColor)
    bool getSupportsHwPseudoColor() const;

    Q_PROPERTY(bool supportsRadiometry READ getSupportsRadiometry)
    bool getSupportsRadiometry();

    Q_PROPERTY(const QVideoSurfaceFormat defaultFormat READ getDefaultFormat)
    virtual const QVideoSurfaceFormat getDefaultFormat();

signals:
    void cameraInternalTempChanged(float temp);

    void colorLutIdChanged(COLORLUT_ID_E val);

public slots:
    virtual void performFfc();

private:

    template <class T, class W>
    function<W(void)> bind_get(function<FLR_RESULT(T*)> F)
    {
        return bind(&BosonVariation::pget<T, W>, this, F);
    }

    template <class T, class W>
    function<void(W)> bind_set(function<FLR_RESULT(T)> F,
                               function<void(W)> E)
    {
        return bind(&BosonVariation::pset<T, W>, this, F, E, _1);
    }

    template <class T, class W>
    W pget(function<FLR_RESULT(T*)> F)
    {
        T var;
        F(&var);
        return (W)var;
    }

    template <class T, class W>
    void pset(function<FLR_RESULT(T)> F, function<void(W)> E, W var)
    {
        F((T)var);
        emit E(var);
    }

    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    libusb_device_handle *usb_devh;
    uvc_device_descriptor_t *desc;
};

Q_DECLARE_METATYPE(COLORLUT_ID_E)

#endif // BOSONVARIATION_H
