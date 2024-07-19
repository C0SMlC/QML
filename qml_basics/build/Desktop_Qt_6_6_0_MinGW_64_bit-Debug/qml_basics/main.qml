import QtQuick

Window {
    width: 500
    height: 500
    visible: true
    title: qsTr("Hello World")
    color: "grey"

    Rectangle {
        id: bigRectangle
        width: 400
        height: 400
        anchors.centerIn: parent
        color: "red"

        Rectangle {
            width: 400
            height: 200
            x:0
            y:0
            // anchors.centerIn: parent
            color: "blue"
        }

        Rectangle {
            width: 400
            height: 200
            x: 0
            y: bigRectangle.width/2
            // anchors.centerIn: parent
            color: "yellow"
        }
    }
}
