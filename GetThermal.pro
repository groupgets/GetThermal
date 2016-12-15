QT += qml quick multimedia

QT_CONFIG -= no-pkg-config
CONFIG += c++11
CONFIG += link_pkgconfig

SOURCES += main.cpp \
    uvcvideoproducer.cpp \
    libuvc/ctrl-gen.c \
    libuvc/ctrl.c \
    libuvc/device.c \
    libuvc/diag.c \
    libuvc/frame-mjpeg.c \
    libuvc/frame.c \
    libuvc/init.c \
    libuvc/misc.c \
    libuvc/stream.c \
    uvcacquisition.cpp \
    uvcbuffer.cpp \
    leptonvariation.cpp \
    abstractccinterface.cpp \
    lepton_sdk/Src/LEPTON_AGC.c \
    lepton_sdk/Src/LEPTON_OEM.c \
    lepton_sdk/Src/LEPTON_RAD.c \
    lepton_sdk/Src/LEPTON_SDK.c \
    lepton_sdk/Src/LEPTON_SYS.c \
    lepton_sdk/Src/LEPTON_VID.c \
    lepton_sdk/Src/crc16fast.c \
    dataformatter.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    uvcvideoproducer.h \
    libuvc/libuvc.h \
    libuvc/libuvc_internal.h \
    libuvc/utlist.h \
    uvcbuffer.h \
    uvcacquisition.h \
    leptonvariation.h \
    abstractccinterface.h \
    lepton_sdk/Inc/LEPTON_AGC.h \
    lepton_sdk/Inc/LEPTON_ErrorCodes.h \
    lepton_sdk/Inc/LEPTON_Macros.h \
    lepton_sdk/Inc/LEPTON_OEM.h \
    lepton_sdk/Inc/LEPTON_RAD.h \
    lepton_sdk/Inc/LEPTON_SDK.h \
    lepton_sdk/Inc/LEPTON_SDKConfig.h \
    lepton_sdk/Inc/LEPTON_SYS.h \
    lepton_sdk/Inc/LEPTON_Types.h \
    lepton_sdk/Inc/LEPTON_VID.h \
    lepton_sdk/Inc/crc16.h \
    lepton_sdk/Inc/uvc_sdk.h \
    leptonvariation_types.h \
    dataformatter.h

SUBDIRS += \
    libuvc/libuvc.pro

DISTFILES += \
    libuvc/ctrl-gen.py \
    qtquickcontrols2.conf

INCLUDEPATH += $$PWD/lepton_sdk/Inc

mac {
    INCLUDEPATH += /usr/local/include
    LIBS += -L/usr/local/lib
}

PKGCONFIG += libusb-1.0 opencv
LIBS += -ljpeg

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7
