import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
    id: item1
    property alias button1: button1
    property alias text3: text3
    property alias text2: text2
    property alias text1: text1
    property alias frame1: frame1
    width: 200

    Grid {
        id: grid2
        rows: 3
        columns: 1
        anchors.fill: parent

        GroupBox {
            id: groupBox1
            anchors.top: parent.top
            anchors.topMargin: 5
            anchors.right: parent.right
            anchors.rightMargin: 5
            anchors.left: parent.left
            anchors.leftMargin: 5
            title: qsTr("Camera Info")

            Grid {
                id: grid1
                columns: 1
                rows: 8
                anchors.fill: parent
                spacing: 10
                flow: Grid.TopToBottom

                Text {
                    id: text1
                    text: qsTr("Text")
                    font.pixelSize: 12
                }

                Text {
                    id: text2
                    text: qsTr("Text")
                    font.pixelSize: 12
                }

                Text {
                    id: text3
                    text: qsTr("Text")
                    font.pixelSize: 12
                }
            }


        }

        Frame {
            id: frame1
            anchors.top: groupBox1.bottom
            anchors.topMargin: 5
            anchors.right: parent.right
            anchors.rightMargin: 5
            anchors.left: parent.left
            anchors.leftMargin: 5

            Button {
                id: button1
                text: qsTr("Perform AGC")
            }
        }
    }


}
