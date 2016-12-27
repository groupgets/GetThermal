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
        anchors.fill: parent
        title: qsTr("FLIR Boson")

        Grid {
            id: grid

            columns: 1
            rows: 8
            anchors.fill: parent
            spacing: 10
            flow: Grid.TopToBottom

            Label {
                text: qsTr("Sensor PN: ") + acq.cci.sensorPartNumber
            }

            Label {
                text: qsTr("Sensor SN: ") + acq.cci.sensorSerialNumber
            }

            Label {
                text: qsTr("Cam PN: ") + acq.cci.cameraPartNumber
            }

            Label {
                text: qsTr("Cam SN: ") + acq.cci.cameraSerialNumber
            }

            Label {
                text: qsTr("Software: ") + acq.cci.softwareRev
            }
        }
    }

}
