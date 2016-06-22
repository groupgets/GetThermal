#ifndef UVCACQUISITION_H
#define UVCACQUISITION_H

#include <QList>
#include <QObject>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>

#include <libuvc/libuvc.h>
#include <unistd.h>

#include "abstractccinterface.h"

class UvcAcquisition : public QObject
{
    Q_OBJECT

public:
    struct UsbId {
        int pid;
        int vid;
    };

    UvcAcquisition(QObject *parent = 0);
    UvcAcquisition(QList<UsbId> ids);
    virtual ~UvcAcquisition();

    Q_PROPERTY(const QVideoSurfaceFormat& videoFormat READ videoFormat WRITE setVideoFormat NOTIFY formatChanged)
    const QVideoSurfaceFormat& videoFormat() const { return m_format; }

    Q_PROPERTY(AbstractCCInterface* cci MEMBER m_cci)

signals:
    void frameReady(const QVideoFrame &frame);
    void formatChanged(const QVideoSurfaceFormat &format);

public slots:
    void setVideoFormat(const QVideoSurfaceFormat &format);

protected:
    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    QVideoSurfaceFormat m_format;
    AbstractCCInterface *m_cci;

private:
    static void cb(uvc_frame_t *frame, void *ptr);
    void emitFrameReady(const QVideoFrame &frame);
    void init();
    QList<UsbId> _ids;
};

#endif // UVCACQUISITION_H
