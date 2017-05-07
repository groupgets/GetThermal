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
    src/bosonvariation.cpp \
    boson_sdk/Client_API.c \
    boson_sdk/Client_Dispatcher.c \
    boson_sdk/Client_Packager.c \
    boson_sdk/Example.c \
    boson_sdk/Serializer_BuiltIn.c \
    boson_sdk/Serializer_Struct.c \
    boson_sdk/UART_Connector.c \
    boson_sdk/flirChannels.c \
    boson_sdk/flirCRC.c \
    boson_sdk/libusb_binary_protocol.c \
    libuvc/src/ctrl-gen.c \
    libuvc/src/ctrl.c \
    libuvc/src/device.c \
    libuvc/src/diag.c \
    libuvc/src/frame.c \
    libuvc/src/init.c \
    libuvc/src/misc.c \
    libuvc/src/stream.c \
    libusb/libusb/core.c \
    libusb/libusb/descriptor.c \
    libusb/libusb/hotplug.c \
    libusb/libusb/io.c \
    libusb/libusb/strerror.c \
    libusb/libusb/sync.c

#    libusb/libusb/os/haiku_pollfs.cpp \
#    libusb/libusb/os/haiku_usb_backend.cpp \
#    libusb/libusb/os/haiku_usb_raw.cpp \
#    libusb/libusb/os/netbsd_usb.c \
#    libusb/libusb/os/openbsd_usb.c \
#    libusb/libusb/os/sunos_usb.c \

unix: SOURCES += \
    libusb/libusb/os/threads_posix.c \
    libusb/libusb/os/poll_posix.c

win32: SOURCES += \
    libusb/msvc/missing.c \
    libusb/libusb/os/threads_windows.c \
    libusb/libusb/os/wince_usb.c \
    libusb/libusb/os/windows_nt_common.c \
    libusb/libusb/os/windows_usbdk.c \
    libusb/libusb/os/windows_winusb.c \
    libusb/libusb/os/poll_windows.c
else:macx: SOURCES += \
    libusb/libusb/os/darwin_usb.c
else:unix: SOURCES += \
    libusb/libusb/os/linux_udev.c \
    libusb/libusb/os/linux_usbfs.c

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
    inc/bosonvariation.h \
    boson_sdk/Client_API.h \
    boson_sdk/Client_Dispatcher.h \
    boson_sdk/Client_Packager.h \
    boson_sdk/EnumTypes.h \
    boson_sdk/FunctionCodes.h \
    boson_sdk/ReturnCodes.h \
    boson_sdk/Serializer_BuiltIn.h \
    boson_sdk/Serializer_Struct.h \
    boson_sdk/UART_Connector.h \
    boson_sdk/flirChannels.h \
    boson_sdk/flirCRC.h \
    inc/bosonvariation_types.h \
    libuvc/include/libuvc/libuvc.h \
    libuvc/include/libuvc/libuvc_config.h.in \
    libuvc/include/libuvc/libuvc_internal.h \
    libuvc/include/utlist.h \
    libuvc/src/time_mac.h \
    libusb/android/config.h \
    libusb/libusb/os/darwin_usb.h \
    libusb/libusb/os/haiku_usb.h \
    libusb/libusb/os/haiku_usb_raw.h \
    libusb/libusb/os/linux_usbfs.h \
    libusb/libusb/os/poll_posix.h \
    libusb/libusb/os/poll_windows.h \
    libusb/libusb/os/sunos_usb.h \
    libusb/libusb/os/threads_posix.h \
    libusb/libusb/os/threads_windows.h \
    libusb/libusb/os/wince_usb.h \
    libusb/libusb/os/windows_common.h \
    libusb/libusb/os/windows_nt_common.h \
    libusb/libusb/os/windows_usbdk.h \
    libusb/libusb/os/windows_winusb.h \
    libusb/libusb/hotplug.h \
    libusb/libusb/libusb.h \
    libusb/libusb/libusbi.h \
    libusb/libusb/version.h \
    libusb/libusb/version_nano.h \
    libusb/msvc/config.h \
    libusb/msvc/errno.h \
    libusb/msvc/inttypes.h \
    libusb/msvc/missing.h \
    libusb/msvc/stdint.h \
    inc/libusb-1.0/libusb.h \
    inc/libuvc/libuvc_config.h \
    inc/libusb-1.0/config.h

DISTFILES += \
    qml/qtquickcontrols2.conf

#PKGCONFIG += libusb-1.0
unix:!macx {
    PKGCONFIG += udev
    LIBS += -ludev
}

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libuvc/build/release/ -luvc
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libuvc/build/debug/ -luvc
#else:macx: LIBS += -L$$PWD/libuvc/build/ -luvc
#else:unix: LIBS += -L$$PWD/libuvc/build/ -luvcstatic

INCLUDEPATH += $$PWD/lepton_sdk/Inc \
               $$PWD/libuvc/include \
               $$PWD/libusb/libusb \
               $$PWD/inc/libusb-1.0 \
               $$PWD/inc

#DEPENDPATH += $$PWD/libuvc/build/include \
#              $$PWD/libuvc/include

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
