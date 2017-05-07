`GetThermal` is a cross-platform thermal camera viewer application, currently available for Linux and OS X.

![GetThermal screenshot](https://groupgets-files.s3.amazonaws.com/lepton/getthermal_app.png)

# Supported Cameras

GetThermal supports all FLIR Lepton variants used with the USB
[PureThermal 1 Smart I/O Module](https://groupgets.com/manufacturers/getlab/products/purethermal-1-flir-lepton-smart-i-o-module),
including the Radiometric Lepton 2.5

Preliminary support for FLIR Boson has been added and is under development.

# Building

Prerequisites: You will need `libusb-1.0` and [CMake](http://www.cmake.org/) installed. You will
also need [QT 5.7](https://www.qt.io/download-open-source/) or newer. On OS X, these packages should
be available via Homebrew.

`GetThermal` uses a modified version of `libuvc` for camera image download and control. Even if
you have `libuvc` on your system already, you will have to build the fork.

## Get the source code

    git clone https://github.com/groupgets/GetThermal
    cd GetThermal

## Configure submodules (first time only)

The first time you clone the code, you must run this:

    git submodule init

Then the first time, and on subsequent updates (`git pull`, etc.), to make sure dependencies are up-to-date:

    git submodule update

## Build GetThermal

GetThermal is a QT qmake project. So all you have to do now is fire up QTCreator, open the project file,
and hit run. You can also build from the command line:

    mkdir build && cd build
    qmake .. # or depending on your installation, maybe ~/Qt/5.7/clang_64/bin/qmake ..
    make

# Releases

This is a work in progress. See the Releases tab in github for OS X and Linux pre-release builds.
