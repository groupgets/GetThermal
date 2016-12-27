#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QAbstractVideoSurface>
#include <QDebug>
#include <libuvc/libuvc.h>
#include "uvcvideoproducer.h"
#include "uvcacquisition.h"
#include "bosonvariation.h"
#include "leptonvariation.h"
#include "dataformatter.h"
#include "rangeprovider.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<UvcVideoProducer>("GetThermal", 1,0, "UvcVideoProducer");
    qmlRegisterType<UvcAcquisition>("GetThermal", 1,0, "UvcAcquisition");
    qmlRegisterUncreatableType<BosonVariation>("GetThermal", 1,0, "BosonVariation", "");
    qmlRegisterUncreatableType<LeptonVariation>("GetThermal", 1,0, "LeptonVariation", "");
    qmlRegisterUncreatableType<AbstractCCInterface>("GetThermal", 1,0, "AbstractCCInterface", "");
    qmlRegisterUncreatableType<DataFormatter>("GetThermal", 1,0, "DataFormatter", "");

    registerLeptonVariationQmlTypes();
    registerBosonVariationQmlTypes();

    QQmlApplicationEngine engine;
    engine.addImageProvider(QLatin1String("palettes"), new RangeProvider);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
