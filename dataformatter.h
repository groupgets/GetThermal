#ifndef DATAFORMATTER_H
#define DATAFORMATTER_H

#include <QObject>
#include <libuvc/libuvc.h>
#include <QVideoFrame>

class DataFormatter : QObject
{
    Q_OBJECT

public:

    DataFormatter();

    enum Palette {
        IronBlack,
        Rainbow,
        Grayscale,
    };
    Q_ENUMS(Palette)
    Q_PROPERTY(Palette pseudocolor_palette MEMBER m_pseudocolor_palette NOTIFY psuedocolorPaletteChanged)

    void FindMinMax(const uvc_frame_t *input, QPoint &minPoint, uint16_t &minVal, QPoint &maxPoint, uint16_t &maxVal) const;
    void AutoGain(uvc_frame_t *input_output) const;
    void FixedGain(uvc_frame_t *input_output, ushort minval, ushort maxval) const;
    void Colorize(const uvc_frame_t *input, QVideoFrame &output) const;

signals:

    void psuedocolorPaletteChanged(Palette val);

private:

    Palette m_pseudocolor_palette;
};

#endif // DATAFORMATTER_H
