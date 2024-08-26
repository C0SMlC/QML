import QtQuick
import QtQuick.Controls
import QtMultimedia

Window {
    width: 1280
    height: 832
    visible: true
    title: qsTr("Recorder")
    color: "#009688"

    MouseArea{
        anchors.fill: parent
        onClicked: {
            if(videoHistory.visible) videoHistory.visible = false
        }
    }

    AudioRecorder {
        id: audioRecorder
    }

    VideoDisplay{
        id: videoHistory
        anchors.left:parent.left
        z:10
    }


    Rectangle {
        anchors.left: parent.left
        anchors.leftMargin: 20
        anchors.top: parent.top
        anchors.topMargin: 20
        width: 35
        height: 35
        color: "transparent"
        visible: radioGroup.checkedButton.text === "Video"

        Image {
            anchors.fill: parent
            source: "file:///D:/QML/Recorder/resources/Menu.png"
            fillMode: Image.PreserveAspectFit
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("Button Clicked")
                videoHistory.visible = true
            }
        }
    }

    PlayAudio {
        id: playAudio
    }

    VideoRecorder {
        id: videoRecorder
    }

    RadioButtonGroup {
        id: radioGroup
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 50
    }

    RecordButton {
        id: recordButton
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -230
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            onClicked: {
                recordButton.isRecording = !recordButton.isRecording
                if (recordButton.isRecording) {
                    if (radioGroup.checkedButton.text === "Audio") {
                        audioRecorder.startRecording()
                    } else {
                        videoRecorder.startRecording()
                    }
                } else {
                    if (radioGroup.checkedButton.text === "Audio") {
                        audioRecorder.stopRecording()
                    } else {
                        videoRecorder.stopRecording()
                    }
                }
            }
        }
    }

    Item {
        anchors.centerIn: parent
        anchors.verticalCenterOffset: 140
        width: parent.width - 40
        height: 550
        property int padding: 20

        RecordHistory {
            id: recordHistory
            anchors.fill: parent
            anchors.margins: parent.padding
            visible: radioGroup.checkedButton && radioGroup.checkedButton.text === "Audio"
            onItemClicked: {
                playAudio.playAudio(audioFilePath)
            }
        }

        VideoOutput {
            id:videoOutput
            anchors.fill: parent
            anchors.margins: parent.padding
            visible: radioGroup.checkedButton && radioGroup.checkedButton.text === "Video"
            transform: Scale {
                origin.x:videoOutput.width/2
                origin.y:videoOutput.height/2
                xScale: -1
                yScale: 1
            }
        }
    }

    Component.onCompleted: {
        if (videoRecorder.captureSession) {
            videoRecorder.captureSession.videoOutput = videoOutput
        }
    }
}
