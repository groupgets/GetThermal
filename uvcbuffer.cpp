#include "uvcbuffer.h"

UvcBuffer::UvcBuffer(HandleType type)
    : QAbstractVideoBuffer(type)
{
}

UvcBuffer::~UvcBuffer()
{
}

uchar* UvcBuffer::map(MapMode mode, int* numBytes, int* bytesPerLine)
{
    if (numBytes != NULL)
        *numBytes = _numBytes;

    if (bytesPerLine != NULL)
        *bytesPerLine = _stride;

    return (uchar*)_backendBuffer;
}

QAbstractVideoBuffer::MapMode UvcBuffer::mapMode() const
{
    return ReadOnly;
}

void UvcBuffer::unmap()
{
}

void UvcBuffer::setBackendBuffer(uchar* buffer, int width, int height, int stride, int numBytes)
{
    _backendBuffer = buffer;
    _width = width;
    _height = height;
    _stride = stride;
    _numBytes = numBytes;
}

UvcPlanarBuffer::UvcPlanarBuffer(HandleType type)
    : QAbstractPlanarVideoBuffer(type)
{
}

UvcPlanarBuffer::~UvcPlanarBuffer()
{
}

int UvcPlanarBuffer::map(MapMode mode, int *numBytes, int bytesPerLine[4], uchar *data[4])
{
    if (numBytes != NULL)
        *numBytes = _numBytes;

    if (bytesPerLine != NULL)
        memcpy(bytesPerLine, _stride, _planes * sizeof(int));

    if (data != NULL)
        memcpy(data, _backendBuffer, _planes * sizeof(int));

    return _planes;
}

QAbstractVideoBuffer::MapMode UvcPlanarBuffer::mapMode() const
{
    return ReadOnly;
}

void UvcPlanarBuffer::unmap()
{
}

void UvcPlanarBuffer::setBackendBuffer(uchar* buffer, int width[], int height[], int stride[], int planes)
{
    int numBytes = 0;
    for (int i = 0; i < planes; i++)
    {
        _backendBuffer[i] = buffer;
        for (int j = 0; j < i; j++)
        {
            _backendBuffer[i] += _stride[j] * _height[j];
        }
        _width[i] = width[i];
        _height[i] = height[i];
        _stride[i] = stride[i];
        numBytes += _stride[i] * _height[i];
    }
    _planes = planes;
    _numBytes = numBytes;
}
