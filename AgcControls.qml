import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import "qrc:/controls"

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null
    anchors.margins: 5

    Flow {
        id: flow1
        spacing: 5
        anchors.fill: parent
        anchors.margins: 5

        CheckBox {
            id: checkAgcEnable
            height: 30
            text: "AGC Enable"
            checked: (acq.cci.agcEnable == LEP_AGC_ENABLE_E.LEP_AGC_ENABLE)
        }


        CheckBox {
            id: checkAgcCalcEnable
            height: 30
            text: qsTr("AGC Calc Enable")
            checked: (acq.cci.agcCalcEnable == LEP_AGC_ENABLE_E.LEP_AGC_ENABLE)
        }


        Label {
            id: labelAgcPolicy
            height: comboAgcPolicy.height
            text: qsTr("Policy")
            verticalAlignment: Text.AlignVCenter
        }

        ComboBox {
            id: comboAgcPolicy
            width: parent.width - labelAgcPolicy.width - 5
            height: 30

            model: ListModel {
                ListElement { text: "Linear"; data: LEP_AGC_POLICY_E.LEP_AGC_LINEAR }
                ListElement { text: "Histogram Eql"; data: LEP_AGC_POLICY_E.LEP_AGC_HEQ }
            }
            textRole: qsTr("text")

            currentIndex: acq.cci.agcPolicy
        }



        SwipeView {
            id: swipeView
            currentIndex: comboAgcPolicy.currentIndex
            width: parent.width
            height: parent.height - y
            clip: true

            Pane {
                id: frameAgcLinear
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 0

                ValueSlider {
                    id: linearHistogramTailSize
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    description: qsTr("Histogram tail size (pixels)")
                    minimumValue: 0
                    maximumValue: (80*60)
                    model: acq.cci
                    binding: "agcLinearHistogramTailSize"
                }

                ValueSlider {
                    id: linearHistogramClipPercent
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: linearHistogramTailSize.bottom
                    anchors.topMargin: 0
                    description: qsTr("Histogram Clip Percent")
                    minimumValue: 0
                    maximumValue: 100
                    model: acq.cci
                    binding: "agcLinearHistogramClipPercent"
                }

                ValueSlider {
                    id: linearMaxGain
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: linearHistogramClipPercent.bottom
                    anchors.topMargin: 0
                    description: qsTr("Max Gain")
                    minimumValue: 1
                    maximumValue: 4
                    model: acq.cci
                    binding: "agcLinearMaxGain"
                }

                ValueSlider {
                    id: linearMidPoint
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: linearMaxGain.bottom
                    anchors.topMargin: 0
                    description: qsTr("Midpoint")
                    maximumValue: 256
                    minimumValue: 1
                    model: acq.cci
                    binding: "agcLinearMidPoint"
                }

                ValueSlider {
                    id: linearDampeningFactor
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    anchors.top: linearMidPoint.bottom
                    anchors.topMargin: 0
                    description: qsTr("Dampening Factor")
                    maximumValue: 100
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcLinearDampeningFactor"
                }
            }

            Pane {
                id: frameAgcHist
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.left: frameAgcLinear.right
                anchors.leftMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 0

                ComboBox {
                    id: comboAgcHeqScaleFactor

                    model: ListModel {
                        ListElement { text: "8-bits"; data: LEP_AGC_HEQ_SCALE_FACTOR_E.LEP_AGC_SCALE_TO_8_BITS }
                        ListElement { text: "14-bits"; data: LEP_AGC_HEQ_SCALE_FACTOR_E.LEP_AGC_SCALE_TO_14_BITS }
                    }
                    textRole: qsTr("text")

                    currentIndex: acq.cci.agcHeqScaleFactor
                }
            }
        }


    }

    Connections {
        target: checkAgcEnable
        onCheckedChanged: {
            var newValue = (target.checked ? LEP_AGC_ENABLE_E.LEP_AGC_ENABLE : LEP_AGC_ENABLE_E.LEP_AGC_DISABLE);
            acq.cci.agcEnable = newValue;
        }
    }

    Connections {
        target: checkAgcCalcEnable
        onCheckedChanged: {
            var newValue = (target.checked ? LEP_AGC_ENABLE_E.LEP_AGC_ENABLE : LEP_AGC_ENABLE_E.LEP_AGC_DISABLE);
            acq.cci.agcCalcEnable = newValue;
        }
    }

    Connections {
        target: comboAgcPolicy
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.cci.agcPolicy = currentItem.data;
        }
    }

    Connections {
        target: comboAgcHeqScaleFactor
        onCurrentIndexChanged: {
            var currentItem = target.model.get(target.currentIndex);
            acq.cci.agcHeqScaleFactor = currentItem.data;
        }
    }
}
