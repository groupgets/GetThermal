import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: item1

    property UvcAcquisition acq: null
    width: 160

    Image {
        id: image1
        width: 52
        anchors.left: parent.left
        anchors.leftMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.top: parent.top
        anchors.topMargin: 8
        source: "image://palettes/" + acq.dataFormatter.pseudocolorPalette;
    }

    Column {
        id: column1
        anchors.left: image1.right
        anchors.leftMargin: 8
        anchors.right: parent.right
        anchors.rightMargin: 8
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.top: parent.top
        anchors.topMargin: 8
    }

}
