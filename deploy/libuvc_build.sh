#!/bin/sh

LIBUVC_PREFIX=${LIBUVC_PREFIX:-/usr}

mkdir -p libuvc/build
cd libuvc/build
cmake -DCMAKE_BUILD_TARGET=Shared -DCMAKE_INSTALL_PREFIX=$LIBUVC_PREFIX -DCMAKE_INSTALL_NAME_DIR=$LIBUVC_PREFIX/lib ..
make
sudo make install
cd ../..
