// PlayAudio.qml
import QtQuick

Item {
    id: root
    property string path: ""
    property PlayerWindow playerWindow: null

    function playAudio(path) {
        if (!playerWindow) {
            playerWindow = playerWindowComponent.createObject(null)
        }
        playerWindow.source = path
        playerWindow.show()
        playerWindow.play()
    }

    function stopAudio() {
        if (playerWindow) {
            playerWindow.stop()
            playerWindow.close()
        }
    }

    Component {
        id: playerWindowComponent
        PlayerWindow {}
    }
}
