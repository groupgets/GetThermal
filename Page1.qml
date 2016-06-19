import QtQuick 2.7
import QtMultimedia 5.5
import GetThermal 1.0

Page1Form {
    button1.onClicked: {
        console.log("Button 1 clicked.");
        player.produceContent();
    }
    button2.onClicked: {
        console.log("Button 2 clicked.");
    }
    Component.onCompleted: {
        acq.frameReady.connect(player.onNewVideoContentReceived);
    }
}
