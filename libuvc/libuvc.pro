#-------------------------------------------------
#
# Project created by QtCreator 2016-06-17T14:04:36
#
#-------------------------------------------------

QT       -= core gui

TARGET = libuvc
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    ctrl-gen.c \
    ctrl.c \
    device.c \
    diag.c \
    frame-mjpeg.c \
    frame.c \
    init.c \
    misc.c \
    stream.c \
    test.c

HEADERS += \
    libuvc_internal.h \
    libuvc.h \
    utlist.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include

unix|win32: LIBS += -L/usr/local/lib -lusb-1.0
