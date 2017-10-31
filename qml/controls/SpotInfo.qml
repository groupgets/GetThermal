import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import QtQml 2.2

Item {
    id: item1

    property UvcAcquisition acq: null
    property bool farenheitTemps: false
    property bool radiometryLowGain: acq.cci.radTLinearResolution == LEP_RAD_TLINEAR_RESOLUTION_E.LEP_RAD_RESOLUTION_0_1
    width: 300
    height: 150


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

    Column {
        id: column
        anchors.fill: parent

        GroupBox {
            id: groupBox
            anchors.right: parent.right
            anchors.left: parent.left
            title: qsTr("Spot Temp")

            Label {
                id: labelSpot
                text: localtemp(acq.cci.radSpotmeterInKelvinX100)
                anchors.horizontalCenter: parent.horizontalCenter
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }
        }

        GroupBox {
            id: groupBox2
            anchors.right: parent.right
            anchors.left: parent.left
            title: qsTr("Camera Temp")

            Column {
                id: column1
                anchors.fill: parent

                Label {
                    id: labelAux
                    text: localtemp(acq.cci.sysAuxTemperatureKelvin)
                    anchors.horizontalCenter: parent.horizontalCenter
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                }

                Label {
                    id: labelFpa
                    text: localtemp(acq.cci.sysFpaTemperatureKelvin)
                    anchors.horizontalCenter: parent.horizontalCenter
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                }
            }
        }
    }
}
