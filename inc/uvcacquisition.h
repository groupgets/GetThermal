#ifndef UVCACQUISITION_H
#define UVCACQUISITION_H

#include <QList>
#include <QObject>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>

#include <libuvc/libuvc.h>
#include <unistd.h>

#include "abstractccinterface.h"
#include "dataformatter.h"

class UvcAcquisition : public QObject
{
    Q_OBJECT

public:
    struct UsbId {
        int vid;
        int pid;
    };

    UvcAcquisition(QObject *parent = 0);
    UvcAcquisition(QList<UsbId> ids);
    virtual ~UvcAcquisition();

    Q_PROPERTY(const QVideoSurfaceFormat& videoFormat READ videoFormat WRITE setVideoFormat NOTIFY formatChanged)
    const QVideoSurfaceFormat& videoFormat() const { return m_format; }

    Q_PROPERTY(AbstractCCInterface* cci MEMBER m_cci NOTIFY cciChanged)

    Q_PROPERTY(DataFormatter* dataFormatter READ getDataFormatter() NOTIFY dataFormatterChanged)
    DataFormatter* getDataFormatter() { return &m_df; }

    Q_PROPERTY(const QSize& videoSize READ getVideoSize NOTIFY videoSizeChanged)
    const QSize getVideoSize() { return m_format.frameSize(); }

signals:
    void frameReady(const QVideoFrame &frame);
    void formatChanged(const QVideoSurfaceFormat &format);
    void cciChanged(AbstractCCInterface *format);
    void dataFormatterChanged(AbstractCCInterface *format);
    void videoSizeChanged(const QSize &size);

public slots:
    void setVideoFormat(const QVideoSurfaceFormat &format);

    void pauseStream();
    void resumeStream();

protected:
    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    uvc_stream_ctrl_t ctrl;
    QVideoSurfaceFormat m_format;
    QVideoSurfaceFormat m_uvc_format;
    AbstractCCInterface *m_cci;
    DataFormatter m_df;

private:
    static void cb(uvc_frame_t *frame, void *ptr);
    void emitFrameReady(const QVideoFrame &frame);
    void init();
    QList<UsbId> _ids;
};

#endif // UVCACQUISITION_H
