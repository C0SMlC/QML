import QtQuick
import QtQuick.Controls

Window {
    width: 1280
    height: 832
    visible: true
    title: qsTr("Recorder")

    color: "#009688"

    AudioRecorder {
        id: audioRecorder
    }

    PlayAudio {
        id:playAudio
    }

    RadioButtonGroup {
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 50
    }

    RecordButton {
        id: recordButton
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -180

        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            onClicked: {
                recordButton.isRecording = !recordButton.isRecording
                if (recordButton.isRecording) {
                    audioRecorder.startRecording()
                } else {
                    audioRecorder.stopRecording()
                }
            }
        }
    }

    RecordHistory {
        id: recordHistory
        anchors.centerIn: parent
        anchors.verticalCenterOffset: 180

        onItemClicked: {
                playAudio.playAudio(audioFilePath)
        }
    }
}
