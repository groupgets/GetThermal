#include "abstractccinterface.h"

AbstractCCInterface::AbstractCCInterface(QObject *parent)
    : QObject(parent)
{

}

AbstractCCInterface::AbstractCCInterface(const AbstractCCInterface &intf)
    : QObject(intf.parent())
{

}
