#ifndef LEPTONVARIATION_H
#define LEPTONVARIATION_H

#include <QObject>
#include "LEPTON_Types.h"
#include "LEPTON_ErrorCodes.h"

#include <libuvc/libuvc.h>

#include "abstractccinterface.h"

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

public slots:
    virtual void PerformFFC();

private:
    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    LEP_CAMERA_PORT_DESC_T m_portDesc;

    int leptonCommandIdToUnitId(LEP_COMMAND_ID commandID);
};

#endif // LEPTONVARIATION_H
