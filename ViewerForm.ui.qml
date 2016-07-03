import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.5
import GetThermal 1.0
import "qrc:/lepton"

Item {
    id: item1
    anchors.fill: parent

    property alias acq: acq
    property alias player: player
    property alias videoOutput: videoOutput
    property alias leptonControls1: leptonControls1

    UvcAcquisition {
        id: acq
    }

    UvcVideoProducer {
        id: player
        uvc: acq
    }

    RowLayout {
        anchors.fill: parent

        Page {
            id: frame1
            width: 200
            clip: true
            Layout.fillHeight: true

            header: TabBar {
                id: tabBar
                currentIndex: swipeView.currentIndex
                TabButton {
                    text: qsTr("Camera")
                }
                TabButton {
                    text: qsTr("AGC")
                }
            }

            SwipeView {
                id: swipeView
                currentIndex: tabBar.currentIndex
                anchors.fill: parent

                LeptonControls {
                    id: leptonControls1
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    acq: acq
                }

                AgcControls {
                    id: agcControls1
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 0
                    anchors.left: leptonControls1.right
                    anchors.leftMargin: 0
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    acq: acq
                }
            }

        }

        Pane {
            width: 400
            Layout.fillWidth: true
            Layout.fillHeight: true
            VideoOutput {
                id: videoOutput
                anchors.fill: parent
                fillMode: VideoOutput.PreserveAspectFit
                source: player
            }
        }

    }

}
