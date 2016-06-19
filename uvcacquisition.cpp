#include "uvcacquisition.h"
#include "uvcbuffer.h"
#include <QList>
#include <libuvc/libuvc.h>

//#define PLANAR_BUFFER 1
#define ACQ_RGB 1

UvcAcquisition::UvcAcquisition(QObject *parent)
    : QObject(parent)
    , ctx(NULL)
    , dev(NULL)
    , devh(NULL)
{
    _ids.append({ 0, 0 });
    init();
}

UvcAcquisition::UvcAcquisition(QList<UsbId> ids)
    : ctx(NULL)
    , dev(NULL)
    , devh(NULL)
    , _ids(ids)
{
    init();
}

UvcAcquisition::~UvcAcquisition()
{
    if (devh != NULL)
    {
        uvc_stop_streaming(devh);
        puts("Done streaming.");

        /* Release our handle on the device */
        uvc_close(devh);
        puts("Device closed");
    }

    if (dev != NULL)
    {
        /* Release the device descriptor */
        uvc_unref_device(dev);
    }

    if (ctx != NULL)
    {
        /* Close the UVC context. This closes and cleans up any existing device handles,
         * and it closes the libusb context if one was not provided. */
        uvc_exit(ctx);
        puts("UVC exited");
    }
}

void UvcAcquisition::init()
{
    uvc_stream_ctrl_t ctrl;
    uvc_error_t res;

    /* Initialize a UVC service context. Libuvc will set up its own libusb
     * context. Replace NULL with a libusb_context pointer to run libuvc
     * from an existing libusb context. */
    res = uvc_init(&ctx, NULL);

    if (res < 0) {
      uvc_perror(res, "uvc_init");
      return;
    }

    puts("UVC initialized");

    /* Locates the first attached UVC device, stores in dev */
    for (int i = 0; i < _ids.size(); ++i) {
        res = uvc_find_device(ctx, &dev, 0, 0, NULL);
        if (res >= 0)
            break;
    }

    if (res < 0) {
        uvc_perror(res, "uvc_find_device"); /* no devices found */
        return;
    }

    puts("Device found");

    /* Try to open the device: requires exclusive access */
    res = uvc_open(dev, &devh);

    if (res < 0) {
        uvc_perror(res, "uvc_open"); /* unable to open device */

        /* Release the device descriptor */
        uvc_unref_device(dev);
        return;
    }

    puts("Device opened");

    /* Print out a message containing all the information that libuvc
     * knows about the device */
    uvc_print_diag(devh, stderr);

#if ACQ_YUV420
    res = uvc_get_stream_ctrl_format_size(
                devh, &ctrl, /* result stored in ctrl */
                UVC_FRAME_FORMAT_I420,
                80, 60, 9 /* width, height, fps */
                );

    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_YUV420P);
    m_format.setYCbCrColorSpace(QVideoSurfaceFormat::YCbCr_BT601);
#elif ACQ_RGB
    res = uvc_get_stream_ctrl_format_size(
                devh, &ctrl, /* result stored in ctrl */
                UVC_FRAME_FORMAT_RGB,
                80, 60, 9 /* width, height, fps */
                );

    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_RGB32);
#else
    res = uvc_get_stream_ctrl_format_size(
                devh, &ctrl, /* result stored in ctrl */
                UVC_FRAME_FORMAT_NV12,
                80, 60, 9 /* width, height, fps */
                );

    m_format = QVideoSurfaceFormat(QSize(80,60), QVideoFrame::Format_NV12);
//    m_format.setYCbCrColorSpace(QVideoSurfaceFormat::YCbCr_BT601);
#endif

    /* Print out the result */
    uvc_print_stream_ctrl(&ctrl, stderr);

    if (res < 0) {
        uvc_perror(res, "get_mode"); /* device doesn't provide a matching stream */

        /* Release our handle on the device */
        uvc_close(devh);
        puts("Device closed");

        return;
    }

    // Notify connections of format change
    emit formatChanged(m_format);

    /* Start the video stream. The library will call user function cb:
     *   cb(frame, (void*) 12345)
     */
    res = uvc_start_streaming(devh, &ctrl, UvcAcquisition::cb, this, 0);

    if (res < 0) {
        uvc_perror(res, "start_streaming"); /* unable to start stream */
        uvc_close(devh);
        puts("Device closed");

        return;
    }

    puts("Streaming...");

    uvc_set_ae_mode(devh, 1); /* e.g., turn on auto exposure */

}

/* This callback function runs once per frame. Use it to perform any
 * quick processing you need, or have it put the frame into your application's
 * input queue. If this function takes too long, you'll start losing frames. */
void UvcAcquisition::cb(uvc_frame_t *frame, void *ptr) {

    UvcAcquisition *_this = static_cast<UvcAcquisition*>(ptr);

    Q_ASSERT((int)frame->width == _this->m_format.frameWidth());
    Q_ASSERT((int)frame->height == _this->m_format.frameHeight());

#if PLANAR_BUFFER
    UvcPlanarBuffer *buffer = new UvcPlanarBuffer();
    uint32_t width[3] = { frame->width, frame->width / 2, frame->width / 2 };
    uint32_t height[3] = { frame->height, frame->height / 2, frame->height / 2 };
    uint32_t stride[3] = { frame->width, frame->width / 2, frame->width / 2 };

    buffer->setBackendBuffer((uchar*)frame->data, (int*)width, (int*)height, (int*)stride, 3);

    QVideoFrame qframe(buffer, QSize(frame->width, frame->height), QVideoFrame::Format_YUV420P);

#elif ACQ_RGB

//    QImage image((uchar*)frame->data, frame->width, frame->height, QImage::Format_RGB888);
//    QImage image("/Users/kurt/Desktop/uvc.png");
//    QVideoFrame qframe(image.convertToFormat(QImage::Format_ARGB32));

    QVideoFrame qframe(_this->m_format.frameWidth() * _this->m_format.frameHeight() * 4,
                       _this->m_format.frameSize(),
                       _this->m_format.frameWidth() * 4,
                       _this->m_format.pixelFormat());

    qframe.map(QAbstractVideoBuffer::WriteOnly);
    for (int i = 0; i < qframe.height(); i++)
    {
        uchar* rgb_line = &((uchar*)frame->data)[frame->step * i];
        uchar* rgba_line = &qframe.bits()[qframe.bytesPerLine() * i];

        for (int j = 0; j < qframe.width(); j++)
        {
            rgba_line[j * 4 + 0] = rgb_line[j * 3 + 0];
            rgba_line[j * 4 + 1] = rgb_line[j * 3 + 1];
            rgba_line[j * 4 + 2] = rgb_line[j * 3 + 2];
            rgba_line[j * 4 + 3] = 0;
        }
    }
    qframe.unmap();

#else
    UvcBuffer *buffer = new UvcBuffer();
    buffer->setBackendBuffer((uchar*)frame->data, frame->width, frame->height, frame->step, frame->data_bytes);
    QVideoFrame qframe(buffer, _this->m_format.frameSize(), _this->m_format.pixelFormat());
#endif

    _this->emitFrameReady(qframe);
}

void UvcAcquisition::emitFrameReady(const QVideoFrame &frame)
{
    emit frameReady(frame);
}
