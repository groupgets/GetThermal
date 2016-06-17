#include "uvcvideoproducer.h"

UvcVideoProducer::UvcVideoProducer(QObject *parent) : QObject(parent)
{
    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_RGB32);
}

void UvcVideoProducer::setVideoSurface(QAbstractVideoSurface *surface)
{
    if (m_surface != surface && m_surface && m_surface->isActive()) {
        m_surface->stop();
    }
    m_surface = surface;
    if (m_surface)
        m_surface->start(m_format);
}

void UvcVideoProducer::onNewVideoContentReceived(const QVideoFrame &frame)
{
    if (m_surface)
        m_surface->present(frame);
}

void UvcVideoProducer::produceContent()
{
    QImage image("/Users/kurt/Desktop/uvc.png");
    QVideoFrame frame(image);
    printf("Width: %d Height: %d isValid: %d", frame.width(), frame.height(), frame.isValid());
    this->onNewVideoContentReceived(frame);
}
