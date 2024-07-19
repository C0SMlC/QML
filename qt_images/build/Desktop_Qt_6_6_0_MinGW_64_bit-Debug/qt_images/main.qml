import QtQuick


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Image Gallery")

    Image {
        id: image
        anchors.fill: parent
        source : "https://images-assets.nasa.gov/image/PIA03606/PIA03606~large.jpg"

        Rectangle {
            width: image.progress * 1000
            height: 50
            x:0
            y:430
            visible : !(image.progress === 1)
            color: "red"
        }
    }
}
