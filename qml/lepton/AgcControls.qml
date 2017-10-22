import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import "qrc:/controls"

Item {
    id: root
    width: 200
    property UvcAcquisition acq: null
    anchors.margins: 5
    enabled: !acq.cci.supportsRadiometry

    Flow {
        id: flow1
        spacing: 5
        anchors.fill: parent
        anchors.margins: 5

        Switch {
            id: checkAgcEnable
            height: 30
            text: "AGC Enable"
            checked: (acq.cci.agcEnable == LEP_AGC_ENABLE_E.LEP_AGC_ENABLE)
        }


        Switch {
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
                    maximumValue: 254
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

            Flow {
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

                ValueSlider {
                    id: agcHeqDampingFactor
                    description: qsTr("Dampening Factor")
                    maximumValue: 100
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqDampingFactor"
                }

                ValueSlider {
                    id: agcHeqMaxGain
                    description: qsTr("Max Gain")
                    maximumValue: 4
                    minimumValue: 1
                    model: acq.cci
                    binding: "agcHeqMaxGain"
                }

                ValueSlider {
                    id: agcHeqClipLimitHigh
                    description: qsTr("Clip Limit High")
                    maximumValue: (80*60)
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqClipLimitHigh"
                }

                ValueSlider {
                    id: agcHeqClipLimitLow
                    description: qsTr("Clip Limit Low")
                    maximumValue: (80*60)
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqClipLimitLow"
                }

                ValueSlider {
                    id: agcHeqBinExtension
                    description: qsTr("Bin Extension")
                    maximumValue: 16
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqBinExtension"
                }

                ValueSlider {
                    id: agcHeqMidPoint
                    description: qsTr("Midpoint")
                    maximumValue: 65534
                    minimumValue: 127
                    model: acq.cci
                    binding: "agcHeqMidPoint"
                }

                ValueSlider {
                    id: agcHeqEmptyCount
                    description: qsTr("Empty Count")
                    maximumValue: 65535
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqEmptyCount"
                }

                ValueSlider {
                    id: agcHeqNormalizationFactor
                    description: qsTr("Normalization Factor")
                    maximumValue: 65535
                    minimumValue: 0
                    model: acq.cci
                    binding: "agcHeqNormalizationFactor"
                }
            }
        }


    }

    Binding {
        target: acq.cci
        property: "agcEnable"
        value: checkAgcEnable.checked ? LEP_AGC_ENABLE_E.LEP_AGC_ENABLE : LEP_AGC_ENABLE_E.LEP_AGC_DISABLE
    }

    Binding {
        target: acq.cci
        property: "agcPolicy"
        value: comboAgcPolicy.model.get(comboAgcPolicy.currentIndex).data
    }

    Binding {
        target: acq.cci
        property: "agcHeqScaleFactor"
        value: comboAgcHeqScaleFactor.model.get(comboAgcHeqScaleFactor.currentIndex).data
    }
}
