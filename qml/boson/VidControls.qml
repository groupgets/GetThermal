import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null

    Flow {
        id: flow1
        spacing: 5
        anchors.fill: parent
        anchors.margins: 5

        Label {
            id: labelPcolor
            width: parent.width
            text: qsTr("Pseudo-Color Palette:")
        }

        ComboBox {
            id: comboColorLutId
            width: parent.width
            visible: acq.cci.supportsHwPseudoColor

            model: ListModel {
                ListElement { text: "White Hot"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_WHITEHOT }
                ListElement { text: "Black Hot"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_BLACKHOT }
                ListElement { text: "Red Hot"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_REDHOT }
                ListElement { text: "Rainbow"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_RAINBOW }
                ListElement { text: "Ironbow"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_IRONBOW }
                ListElement { text: "Lava"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_LAVA }
                ListElement { text: "Arctic"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_ARCTIC }
                ListElement { text: "Globow"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_GLOBOW }
                ListElement { text: "Graded Fire"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_GRADEDFIRE }
                ListElement { text: "Instalert"; data: FLR_COLORLUT_ID_E.FLR_COLORLUT_INSTALERT }
            }
            textRole: qsTr("text")

            currentIndex: acq.cci.colorLutId
        }

        ComboBox {
            id: comboSwPcolorLut
            width: parent.width
            visible: !acq.cci.supportsHwPseudoColor

            model: ListModel {
                ListElement { text: "Iron Black"; data: DataFormatter.IronBlack }
                ListElement { text: "Rainbow"; data: DataFormatter.Rainbow }
                ListElement { text: "Grayscale"; data: DataFormatter.Grayscale }
            }
            textRole: qsTr("text")

            currentIndex: acq.dataFormatter.pseudocolorPalette
        }

        Button {
            id: buttonFfc
            text: qsTr("Perform FFC")
        }
    }


    Connections {
        target: comboColorLutId
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.cci.colorLutId = currentItem.data;
        }
    }

    Connections {
        target: comboSwPcolorLut
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.dataFormatter.pseudocolorPalette = currentItem.data;
        }
    }

    Connections {
        target: buttonFfc
        onClicked: {
            acq.cci.performFfc();
        }
    }
}
