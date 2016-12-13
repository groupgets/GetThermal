#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QAbstractVideoSurface>
#include <QDebug>
#include <libuvc/libuvc.h>
#include "uvcvideoproducer.h"
#include "uvcacquisition.h"
#include "leptonvariation.h"
#include "dataformatter.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<UvcVideoProducer>("GetThermal", 1,0, "UvcVideoProducer");
    qmlRegisterType<UvcAcquisition>("GetThermal", 1,0, "UvcAcquisition");
    qmlRegisterUncreatableType<LeptonVariation>("GetThermal", 1,0, "LeptonVariation", "");
    qmlRegisterUncreatableType<AbstractCCInterface>("GetThermal", 1,0, "AbstractCCInterface", "");
    qmlRegisterUncreatableType<DataFormatter>("GetThermal", 1,0, "DataFormatter", "");

    registerLeptonVariationQmlTypes();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
