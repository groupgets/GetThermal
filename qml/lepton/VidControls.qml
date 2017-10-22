import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null
    anchors.margins: 5

    Flow {
        id: flow1
        spacing: 5
        anchors.fill: parent
        anchors.margins: 5

        Label {
            id: labelPcolor
            width: parent.width
            text: qsTr("Pseudo-Color Palette:")
        }

        ComboBox {
            id: comboVidPcolorLut
            width: parent.width
            visible: acq.cci.supportsHwPseudoColor && !acq.cci.supportsRadiometry

            model: ListModel {
                ListElement { text: "Wheel"; data: LEP_PCOLOR_LUT_E.LEP_VID_WHEEL6_LUT }
                ListElement { text: "Fusion"; data: LEP_PCOLOR_LUT_E.LEP_VID_FUSION_LUT }
                ListElement { text: "Rainbow"; data: LEP_PCOLOR_LUT_E.LEP_VID_RAINBOW_LUT }
                ListElement { text: "Glowbow"; data: LEP_PCOLOR_LUT_E.LEP_VID_GLOBOW_LUT }
                ListElement { text: "Sepia"; data: LEP_PCOLOR_LUT_E.LEP_VID_SEPIA_LUT }
                ListElement { text: "Color"; data: LEP_PCOLOR_LUT_E.LEP_VID_COLOR_LUT }
                ListElement { text: "Ice & Fire"; data: LEP_PCOLOR_LUT_E.LEP_VID_ICE_FIRE_LUT }
                ListElement { text: "Rain"; data: LEP_PCOLOR_LUT_E.LEP_VID_RAIN_LUT }
                ListElement { text: "User"; data: LEP_PCOLOR_LUT_E.LEP_VID_USER_LUT }
            }
            textRole: qsTr("text")

            currentIndex: acq.cci.vidPcolorLut
        }

        ComboBox {
            id: comboSwPcolorLut
            width: parent.width
            visible: !acq.cci.supportsHwPseudoColor || acq.cci.supportsRadiometry

            model: ListModel {
                ListElement { text: "Iron Black"; data: DataFormatter.IronBlack }
                ListElement { text: "Rainbow"; data: DataFormatter.Rainbow }
                ListElement { text: "Grayscale"; data: DataFormatter.Grayscale }
            }
            textRole: qsTr("text")

            currentIndex: acq.dataFormatter.pseudocolorPalette
        }

        Label {
            id: labelRadGain
            width: parent.width
            visible: acq.cci.supportsRadiometry
            text: qsTr("Radiometry TLinear Resolution:")
        }

        ComboBox {
            id: comboRadTLinearResolution
            width: parent.width
            visible: acq.cci.supportsRadiometry

            model: ListModel {
                ListElement { text: "Low (0.1K)"; data: LEP_RAD_TLINEAR_RESOLUTION_E.LEP_RAD_RESOLUTION_0_1 }
                ListElement { text: "High (0.01K)"; data: LEP_RAD_TLINEAR_RESOLUTION_E.LEP_RAD_RESOLUTION_0_01 }
            }
            textRole: qsTr("text")

            currentIndex: acq.cci.radTLinearResolution
        }

        Label {
            id: labelGainMode
            width: parent.width
            text: qsTr("Gain state:")
        }

        ComboBox {
            id: comboSysGainMode
            width: parent.width

            model: ListModel {
                ListElement { text: "High"; data: LEP_SYS_GAIN_MODE_E.LEP_SYS_GAIN_MODE_HIGH }
                ListElement { text: "Low"; data: LEP_SYS_GAIN_MODE_E.LEP_SYS_GAIN_MODE_LOW }
                ListElement { text: "Auto"; data: LEP_SYS_GAIN_MODE_E.LEP_SYS_GAIN_MODE_AUTO }
            }
            textRole: qsTr("text")

            currentIndex: acq.cci.sysGainMode
        }

        Switch {
            id: switchSbNuc
            text: qsTr("Scene-based NUC")
            width: parent.width
            checked: (acq.cci.vidSbNucEnableState == LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_ENABLE)
        }

        Button {
            id: buttonFfc
            text: qsTr("Perform FFC")
        }

        BusyIndicator {
            id: busyFfc
            height: buttonFfc.height
            anchors.verticalCenter: buttonFfc.verticalCenter
            anchors.horizontalCenter: buttonFfc.horizontalCenter
            visible: false
            width: height
        }
    }

    Binding {
        target: acq.cci
        property: "vidPcolorLut"
        value: comboVidPcolorLut.model.get(comboVidPcolorLut.currentIndex).data
    }

    Binding {
        target: acq.dataFormatter
        property: "pseudocolorPalette"
        value: comboSwPcolorLut.model.get(comboSwPcolorLut.currentIndex).data
    }

    Binding {
        target: acq.cci
        property: "vidSbNucEnableState"
        value: switchSbNuc.checked ? LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_ENABLE : LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_DISABLE
    }

    Binding {
        target: acq.cci
        property: "radTLinearResolution"
        value: comboRadTLinearResolution.model.get(comboRadTLinearResolution.currentIndex).data
    }

    Binding {
        target: acq.cci
        property: "sysGainMode"
        value: comboSysGainMode.model.get(comboSysGainMode.currentIndex).data
    }

    function delay(delayTime, cb) {
        function Timer() {
            return Qt.createQmlObject("import QtQuick 2.0; Timer {}", root);
        }
        var timer = new Timer();
        timer.interval = delayTime;
        timer.repeat = false;
        timer.triggered.connect(cb);
        timer.start();
    }

    Connections {
        target: buttonFfc
        onClicked: {
            busyFfc.visible = true;
            acq.pauseStream();
            delay(150, function(){
                acq.cci.performFfc();
                delay(1500, function() {
                    acq.resumeStream();
                    busyFfc.visible = false;
                });
            });
        }
    }
}
