QT += qml quick multimedia

QT_CONFIG -= no-pkg-config
CONFIG += c++11 \
          link_pkgconfig

SOURCES += \
    src/main.cpp \
    src/uvcvideoproducer.cpp \
    src/uvcacquisition.cpp \
    src/uvcbuffer.cpp \
    src/leptonvariation.cpp \
    src/abstractccinterface.cpp \
    lepton_sdk/Src/LEPTON_AGC.c \
    lepton_sdk/Src/LEPTON_OEM.c \
    lepton_sdk/Src/LEPTON_RAD.c \
    lepton_sdk/Src/LEPTON_SDK.c \
    lepton_sdk/Src/LEPTON_SYS.c \
    lepton_sdk/Src/LEPTON_VID.c \
    lepton_sdk/Src/crc16fast.c \
    src/dataformatter.cpp \
    src/rangeprovider.cpp

RESOURCES += qml/qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    inc/uvcvideoproducer.h \
    inc/uvcbuffer.h \
    inc/uvcacquisition.h \
    inc/leptonvariation.h \
    inc/abstractccinterface.h \
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
    inc/leptonvariation_types.h \
    inc/dataformatter.h \
    inc/rangeprovider.h

DISTFILES += \
    qml/qtquickcontrols2.conf

PKGCONFIG += libusb-1.0 opencv

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libuvc/build/release/ -luvc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libuvc/build/debug/ -luvc
else:unix: LIBS += -L$$PWD/libuvc/build/ -luvc

INCLUDEPATH += $$PWD/lepton_sdk/Inc \
               $$PWD/libuvc/build/include \
               $$PWD/libuvc/include \
               $$PWD/inc
DEPENDPATH += $$PWD/libuvc/build/include \
              $$PWD/libuvc/include

mac {
    # This is required to fixup homebrew libusb-1.0 installation
    # the pkgconfig file for this doesn't include cxxflags, so we need to pick this up
    INCLUDEPATH += /usr/local/include

    ICON = icons/macos.icns
}
