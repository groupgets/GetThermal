import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0

Pane {
    id: valueSlider

    property string description: qsTr("Value")
    property real value: 0
    property real minimumValue: 0
    property real maximumValue: 65536
    property real stepSize: 1
    property var model: null
    property string binding: ""

    width: 200
    height: 90
    padding: 0

    Binding {
        target: model
        property: binding
        value: value
    }

    function updateValue() {
        model[binding] = value;
    }

    onModelChanged: {
        if (model !== null)
        {
            var val = model[binding];
            console.log("model: " + model + " property: " + binding + " value: " + val);
            value = val;
            onValueChanged.connect(updateValue);
        }
    }

    Label {
        id: label
        text: valueSlider.description
    }

    Slider {
        id: slider
        height: parent.height / 2.5
        to: valueSlider.maximumValue
        from: valueSlider.minimumValue
        anchors.margins: 0
        anchors.right: parent.right
        anchors.left: parent.left
        anchors.top: label.bottom
        value: valueSlider.value
        stepSize: valueSlider.stepSize
        onValueChanged: {
            spin.value = value
            valueSlider.value = value
        }
    }

    SpinBox {
        id: spin
        height: parent.height / 2.5
        to: valueSlider.maximumValue
        from: valueSlider.minimumValue
        anchors.margins: 0
        anchors.right: parent.right
        anchors.left: parent.left
        anchors.top: slider.bottom
        value: valueSlider.value
        stepSize: valueSlider.stepSize
        onValueChanged: {
            slider.value = value
            valueSlider.value = value
        }
    }

}
