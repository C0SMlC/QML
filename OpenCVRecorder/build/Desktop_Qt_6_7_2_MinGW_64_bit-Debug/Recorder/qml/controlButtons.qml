import QtQuick
import QtQuick.Controls

Item {
    id: radioButtonGroup
    property alias checkedButton: group.checkedButton
    property string title: ""

    Column {
        anchors.centerIn: parent

        ButtonGroup {
            id: group
            RadioButton {
                id: audio
                text: "Audio"
                checked: true
            }

            RadioButton {
                id: video
                text: "Video"
            }
        }
    }
}
