#include "uvcvideoproducer.h"
#include "uvcacquisition.h"

UvcVideoProducer::UvcVideoProducer(QObject *parent)
    : QObject(parent)
    , m_surface(NULL)
    , m_format(QVideoSurfaceFormat(QSize(-1, -1), QVideoFrame::Format_Invalid))
{
//    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_RGB24);
//    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_NV12);
//    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_YUV420P);
//    m_format.setYCbCrColorSpace(QVideoSurfaceFormat::YCbCr_BT601);
}

void UvcVideoProducer::setVideoSurface(QAbstractVideoSurface *surface)
{
    if (m_surface != surface && m_surface && m_surface->isActive()) {
        m_surface->stop();
    }

    m_surface = surface;
    printf("Surface set. Supported formats:");
    QList<QVideoFrame::PixelFormat> formats = surface->supportedPixelFormats();
    for (int i = 0; i < formats.length(); i++)
        printf(" %d", formats[i]);
    printf("\n");
    fflush(stdout);

    if (m_surface)
        m_surface->start(m_format);
}

void UvcVideoProducer::setVideoFormat(const QVideoSurfaceFormat &format)
{
    if (m_surface && m_surface->isActive()) {
        m_surface->stop();
    }

    m_format = format;

    QVideoSurfaceFormat new_format = m_surface->nearestFormat(m_format);
    printf("Surface supports format %d width %d height %d",
           new_format.pixelFormat(),
           new_format.frameWidth(), new_format.frameHeight());
    fflush(stdout);

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
