import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.5
import GetThermal 1.0
import "qrc:/lepton"
import "qrc:/controls"
import "qrc:/images"

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

        Pane {
            rightPadding: 12
            topPadding: 12
            bottomPadding: 12
            leftPadding: 12
            Layout.minimumWidth: 220
            Layout.fillHeight: true
            padding: 0

            Image {
                id: imageLogo
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.right: parent.right
                height: 50
                fillMode: Image.PreserveAspectFit
                source: "/images/images/brand-logo.png"
            }

            Page {
                anchors.top: imageLogo.bottom
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.bottom: parent.bottom
                clip: true

                header: TabBar {
                    id: tabBar
                    currentIndex: swipeView.currentIndex
                    TabButton {
                        text: qsTr("VID")
                    }
                    TabButton {
                        text: qsTr("AGC")
                        visible: typeof acq === "LeptonVariation"
                    }
                    TabButton {
                        text: qsTr("Info")
                        visible: typeof acq === "LeptonVariation"
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
                        visible: typeof acq === "LeptonVariation"
                    }


                    LeptonControls {
                        id: leptonControls1
                        anchors.bottom: parent.bottom
                        anchors.left: agcControls1.right
                        anchors.top: parent.top
                        acq: acq
                        visible: typeof acq === "LeptonVariation"
                    }
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
            width: 130
            Layout.minimumWidth: 130
            Layout.fillHeight: true
            visible: acq.cci.supportsRadiometry

            RangeDisplay {
                anchors.fill: parent
                acq: acq
            }
        }

    }

}
