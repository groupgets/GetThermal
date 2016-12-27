import QtQuick 2.0
import QtQuick.Controls 2.0
import GetThermal 1.0
import "qrc:/lepton"
import "qrc:/boson"
import "qrc:/images"

Pane {
    id: root

    property UvcAcquisition acq: null

    width: 220
    height: 480

    rightPadding: 5
    topPadding: 12
    bottomPadding: 12
    leftPadding: 12
    padding: 0

    Image {
        id: imageLogo
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.right: parent.right
        height: 50
        fillMode: Image.PreserveAspectFit
        source: "/images/images/brand-logo.png"
    }

    Component {
        id: leptonControls1
        LeptonTabs {
            acq: root.acq
        }
    }

    Component {
        id: bosonControls1
        BosonTabs {
            acq: root.acq
        }
    }

    Loader {
        id: controls
        asynchronous: true
        anchors.top: imageLogo.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
    }

    onAcqChanged: {
        if (acq.cci.objectName === "LeptonVariation")
        {
            controls.sourceComponent = leptonControls1;
        }
        else if (acq.cci.objectName === "BosonVariation")
        {
            controls.sourceComponent = bosonControls1;
        }
    }

}
