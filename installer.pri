# -------------------------------------------------
# QGroundControl - Micro Air Vehicle Groundstation
# Please see our website at <http://qgroundcontrol.org>
# Maintainer:
# Lorenz Meier <lm@inf.ethz.ch>
# (c) 2009-2014 QGroundControl Developers
# License terms set in COPYING.md
# -------------------------------------------------

installer {
    DEFINES += QGC_INSTALL_RELEASE
    MacBuild {
        # We cd to release directory so we can run macdeployqt without a path to the
        # GetThermal.app file. If you specify a path to the .app file the symbolic
        # links to plugins will not be created correctly.
        QMAKE_POST_LINK += && mkdir -p $${DESTDIR}/package
        QMAKE_POST_LINK += && cd $${DESTDIR} && $$dirname(QMAKE_QMAKE)/macdeployqt GetThermal.app -appstore-compliant -verbose=2 -qmldir=$${BASEDIR}/qml
        QMAKE_POST_LINK += && cd $${OUT_PWD}
        QMAKE_POST_LINK += && hdiutil create -verbose -stretch 3g -layout SPUD -srcfolder $${DESTDIR}/GetThermal.app -volname GetThermal $${DESTDIR}/package/GetThermal.dmg
    }
    WindowsBuild {
        # The pdb moving command are commented out for now since we are including the .pdb in the installer. This makes it much
        # easier to debug user crashes.
        #QMAKE_POST_LINK += $$escape_expand(\\n) $$QMAKE_COPY $${DESTDIR_WIN}\\getthermal.pdb
        #QMAKE_POST_LINK += $$escape_expand(\\n) del $${DESTDIR_WIN}\\getthermal.pdb
        QMAKE_POST_LINK += $$escape_expand(\\n) cd $$BASEDIR_WIN && $$quote("\"C:\\Program Files \(x86\)\\NSIS\\makensis.exe\"" /NOCD "\"/XOutFile $${DESTDIR_WIN}\\GetThermal-installer.exe\"" "$$BASEDIR_WIN\\deploy\\getthermal_installer.nsi")
        #QMAKE_POST_LINK += $$escape_expand(\\n) $$QMAKE_COPY getthermal.pdb $${DESTDIR_WIN}
        #QMAKE_POST_LINK += $$escape_expand(\\n) del getthermal.pdb
        OTHER_FILES += deploy/qgroundcontrol_installer.nsi
    }
    LinuxBuild {
        #-- TODO: This uses hardcoded paths. It should use $${DESTDIR}
        QMAKE_POST_LINK += && mkdir -p release/package
        QMAKE_POST_LINK += && tar -cjf release/package/GetThermal.tar.bz2 release --exclude='package' --transform 's/release/getthermal/'
    }
    AndroidBuild {
        #-- TODO: This uses hardcoded paths. It should use $${DESTDIR}
        QMAKE_POST_LINK += && mkdir -p $${DESTDIR}/package
        QMAKE_POST_LINK += && make install INSTALL_ROOT=$${DESTDIR}/android-build/
        QMAKE_POST_LINK += && androiddeployqt --input android-libGetThermal.so-deployment-settings.json --output $${DESTDIR}/android-build --deployment bundled --gradle --sign $${BASEDIR}/android/android_release.keystore dagar --storepass $$(ANDROID_STOREPASS)
        QMAKE_POST_LINK += && cp $${DESTDIR}/android-build/build/outputs/apk/android-build-release-signed.apk $${DESTDIR}/package/GetThermal.apk
    }
}
