import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.5
import GetThermal 1.0

Item {
    id: item1
    property alias button1: button1
    property alias button2: button2
    property alias videoOutput: videoOutput
    property alias player: player
    property alias acq: acq

    UvcAcquisition {
        id: acq
    }

    UvcVideoProducer {
        id: player
        videoFormat: acq.videoFormat
    }

    VideoOutput {
        id: videoOutput
        anchors.right: parent.right
        anchors.rightMargin: 8
        anchors.left: parent.left
        anchors.leftMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 54
        anchors.top: parent.top
        anchors.topMargin: 8
        fillMode: VideoOutput.PreserveAspectFit
        source: player
    }

    RowLayout {
        x: 217
        y: 220
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8

        Button {
            id: button1
            text: qsTr("Press Me 1")
        }

        Button {
            id: button2
            text: qsTr("Press Me 2")
        }
    }
}
