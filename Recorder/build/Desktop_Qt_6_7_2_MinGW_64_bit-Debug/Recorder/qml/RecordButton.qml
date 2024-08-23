import QtQuick

Item {
    id: root
    property bool isRecording: false
    width: 175
    height: 175

    Rectangle {
        id: startStopButton
        anchors.fill: parent
        radius: 100
        color: root.isRecording ? "#ff1744" : "#cfd8dc"

        Text {
            id: buttonText
            anchors.centerIn: parent
            text: root.isRecording ? qsTr("Stop") : qsTr("Record")
            color: root.isRecording ? "white" : "black"
            font.pixelSize: 20
        }

        Behavior on color {
            ColorAnimation { duration: 200 }
        }
    }
}
