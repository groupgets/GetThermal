#!/bin/bash -x

set +e

if [[ $# -eq 0 ]]; then
	echo 'create_linux_appimage.sh GT_SRC_DIR GT_RELEASE_DIR'
	exit 1
fi

GT_SRC=$1
if [ ! -f ${GT_SRC}/GetThermal.pro ]; then
	echo 'please specify path to GetThermal source as the 1st argument'
	exit 1
fi

GT_RELEASE_DIR=$2
if [ ! -f ${GT_RELEASE_DIR}/GetThermal ]; then
	echo 'please specify path to GetThermal release as the 2nd argument'
	exit 1
fi

OUTPUT_DIR=${3-`pwd`}
echo "Output directory:" ${OUTPUT_DIR}

# Generate AppImage using the binaries currently provided by the project.
# These require at least GLIBC 2.14, which older distributions might not have. 
# On the other hand, 2.14 is not that recent so maybe we can just live with it.

APP=GetThermal

TMPDIR=`mktemp -d`
APPDIR=${TMPDIR}/$APP".AppDir"
mkdir -p ${APPDIR}

#cd ${TMPDIR}
#wget -c --quiet http://ftp.us.debian.org/debian/pool/main/u/udev/udev_175-7.2_amd64.deb

cd ${APPDIR}
find ../ -name *.deb -exec dpkg -x {} . \;

# copy libdirectfb-1.2.so.9
#cd ${TMPDIR}
#wget -c --quiet http://ftp.us.debian.org/debian/pool/main/d/directfb/libdirectfb-1.2-9_1.2.10.0-5.1_amd64.deb
#mkdir libdirectfb
#dpkg -x libdirectfb-1.2-9_1.2.10.0-5.1_amd64.deb libdirectfb
#cp -L libdirectfb/usr/lib/x86_64-linux-gnu/libdirectfb-1.2.so.9 ${APPDIR}/usr/lib/x86_64-linux-gnu/
#cp -L libdirectfb/usr/lib/x86_64-linux-gnu/libfusion-1.2.so.9 ${APPDIR}/usr/lib/x86_64-linux-gnu/
#cp -L libdirectfb/usr/lib/x86_64-linux-gnu/libdirect-1.2.so.9 ${APPDIR}/usr/lib/x86_64-linux-gnu/
#
## copy libts-0.0-0
#wget -c --quiet http://ftp.us.debian.org/debian/pool/main/t/tslib/libts-0.0-0_1.0-11_amd64.deb
#mkdir libts
#dpkg -x libts-0.0-0_1.0-11_amd64.deb libts
#cp -L libts/usr/lib/x86_64-linux-gnu/libts-0.0.so.0 ${APPDIR}/usr/lib/x86_64-linux-gnu/

# copy GetThermal release into appimage
cp -r ${GT_RELEASE_DIR}/* ${APPDIR}/
rm -rf ${APPDIR}/package
mv ${APPDIR}/getthermal-start.sh ${APPDIR}/AppRun

# copy icon
cp ${GT_SRC}/icons/getthermal.png ${APPDIR}/

# copy desktop file
cp ${GT_SRC}/deploy/getthermal.desktop ${APPDIR}/

#cat > ./getthermal.desktop <<\EOF
#[Desktop Entry]
#Type=Application
#Name=GetThermal
#GenericName=GetThermal
#Comment=Cross-platform USB thermal camera viewer
#Icon=getthermal
#Exec=GetThermal
#Terminal=false
#Categories=Utility;
#Keywords=computer;
#EOF

#VERSION=$(strings ${APPDIR}/GetThermal | grep '^v[0-9*]\.[0-9*].[0-9*]' | head -n 1)
pushd $GT_SRC
VERSION=$(git describe --always --tags)
popd
echo GT Version: ${VERSION}

# Go out of AppImage
cd ${TMPDIR}

wget -c "https://github.com/probonopd/linuxdeployqt/releases/download/continuous/linuxdeployqt-continuous-x86_64.AppImage"
chmod a+x linuxdeployqt*.AppImage

./linuxdeployqt*.AppImage ./$APP.AppDir/*.desktop -bundle-non-qt-libs
./linuxdeployqt*.AppImage ./$APP.AppDir/*.desktop -qmldir=${GT_SRC}/qml -appimage

cp ${TMPDIR}/${APP}*".AppImage" ${OUTPUT_DIR}/
