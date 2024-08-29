import QtQuick
import QtMultimedia
import Qt.labs.platform

Item {
    id: root
    property bool isRecording: false
    property string currentFileName: ""
    property alias captureSession: captureSession

    signal recordingFinished(string fileName, string duration)

    function generateFileName() {
        let timestamp = new Date().toISOString().replace(/[:.]/g, "-")
        return "video_" + timestamp + ".mp4"
    }

    function startRecording() {
        // captureSession.camera.start();
        currentFileName = generateFileName()
        mediaRecorder.outputLocation = "file:///D:/QML/Recorder/Recordings/" + currentFileName
        captureSession.recorder.record()
        isRecording = true
        console.log("Recording started")
    }

    function stopRecording() {
        captureSession.recorder.stop()
        isRecording = false
        console.log("Recording stopped")
    }

    Camera {
        id: camera
    }

    CaptureSession {
        id: captureSession
        camera: camera
        audioInput: AudioInput {
            id: audioInput
        }
        recorder: MediaRecorder {
            id: mediaRecorder
            quality: MediaRecorder.HighQuality
            mediaFormat: MediaFormat.MPEG4
            onErrorOccurred: (error, errorString) => {
                console.error("Recording error:", errorString)
            }
            onRecorderStateChanged: (state) => {
                console.log("Recorder state changed to:", state)
                if (state === MediaRecorder.StoppedState) {
                    let duration = mediaRecorder.duration / 1000
                    let fileName = mediaRecorder.actualLocation.toString()
                    root.recordingFinished(fileName, duration.toFixed(2))
                    console.log("Recording finished: " + fileName)
                } else if (state === MediaRecorder.RecordingState) {
                    console.log("Recording is in progress")
                }
            }
        }
    }
}
