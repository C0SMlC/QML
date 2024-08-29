// PlayerWindow.qml
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtMultimedia

Window {
    id: playerWindow
    width: 300
    height: 450
    title: qsTr("Audio Player")

    color: "#263238"

    property alias source: player.source
    property alias position: player.position
    property alias duration: player.duration

    function play() {
        player.play()
    }

    function pause() {
        player.pause()
    }

    function stop() {
        player.stop()
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 10

        Text {
            id: titleText
            Layout.fillWidth: true
            text: "Now Playing: " + player.source.toString().split('/').pop()
            elide: Text.ElideRight
            color: "#fafafa"
        }

        Rectangle {
            Layout.alignment: Qt.AlignHCenter
            width: 250
            height: 250
            color: "transparent"

            Image {
                anchors.fill: parent
                source: "file:///D:/QML/Recorder/resources/record-player.png"
                fillMode: Image.PreserveAspectFit
            }
        }

        Slider {
            Layout.fillWidth: true
            from: 0
            to: player.duration
            value: player.position
            onMoved: player.setPosition(value)
        }

        RowLayout {
            Layout.alignment: Qt.AlignHCenter

            Button {
                text: "⏮"
                onClicked: player.setPosition(0)
            }

            Button {
                text: player.playbackState === MediaPlayer.PlayingState ? "⏸" : "▶"
                onClicked: player.playbackState === MediaPlayer.PlayingState ? player.pause() : player.play()
            }

            Button {
                text: "⏹"
                onClicked: playerWindow.stop()
            }
        }
    }

    MediaPlayer {
        id: player
        audioOutput: AudioOutput {}
    }
}
