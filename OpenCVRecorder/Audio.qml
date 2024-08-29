import QtQuick
import QtQuick.Controls
import QtMultimedia
import Qt.labs.platform

Rectangle {
    id: audioRec
    width: parent.width
    height: parent.height

    Rectangle {
        id: imageBox
        width: audioRec.width
        height: audioRec.height * 0.7
        anchors.top: parent.top

        Image {
            id: imgW
            source: "file:///C:/Users/Ram Mourya/Downloads/Sound-Wave-Transparent.png"
            anchors.fill: parent
            fillMode: Image.PreserveAspectFit
        }
    }

    Rectangle {
        id: buttonBox
        width: audioRec.width
        height: audioRec.height * 0.3
        anchors.top: imageBox.bottom

        Button {
            id: startA
            text: "Record"
            width: buttonBox.width * 0.4
            height: buttonBox.height * 0.6
            anchors {
                left: buttonBox.left
                leftMargin: buttonBox.width * 0.1
                verticalCenter: buttonBox.verticalCenter
            }
            font.bold: true
            font.pixelSize: 16
            contentItem: Text {
                text: startA.text
                font: startA.font
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
            background: Rectangle {
                color: "blue"
                radius: 10
            }
            visible: mediaRecorder.recorderState !== MediaRecorder.RecordingState
            onClicked: mediaRecorder.record()
        }

        Button {
            id: stopA
            text: "Stop"
            width: buttonBox.width * 0.4
            height: buttonBox.height * 0.6
            anchors {
                right: buttonBox.right
                rightMargin: buttonBox.width * 0.1
                verticalCenter: buttonBox.verticalCenter
            }
            font.bold: true
            font.pixelSize: 16
            contentItem: Text {
                text: stopA.text
                font: stopA.font
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
            background: Rectangle {
                color: "blue"
                radius: 10
            }
            visible: mediaRecorder.recorderState === MediaRecorder.RecordingState
            onClicked: mediaRecorder.stop()
        }
    }

    CaptureSession {
        id: captureSession
        audioInput: AudioInput {
            id: audioInput
            // Default to the first available audio input device
            // device: MediaDevices.defaultAudioInput
            // device: MediaDevices.audioInputs
            device: MediaDevices.audioInputs
                    && MediaDevices.audioInputs.length > 0 ? MediaDevices.audioInputs[0] : null
            onDeviceChanged: {
                if (audioInput.device == null) {
                    console.log("No audio input device available.")
                }
            }
        }

        recorder: MediaRecorder {
            id: mediaRecorder
            outputLocation: StandardPaths.writableLocation(
                                StandardPaths.DocumentsLocation) + "/audio.mp4"
        }
    }

    // Component.onCompleted: {
    //     if (MediaDevices.defaultAudioInput !== null
    //             && MediaDevices.defaultAudioInput !== undefined) {
    //         audioInput.device = MediaDevices.defaultAudioInput
    //     } else {
    //         console.log("No default audio input device found.")
    //     }
    // }
    Component.onCompleted: {
        if (MediaDevices.audioInputs && MediaDevices.audioInputs.length > 0) {
            audioInput.device = MediaDevices.audioInputs[0]
        } else {
            console.log("No audio input devices found.")
        }
    }
}
