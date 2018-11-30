import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root

    anchors.fill: parent

    property UvcAcquisition acq: null
    property rect roi: acq && acq.cci ? acq.cci.radSpotmeterRoi : Qt.rect(0, 0, 80, 60)
    property size videoSize: acq ? acq.videoSize : Qt.size(80, 60)

    function moveUnscaledRoiTo(dispX, dispY) {
        var nx = Math.floor(dispX * (videoSize.width / scaledvid.width))
        var ny = Math.floor(dispY * (videoSize.height / scaledvid.height))
        if (roi.x === nx && roi.y === ny) {
            return
        }
        acq.cci.radSpotmeterRoi = Qt.rect(nx, ny, roi.width, roi.height)
    }

    Item {
        id: scaledvid

        width: root.width
        height: (root.width * videoSize.height) / videoSize.width
        anchors.centerIn: root

        MouseArea {
            cursorShape: Qt.CrossCursor
            anchors.fill: parent
            onClicked: {
                moveUnscaledRoiTo(mouse.x, mouse.y)
            }
        }

        Rectangle {
            id: roidisp

            x: roi.x * (scaledvid.width / videoSize.width)
            y: roi.y * (scaledvid.height / videoSize.height)
            width: roi.width * (scaledvid.width / videoSize.width)
            height: roi.height * (scaledvid.height / videoSize.height)

            color: "#80ffffff"
            border.color: "#80000000"

            MouseArea {
                cursorShape: drag.active ? Qt.ClosedHandCursor : Qt.OpenHandCursor
                anchors.fill: parent
                drag.target: roidisp
                drag.axis: Drag.XAndYAxis
                drag.smoothed: false
                drag.threshold: 1
                onPositionChanged: {
                    moveUnscaledRoiTo(roidisp.x, roidisp.y)
                }
            }
        }
    }
}
