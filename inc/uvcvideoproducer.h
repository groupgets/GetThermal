#ifndef UVCVIDEOPRODUCER_H
#define UVCVIDEOPRODUCER_H

#include <QObject>
#include <QAbstractVideoSurface>
#include <QVideoSurfaceFormat>
#include "uvcacquisition.h"

class UvcVideoProducer : public QObject
{
    Q_OBJECT
public:
    explicit UvcVideoProducer(QObject *parent = 0);

    Q_PROPERTY(QAbstractVideoSurface *videoSurface MEMBER m_surface WRITE setVideoSurface NOTIFY surfaceChanged)
    void setVideoSurface(QAbstractVideoSurface *surface);

    Q_PROPERTY(UvcAcquisition *uvc MEMBER m_uvc WRITE setUvc NOTIFY uvcChanged)
    void setUvc(UvcAcquisition *uvc);

signals:
    void surfaceChanged(QAbstractVideoSurface *surface);
    void uvcChanged(UvcAcquisition *uvc);

public slots:
    void onNewVideoContentReceived(const QVideoFrame &frame);

private:
    QAbstractVideoSurface *m_surface;
    UvcAcquisition *m_uvc;
};

#endif // UVCVIDEOPRODUCER_H
