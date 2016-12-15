#ifndef RANGEPROVIDER_H
#define RANGEPROVIDER_H

#include <QQuickImageProvider>
#include "dataformatter.h"

class RangeProvider : public QQuickImageProvider
{
public:
    RangeProvider();
    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);

private:

    QPixmap m_pixmap;
};

#endif // RANGEPROVIDER_H
