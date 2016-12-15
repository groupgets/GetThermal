#ifndef DATAFORMATTER_H
#define DATAFORMATTER_H

#include <QObject>
#include <libuvc/libuvc.h>
#include <QVideoFrame>

typedef struct { const uint8_t colormap[256 * 3]; } colormap_t;

class DataFormatter : public QObject
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
    Q_PROPERTY(Palette pseudocolorPalette MEMBER m_pseudocolor_palette NOTIFY psuedocolorPaletteChanged)

    void FindMinMax(const uvc_frame_t *input, QPoint &minPoint, uint16_t &minVal, QPoint &maxPoint, uint16_t &maxVal) const;
    void AutoGain(uvc_frame_t *input_output);
    void FixedGain(uvc_frame_t *input_output, ushort minval, ushort maxval);
    void Colorize(const uvc_frame_t *input, QVideoFrame &output) const;

    static const colormap_t* getPalette(Palette palette);

    Q_PROPERTY(ushort minVal READ getMinVal NOTIFY minValChanged)
    ushort getMinVal() const { return m_minVal; }

    Q_PROPERTY(ushort maxVal READ getMaxVal NOTIFY maxValChanged)
    ushort getMaxVal() const { return m_maxVal; }

signals:

    void psuedocolorPaletteChanged(Palette val);
    void minValChanged(ushort val);
    void maxValChanged(ushort val);

private:

    Palette m_pseudocolor_palette;
    ushort m_minVal, m_maxVal;
};

#endif // DATAFORMATTER_H
