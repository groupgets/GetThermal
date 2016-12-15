#include "rangeprovider.h"

#include <QPainter>

RangeProvider::RangeProvider()
        : QQuickImageProvider(QQuickImageProvider::Pixmap)
{
}

QPixmap RangeProvider::requestPixmap(const QString &id, QSize *size, const QSize &requestedSize)
{
    int width = 1;
    int height = 255;

    DataFormatter::Palette e_palette = (DataFormatter::Palette)id.toUInt();
    const colormap_t* colormap = DataFormatter::getPalette(e_palette);

    width = requestedSize.width() > 0 ? requestedSize.width() : width;
    height = requestedSize.height() > 0 ? requestedSize.height() : height;

    if (size)
        *size = QSize(width, height);

    if (m_pixmap.size() != *size)
    {
        m_pixmap = QPixmap(width, height);
    }

    QPainter painter(&m_pixmap);

    for (int i = 0; i < m_pixmap.height(); i++)
    {
        const uint8_t *rgb = &colormap->colormap[i * 3];
        painter.setPen(QColor(rgb[0], rgb[1], rgb[2]));
        painter.drawPoint(0, m_pixmap.height() - i - 1);
    }

    return m_pixmap;
}
