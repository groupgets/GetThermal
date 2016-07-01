#ifndef LEPTONVARIATION_H
#define LEPTONVARIATION_H

#include <QObject>
#include "LEPTON_Types.h"
#include "LEPTON_ErrorCodes.h"
#include "LEPTON_VID.h"

#include <libuvc/libuvc.h>

#include "abstractccinterface.h"
#include "leptonvariation_types.h"

#include <functional>
using namespace std;
using namespace std::placeholders;
using namespace LEP;

class LeptonVariation : public AbstractCCInterface
{
    Q_OBJECT
public:
    LeptonVariation(uvc_context_t *ctx,
                    uvc_device_t *dev,
                    uvc_device_handle_t *devh);

    LEP_RESULT UVC_GetAttribute(LEP_COMMAND_ID commandID,
                                LEP_ATTRIBUTE_T_PTR attributePtr,
                                LEP_UINT16 attributeWordLength);

    LEP_RESULT UVC_SetAttribute(LEP_COMMAND_ID commandID,
                                LEP_ATTRIBUTE_T_PTR attributePtr,
                                LEP_UINT16 attributeWordLength);

    LEP_RESULT UVC_RunCommand(LEP_COMMAND_ID commandID);

    LEP_CAMERA_PORT_DESC_T_PTR GetPortDescription() { return &m_portDesc; }

    virtual const AbstractCCInterface& operator =(const AbstractCCInterface&);

    Q_PROPERTY(PCOLOR_LUT_E vidPcolorLut
               READ (bind_get<LEP_PCOLOR_LUT_E, PCOLOR_LUT_E>(LEP_GetVidPcolorLut))
               WRITE (bind_set<LEP_PCOLOR_LUT_E, PCOLOR_LUT_E>(LEP_SetVidPcolorLut, (bind(&LeptonVariation::vidPcolorLutChanged, _t, _1))))
               NOTIFY vidPcolorLutChanged)

    virtual void performFfc();

signals:
    void vidPcolorLutChanged(PCOLOR_LUT_E lut);

public slots:

private:

    template <class T, class W>
    function<W(void)> bind_get(function<LEP_RESULT(LEP_CAMERA_PORT_DESC_T_PTR, T*)> F)
    {
        return bind(&LeptonVariation::pget<T, W>, this, F);
    }

    template <class T, class W>
    function<void(W)> bind_set(function<LEP_RESULT(LEP_CAMERA_PORT_DESC_T_PTR, T)> F,
                               function<void(W)> E)
    {
        return bind(&LeptonVariation::pset<T, W>, this, F, E, _1);
    }

    template <class T, class W>
    W pget(function<LEP_RESULT(LEP_CAMERA_PORT_DESC_T_PTR, T*)> F)
    {
        T var;
        F(&m_portDesc, &var);
        return (W)var;
    }

    template <class T, class W>
    void pset(function<LEP_RESULT(LEP_CAMERA_PORT_DESC_T_PTR, T)> F, function<void(W)> E, W var)
    {
        F(&m_portDesc, (T)var);
        emit E(var);
    }

    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    LEP_CAMERA_PORT_DESC_T m_portDesc;

    int leptonCommandIdToUnitId(LEP_COMMAND_ID commandID);
};

Q_DECLARE_METATYPE(PCOLOR_LUT_E)

#endif // LEPTONVARIATION_H
