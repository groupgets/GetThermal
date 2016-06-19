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
    uvcbuffer.cpp

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
    uvcacquisition.h \
    uvcbuffer.h

SUBDIRS += \
    libuvc/libuvc.pro

DISTFILES += \
    libuvc/ctrl-gen.py

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include
LIBS += -L/usr/local/lib

unix|win32: LIBS += -lusb-1.0 -ljpeg -lopencv_core
