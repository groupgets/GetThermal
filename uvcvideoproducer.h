#ifndef UVCVIDEOPRODUCER_H
#define UVCVIDEOPRODUCER_H

#include <QObject>
#include <QAbstractVideoSurface>
#include <QVideoSurfaceFormat>

class UvcVideoProducer : public QObject
{
    Q_OBJECT
public:
    explicit UvcVideoProducer(QObject *parent = 0);

    Q_PROPERTY(QAbstractVideoSurface *videoSurface READ videoSurface WRITE setVideoSurface)
    QAbstractVideoSurface* videoSurface() const { return m_surface; }
    void setVideoSurface(QAbstractVideoSurface *surface);

signals:

public slots:
    void onNewVideoContentReceived(const QVideoFrame &frame);
    void produceContent();
private:
    QAbstractVideoSurface *m_surface;
    QVideoSurfaceFormat m_format;
};

#endif // UVCVIDEOPRODUCER_H
