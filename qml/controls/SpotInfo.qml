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
    height: 60

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

    GroupBox {
        id: groupBox
        anchors.fill: parent
        title: qsTr("Spot Temp")

        Label {
            id: labelSpot
            x: -89
            y: -14
            text: localtemp(acq.cci.radSpotmeterInKelvinX100)
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }
    }
}
