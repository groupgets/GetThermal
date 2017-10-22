import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import QtQml 2.2

Item {
    id: item1

    property UvcAcquisition acq: null
    property bool farenheitTemps: false
    property bool radiometryLowGain: acq.cci.radTLinearResolution == LEP_RAD_TLINEAR_RESOLUTION_E.LEP_RAD_RESOLUTION_0_1

    width: 160

    function ktof(val) {
      return (1.8 * ktoc(val) + 32.0);
    }

    function ktoc(val) {
        if (radiometryLowGain) {
            return (val - 2731.5) / 10.0;
        } else {
            return (val - 27315) / 100.0;
        }
    }

    function localtemp(k) {
        if (farenheitTemps) {
            return "" + ktof(k).toFixed(1) + "°F";
        }
        else {
            return "" + ktoc(k).toFixed(2) + "°C";
        }
    }

    Image {
        id: image1
        width: 25
        anchors.left: parent.left
        anchors.leftMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.top: parent.top
        anchors.topMargin: 8
        source: "image://palettes/" + acq.dataFormatter.pseudocolorPalette;
    }

    Item {
        anchors.left: image1.right
        anchors.leftMargin: 8
        anchors.right: parent.right
        anchors.rightMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.top: parent.top
        anchors.topMargin: 8

        Label {
            id: labelMax
            text: localtemp(acq.dataFormatter.maxVal)
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.top: parent.top
            anchors.topMargin: 0
        }

        Label {
            id: labelMid
            text: localtemp(acq.dataFormatter.minVal + (acq.dataFormatter.maxVal - acq.dataFormatter.minVal) / 2)
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: 0
        }

        Label {
            id: labelMin
            text: localtemp(acq.dataFormatter.minVal)
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0
        }

        MouseArea {
            anchors.fill: parent
            onClicked: farenheitTemps = !farenheitTemps
        }
    }

}
