import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root
    width: 300
    property UvcAcquisition acq: null

    Grid {
        id: grid

        columns: 1
        anchors.fill: parent
        spacing: 10
        flow: Grid.TopToBottom

        GroupBox {
            id: groupBox1
            clip: true

            width: parent.width
            title: qsTr("Lepton")

            Grid {
                id: grid2

                columns: 1
                spacing: 10
                flow: Grid.TopToBottom

                Label {
                    id: labelPartNumber
                    text: qsTr("Part: ") + acq.cci.oemFlirPartNumber
                }

                Label {
                    id: labelSerialNumber
                    text: qsTr("Serial: ") + acq.cci.sysFlirSerialNumber
                }

                Label {
                    id: labelGppSoftwareVers
                    text: qsTr("GPP Version: ") + acq.cci.oemGppSoftwareVersion
                }

                Label {
                    id: labelDspSoftwareVers
                    text: qsTr("DSP Version: ") + acq.cci.oemDspSoftwareVersion
                }
            }
        }

        GroupBox {
            id: groupBox2
            clip: true

            width: parent.width
            title: qsTr("PureThermal")

            Grid {
                id: grid3

                columns: 1
                spacing: 10
                flow: Grid.TopToBottom

                Label {
                    id: labelPtFirwmareVers
                    text: qsTr("Version: ") + acq.cci.ptFirmwareVersion
                }

                Label {
                    id: labelPtSerialNumber
                    text: qsTr("Serial: ") + acq.cci.ptSerialNumber
                    wrapMode: Text.WordWrap
                    ToolTip.text: text
                    ToolTip.visible: ma.containsMouse
                    MouseArea {
                        id: ma
                        anchors.fill: parent
                        hoverEnabled: true
                    }
                }
            }


        }
    }


}
