import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import "qrc:/boson"

Page {
    id: root
    clip: true

    width: 220
    height: 480

    property UvcAcquisition acq: null

    header: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

        TabButton {
            text: qsTr("Vid")
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
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.top: parent.top
            acq: root.acq
        }

        InfoControls {
            id: infoControls1
            anchors.bottom: parent.bottom
            anchors.left: vidControls1.right
            anchors.top: parent.top
            acq: root.acq
        }
    }

}
