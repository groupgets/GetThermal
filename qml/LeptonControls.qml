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
        title: qsTr("Lepton")

        Grid {
            id: grid

            columns: 1
            rows: 8
            anchors.fill: parent
            spacing: 10
            flow: Grid.TopToBottom

            Label {
                id: labelPartNumber
                text: qsTr("Part: ") + acq.cci.oemFlirPartNumber
            }

            Label {
                id: labelSerialNumber
                text: qsTr("Serial Number: ") + acq.cci.sysFlirSerialNumber
            }

            Label {
                id: labelGppSoftwareVers
                text: qsTr("GPP Version: ") + acq.cci.oemGppSoftwareVersion
            }

            Label {
                id: labelDspSoftwareVers
                text: qsTr("DSP Version: ") + acq.cci.oemDspSoftwareVersion
            }

            Label {
                id: labelPtFirwmareVers
                text: qsTr("PT1 FW Version: ") + acq.cci.ptFirmwareVersion
            }
        }


    }


}
