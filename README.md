# GetThermal (this software no longer works)

> To capture from PureThermal boards in your own code, see the examples in
> [purethermal1-uvc-capture](https://github.com/groupgets/purethermal1-uvc-capture).

[![Build Status](https://travis-ci.org/groupgets/GetThermal.svg?branch=master)](https://travis-ci.org/groupgets/GetThermal)

A cross-platform thermal camera viewer application.

![GetThermal screenshot](https://groupgets-files.s3.amazonaws.com/lepton/getthermal_app.png)

# Supported Platforms

Binaries are available for desktop Linux (x64) and Mac OS platforms; see the Releases tab on GitHub. The Wiki tab has 
instructions for building on Raspbian. Success has also been reported on NVIDIA Linux for Tegra. Ultimately, any
platform that runs Qt 5 (5.7 or a later 5.x release) and libusb should function with some effort. Qt 6 is not supported.

# Supported Cameras

GetThermal supports all FLIR Lepton variants used with the USB
[PureThermal 1](https://groupgets.com/manufacturers/getlab/products/purethermal-1-flir-lepton-smart-i-o-module) or
[PureThermal 2](https://groupgets.com/manufacturers/getlab/products/purethermal-2-flir-lepton-smart-i-o-module) Smart I/O Modules,
including the Radiometric Lepton 2.5 and 3.5

It also supports basic thermal data acquisition from [FLIR Boson](https://groupgets.com/manufacturers/flir/products/boson) 320 and 640.

# Building

Prerequisites: You will need `libusb-1.0` and [CMake](http://www.cmake.org/) installed. You will
also need [Qt 5](https://www.qt.io/download-open-source/) (5.7 or a later 5.x release). Qt 6 is not
supported. On OS X, these packages should be available via Homebrew.

On Debian and Ubuntu, the QML modules GetThermal uses are separate packages:

    sudo apt install qml-module-qtmultimedia qml-module-qtquick-controls2 qml-module-qtquick-layouts

`GetThermal` uses a modified version of `libuvc` for camera image download and control. Even if
you have `libuvc` on your system already, you will have to build the fork.

## Get the source code

    git clone https://github.com/groupgets/GetThermal
    cd GetThermal

## Get libuvc and build

To build the `libuvc` fork, you can run these shell commands:

    git submodule init
    git submodule update
    pushd libuvc
    mkdir build
    cd build
    cmake ..
    make
    popd

## Build GetThermal

GetThermal is a Qt qmake project. So all you should have to do now is to fire up Qt Creator, open `GetThermal.pro`
with a Qt 5 kit, and hit run.

### OSx Qt-Creator build prerequisites
If Qt Creator fails to run the application due to errors with linking the proper ImageIO.framework or libjpeg version, go to Projects -> Run -> Run Environment and edit the DYLD_FRAMEWORK_PATH and DYLD_LIBRARY_PATH by adding

        /System/Library/Frameworks/ImageIO.framework/Resources:

to the beginning of the line.

### Via Command Line
You can also build from the command line. GetThermal requires a shadow build (a separate build directory):

    mkdir build
    cd build
    qmake ../GetThermal.pro   # or the full path to your Qt 5 qmake
    make

## Linux: camera access

If GetThermal reports `uvc_open: Access denied (-3)`, your user cannot open the camera's USB device.
Create `/etc/udev/rules.d/99-pt1.rules` containing:

    SUBSYSTEMS=="usb", ATTRS{idVendor}=="1e4e", ATTRS{idProduct}=="0100", MODE="0666"

Then run `sudo udevadm control --reload-rules` and replug the camera.

# Releases

This is a work in progress. See the Releases tab in github for OS X and Linux pre-release builds.

Important Note
============
GroupGets does not provide coding, firmware, or software support of any kind and will not respond to related requests. All software and firmware provided by GroupGets are offered solely as examples or potential starting points. These repositories may be outdated and are not guaranteed to function as intended.

We do not accept returns or offer replacements due to issues related to software, firmware, or code compatibility.

The software is provided "AS IS", without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose and non-infringement. In no event shall the authors or copyright holders be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.
