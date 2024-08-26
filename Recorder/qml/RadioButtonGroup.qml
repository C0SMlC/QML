import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: radioButtonGroup
    property alias checkedButton: group.checkedButton
    property string title: ""

    width: layout.implicitWidth
    height: layout.implicitHeight

    RowLayout {
        id: layout
        anchors.centerIn: parent
        anchors.horizontalCenterOffset: -30
        spacing: 50

        Text {
            text: radioButtonGroup.title
            font.bold: true
            color: "#fafafa"
        }

        ButtonGroup {
            id: group
        }

        RadioButton {
            id: audio
            text: "Audio"
            checked: true
            ButtonGroup.group: group
            contentItem: Text {
                text: audio.text
                font.bold: true
                color: "#fafafa"
                leftPadding: audio.indicator.width + audio.spacing + 20
                verticalAlignment: Text.AlignVCenter
            }

            onClicked: {
                 videoRecorder.captureSession.camera.stop()
            }
        }

        RadioButton {
            id: video
            text: "Video"
            ButtonGroup.group: group
            contentItem: Text {
                text: video.text
                font.bold: true
                color: "#fafafa"
                leftPadding: video.indicator.width + video.spacing + 20
                verticalAlignment: Text.AlignVCenter
            }

            onClicked: {
                 videoRecorder.captureSession.camera.start()
            }
        }
    }
}
