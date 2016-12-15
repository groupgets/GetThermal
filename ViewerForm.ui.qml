import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.5
import GetThermal 1.0
import "qrc:/lepton"
import "qrc:/controls"

Item {
    id: item1
    anchors.fill: parent

    property alias acq: acq
    property alias player: player
    property alias videoOutput: videoOutput
    property alias leptonControls1: leptonControls1
    width: 640

    UvcAcquisition {
        id: acq
    }

    UvcVideoProducer {
        id: player
        uvc: acq
    }

    RowLayout {
        spacing: 0
        anchors.fill: parent


        Page {
            id: frame1
            width: 220
            Layout.minimumWidth: 220
            clip: true
            Layout.fillHeight: true

            header: TabBar {
                id: tabBar
                currentIndex: swipeView.currentIndex
                TabButton {
                    text: qsTr("VID")
                }
                TabButton {
                    text: qsTr("AGC")
                }
                TabButton {
                    text: qsTr("Info")
                }
            }

            SwipeView {
                id: swipeView
                x: 0
                y: 40
                currentIndex: tabBar.currentIndex
                anchors.fill: parent


                VidControls {
                    id: vidControls1
                    anchors.left: parent.left
                    anchors.bottom: parent.bottom
                    anchors.top: parent.top
                    acq: acq
                }

                AgcControls {
                    id: agcControls1
                    anchors.bottom: parent.bottom
                    anchors.left: vidControls1.right
                    anchors.top: parent.top
                    acq: acq
                }


                LeptonControls {
                    id: leptonControls1
                    anchors.bottom: parent.bottom
                    anchors.left: agcControls1.right
                    anchors.top: parent.top
                    acq: acq
                }
            }


        }

        Pane {
            x: 220
            width: 400
            bottomPadding: 5
            rightPadding: 5
            leftPadding: 5
            topPadding: 5
            Layout.fillWidth: true
            Layout.fillHeight: true
            VideoOutput {
                id: videoOutput
                anchors.fill: parent
                fillMode: VideoOutput.PreserveAspectFit
                source: player
            }
        }


        Pane {
            width: 160
            Layout.minimumWidth: 160
            Layout.fillHeight: true
            visible: acq.cci.supportsRadiometry

            RangeDisplay {
                anchors.fill: parent
                acq: acq
            }
        }
    }

}
