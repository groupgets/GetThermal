QT += qml quick multimedia

CONFIG += c++11

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
    lepton_sdk/Src/LEPTON_AGC.c \
    lepton_sdk/Src/LEPTON_I2C_Protocol.c \
    lepton_sdk/Src/LEPTON_I2C_Service.c \
    lepton_sdk/Src/LEPTON_OEM.c \
    lepton_sdk/Src/LEPTON_RAD.c \
    lepton_sdk/Src/LEPTON_SDK.c \
    lepton_sdk/Src/LEPTON_SYS.c \
    lepton_sdk/Src/LEPTON_VID.c \
    lepton_sdk/Src/crc16fast.c \
    lepton_sdk/Src/i2c_stubs.c

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
    lepton_sdk/Inc/LEPTON_AGC.h \
    lepton_sdk/Inc/LEPTON_ErrorCodes.h \
    lepton_sdk/Inc/LEPTON_I2C_Protocol.h \
    lepton_sdk/Inc/LEPTON_I2C_Reg.h \
    lepton_sdk/Inc/LEPTON_I2C_Service.h \
    lepton_sdk/Inc/LEPTON_Macros.h \
    lepton_sdk/Inc/LEPTON_OEM.h \
    lepton_sdk/Inc/LEPTON_RAD.h \
    lepton_sdk/Inc/LEPTON_SDK.h \
    lepton_sdk/Inc/LEPTON_SDKConfig.h \
    lepton_sdk/Inc/LEPTON_SYS.h \
    lepton_sdk/Inc/LEPTON_Types.h \
    lepton_sdk/Inc/LEPTON_VID.h \
    lepton_sdk/Inc/crc16.h

SUBDIRS += \
    libuvc/libuvc.pro

DISTFILES += \
    libuvc/ctrl-gen.py

INCLUDEPATH += $$PWD/lepton_sdk/Inc

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include
LIBS += -L/usr/local/lib

unix|win32: LIBS += -lusb-1.0 -ljpeg -lopencv_core
