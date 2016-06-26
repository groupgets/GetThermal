import QtQuick 2.7
import QtMultimedia 5.5
import GetThermal 1.0

Page1Form {
    leptonControls1.button1.onClicked: {
//        console.log("Button 1 clicked.");
        acq.cci.PerformFFC();
    }
}
