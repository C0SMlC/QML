import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 840
    height: 680
    visible: true
    title: qsTr("Hello World")

    Timer {
        id: timer
        interval: 1000 // 1 second
        running: true
        repeat: true
        onTriggered: {
            var date = new Date()
            hourHand.rotation = (date.getHours() % 12) * 30 + date.getMinutes() * 0.5
            minuteHand.rotation = date.getMinutes() * 6

            console.log("Hour hand Rotation: ", (date.getHours() % 12) * 30 + date.getMinutes() * 0.5);
            console.log("Minute hand Rotation: ", date.getMinutes() * 6);
        }
    }

    Image {
        id: bgClockImage
        source: "file:///D:/QML/Clock/photos/clock.png"
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        anchors.topMargin: 20
        anchors.bottomMargin: 20
        fillMode: Image.PreserveAspectFit

        onStatusChanged: {
            if (status == Image.Ready)
                console.log("Image loaded successfully")
            else if (status == Image.Error)
                console.log("Error loading image:", source)
        }

        Image {
            id: minuteHand
            source: "file:///D:/QML/Clock/photos/minute-hand.png"
            width: bgClockImage.width * 0.05
            height: bgClockImage.height * 0.4
            x: bgClockImage.width / 2 - width / 2
            y: bgClockImage.height / 2 - height / 2 + 50
            transformOrigin: Item.Center
        }

        Image {
            id: hourHand
            source: "file:///D:/QML/Clock/photos/hour-hand.png"
            width: bgClockImage.width * 0.05
            height: bgClockImage.height * 0.3 // Adjust height for hour hand
            x: bgClockImage.width / 2 - width / 2
            y: bgClockImage.height / 2 - height / 2 + 50
            transformOrigin: Item.Center
        }
    }
}
