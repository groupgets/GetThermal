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
            visible: acq.cci.supportsHwPseudoColor

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
            visible: !acq.cci.supportsHwPseudoColor

            model: ListModel {
                ListElement { text: "Iron Black"; data: DataFormatter.IronBlack }
                ListElement { text: "Rainbow"; data: DataFormatter.Rainbow }
                ListElement { text: "Grayscale"; data: DataFormatter.Grayscale }
            }
            textRole: qsTr("text")

            currentIndex: acq.dataFormatter.pseudocolorPalette
        }

        Switch {
            id: switchSbNuc
            text: qsTr("Scene-based NUC")
            width: parent.width
            checked: (acq.cci.vidSbNucEnableState == LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_ENABLE)
        }

        Button {
            id: buttonFfc
            text: qsTr("Perform AGC")
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

    Connections {
        target: comboVidPcolorLut
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.cci.vidPcolorLut = currentItem.data;
        }
    }

    Connections {
        target: comboSwPcolorLut
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.dataFormatter.pseudocolorPalette = currentItem.data;
        }
    }

    Connections {
        target: switchSbNuc
        onCheckedChanged: {
            acq.cci.vidSbNucEnableState = (target.checked ? LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_ENABLE : LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_DISABLE)
        }
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
