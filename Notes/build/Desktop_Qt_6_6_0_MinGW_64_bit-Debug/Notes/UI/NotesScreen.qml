import QtQuick
import QtQuick.Controls

Page {
    id: notesScreen

    Rectangle {
        id: customHeader
        anchors.top: parent.top
        width: parent.width
        height: 120
        color: "#b8c1ec"

        Rectangle {
            anchors.fill: parent
            anchors.topMargin: -50
            color: "#232946"
            radius: 50
        }

        Label {
            anchors.centerIn: parent
            text: "Notes"
            color: "#fffffe"
            font.pixelSize: 34
            font.bold: true
        }
    }

    background: Rectangle {
        anchors.fill: parent
        color: "#b8c1ec"
    }

    Column {
        anchors.fill: parent
        anchors.topMargin: customHeader.height + 20
        anchors.leftMargin: 20
        anchors.rightMargin: 20
        anchors.bottomMargin: 20
        spacing: 20

        Row {
            width: parent.width
            spacing: 10

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

        }

        Row {
            width: parent.width
            spacing: 10

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

        }

        Row {
            width: parent.width
            spacing: 10

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

            Rectangle {
                width: (parent.width - 10) / 2
                height: 200
                color: "#fffffe"
                radius: 25
                Text {
                    text: "Edit Note"
                    color: "#676767"
                    anchors.centerIn: parent
                }
            }

        }
    }
}
