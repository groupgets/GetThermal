# GetThermal

[![Build Status](https://travis-ci.org/groupgets/GetThermal.svg?branch=master)](https://travis-ci.org/groupgets/GetThermal)

A cross-platform thermal camera viewer application.

![GetThermal screenshot](https://groupgets-files.s3.amazonaws.com/lepton/getthermal_app.png)

# Supported Platforms

Binaries are available for desktop Linux (x64) and Mac OS platforms; see the Releases tab on GitHub. The Wiki tab has 
instructions for building on Raspbian. Success has also been reported on NVIDIA Linux for Tegra. Ultimately, any
platform that runs QT 5.7+ and libusb should function with some effort.

# Supported Cameras

GetThermal supports all FLIR Lepton variants used with the USB
[PureThermal 1](https://groupgets.com/manufacturers/getlab/products/purethermal-1-flir-lepton-smart-i-o-module) or
[PureThermal 2](https://groupgets.com/manufacturers/getlab/products/purethermal-2-flir-lepton-smart-i-o-module) Smart I/O Modules,
including the Radiometric Lepton 2.5 and 3.5

It also supports basic thermal data acquisition from [FLIR Boson](https://groupgets.com/manufacturers/flir/products/boson) 320 and 640.

# Building

Prerequisites: You will need `libusb-1.0` and [CMake](http://www.cmake.org/) installed. You will
also need [QT 5.7](https://www.qt.io/download-open-source/) or newer. On OS X, these packages should
be available via Homebrew.

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

GetThermal is a QT qmake project. So all you should have to do now is to fire up QTCreator, open the project file,
and hit run. 

### OSx Qt-Creator build prerequisites
If Qt Creator fails to run the application due to errors with linking the proper ImageIO.framework or libjpeg version, go to Projects -> Run -> Run Environment and edit the DYLD_FRAMEWORK_PATH and DYLD_LIBRARY_PATH by adding

        /System/Library/Frameworks/ImageIO.framework/Resources:

to the beginning of the line.

### Via Command Line
You can also build from the command line:

    qmake # or depending on your installation, maybe ~/Qt/5.7/clang_64/bin/qmake 
    make

# Releases

This is a work in progress. See the Releases tab in github for OS X and Linux pre-release builds.
