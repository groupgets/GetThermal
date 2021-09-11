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

Prerequisites: You will need `libusb-1.0` and [libuvc](https://github.com/libuvc/libuvc) installed. You will
also need [QT 5.7](https://www.qt.io/download-open-source/) or newer. On MacOS these packages should
be available via Homebrew. On Debian-based systems you can find them in apt.

`GetThermal` no longer uses a modified version of `libuvc`.

## Get the source code

    git clone https://github.com/groupgets/GetThermal
    cd GetThermal

## Install build prerequisites

### Linux

    sudo apt install libusb-1.0-0-dev libuvc-dev

### MacOS

Note that Qt 5.x is required, and Qt 6.x (brew package `qt`) is not supported, and can interfere with the build. If you encounter problems building, uninstall package `qt`

    brew install qt@5 libusb

The Mac installation also requires building libuvc from source, since the homebrew version is out of date.

    git submodule update --init
    cd libuvc
    mkdir build
    cd build
    cmake ..
    make -j 8
    make install

## Build GetThermal

GetThermal is a QT qmake project. So all you should have to do now is to fire up QTCreator, open the project file,
and hit run.

### Via Command Line
You can also build from the command line:

    qmake # or depending on your installation, maybe ~/Qt/5.7/clang_64/bin/qmake 
    make

# Releases

This is a work in progress. See the Releases tab in github for OS X and Linux pre-release builds.
