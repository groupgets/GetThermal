exists($${OUT_PWD}/GetThermal.pro) {
    error("You must use shadow build (e.g. mkdir build; cd build; qmake ../GetThermal.pro).")
}

message(Qt version $$[QT_VERSION])

!equals(QT_MAJOR_VERSION, 5) | !greaterThan(QT_MINOR_VERSION, 6) {
    error("Unsupported Qt version, 5.7+ is required")
}

include(common.pri)

DebugBuild {
    DESTDIR  = $${OUT_PWD}/debug
} else {
    DESTDIR  = $${OUT_PWD}/release
}

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
    src/rangeprovider.cpp \
    src/bosonvariation.cpp

RESOURCES += qml/qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

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
    inc/rangeprovider.h \
    inc/bosonvariation.h

DISTFILES += \
    qml/qtquickcontrols2.conf

PKGCONFIG += libusb-1.0

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libuvc/build/release/ -luvc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libuvc/build/debug/ -luvc
else:macos: LIBS += -L$$PWD/libuvc/build/ -luvc
else:unix: LIBS += -L$$PWD/libuvc/build/ -luvcstatic

INCLUDEPATH += $$PWD/lepton_sdk/Inc \
               $$PWD/libuvc/build/include \
               $$PWD/libuvc/include \
               $$PWD/inc
DEPENDPATH += $$PWD/libuvc/build/include \
              $$PWD/libuvc/include

MacBuild {
    QMAKE_INFO_PLIST    = Custom-Info.plist
    ICON                = $${BASEDIR}/icons/macos.icns
    OTHER_FILES        += Custom-Info.plist
equals(QT_MAJOR_VERSION, 5) | greaterThan(QT_MINOR_VERSION, 5) {
    LIBS               += -framework ApplicationServices
}
    # This is required to fixup homebrew libusb-1.0 installation
    # the pkgconfig file for this doesn't include cxxflags, so we need to pick this up
    INCLUDEPATH += /usr/local/include
}

# post-link configuration
include(setup.pri)

# installer scripts
include(installer.pri)
