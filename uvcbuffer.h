#ifndef UVCBUFFER_H
#define UVCBUFFER_H

#include <QAbstractVideoBuffer>
#include <QVideoSurfaceFormat>

class UvcBuffer : public QAbstractVideoBuffer
{
public:
    UvcBuffer(HandleType type = NoHandle);
    virtual ~UvcBuffer();

    virtual uchar* map(MapMode mode, int* numBytes, int* bytesPerLine);
    virtual MapMode mapMode() const;
    virtual void unmap();

    void setBackendBuffer(uchar* buffer, int frameWidth, int frameHeight, int stride, int numBytes);

private:
    uchar* _backendBuffer;
    int _width;
    int _height;
    int _stride;
    int _numBytes;
};

class UvcPlanarBuffer : public QAbstractPlanarVideoBuffer
{
public:
    UvcPlanarBuffer(HandleType type = NoHandle);
    virtual ~UvcPlanarBuffer();

    virtual int map(MapMode mode, int *numBytes, int bytesPerLine[4], uchar *data[4]);
    virtual MapMode mapMode() const;
    virtual void unmap();

    void setBackendBuffer(uchar* buffer, int width[], int height[], int stride[], int planes);

private:
    int _planes;
    int _numBytes;
    uchar* _backendBuffer[4];
    int _width[4];
    int _height[4];
    int _stride[4];
};

#endif // UVCBUFFER_H
