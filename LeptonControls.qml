import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null

    GroupBox {
        id: groupBox1
        clip: true

        anchors.margins: 5
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.left: parent.left
        title: qsTr("Lepton Serial Numbers")

        Grid {
            id: grid

            columns: 1
            rows: 8
            anchors.fill: parent
            spacing: 10
            flow: Grid.TopToBottom

            Label {
                id: label1
                text: acq.cci.sysFlirSerialNumber
            }

            Label {
                id: label2
                text: acq.cci.sysCustSerialNumber
            }
        }


    }

    GroupBox {
        id: frame2
        title: qsTr("Video")

        anchors.margins: 5
        anchors.top: groupBox1.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom

        Label {
            id: labelPcolor
            anchors.margins: 5
            anchors.top: parent.top
            text: qsTr("Pseudo-Color Palette:")
        }

        ComboBox {
            id: comboVidPcolorLut
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.margins: 5
            anchors.top: labelPcolor.bottom

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

        Switch {
            id: switchSbNuc
            text: qsTr("Scene-based NUC")
            anchors.left: parent.left
            anchors.top: comboVidPcolorLut.bottom
            checked: (acq.cci.vidSbNucEnableState == LEP_VID_SBNUC_ENABLE_E.LEP_VID_SBNUC_ENABLE)
        }

        Button {
            id: buttonFfc
            text: qsTr("Perform AGC")
            anchors.topMargin: 20
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.margins: 5
            anchors.top: switchSbNuc.bottom
        }

        BusyIndicator {
            id: busyFfc
            height: buttonFfc.height
            anchors.verticalCenter: buttonFfc.verticalCenter
            anchors.horizontalCenter: buttonFfc.horizontalCenter
            visible: false
            width: height
            anchors.margins: 5
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
