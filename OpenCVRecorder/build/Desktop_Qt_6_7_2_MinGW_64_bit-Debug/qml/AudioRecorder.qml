import QtQuick
import QtMultimedia
import Qt.labs.platform



Item {
    id: root

    signal recordingFinished(string fileName, string duration)

    function startRecording() {
        captureSession.recorder.record()
    }

    function stopRecording() {
        captureSession.recorder.stop()
    }

    CaptureSession {
        id: captureSession
        recorder: MediaRecorder {
            id: mediaRecorder
            onErrorOccurred: {
                console.error("Recording error: " + error)
            }
            outputLocation: "file:///D:/QML/Recorder/Recordings"
        }
        audioInput: AudioInput {}
    }
}
