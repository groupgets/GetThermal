import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root

    width: parent.width
    height: (parent.width * acq.videoSize.height) / acq.videoSize.width

    property UvcAcquisition acq: null
    property var roi: null

    Rectangle {
        x: (roi.x * parent.width) / acq.videoSize.width
        y: (roi.y * parent.height) / acq.videoSize.height
        width: (roi.width * parent.width) / acq.videoSize.width
        height: (roi.height * parent.height) / acq.videoSize.height
        color: "#80ffffff"
        border.color: "#80000000"
    }
}
