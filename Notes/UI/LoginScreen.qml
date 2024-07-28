import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Page {
    id: loginScreen

    background: Rectangle {
        color: "#0e2843"
    }

    ColumnLayout {
        anchors.fill: parent
        spacing: 20

        Rectangle {
            id: customHeader
            Layout.fillWidth: true
            height: 120
            color: "#0e2843"

            Image {
                id: logo
                anchors.centerIn: parent
                height: 100
                width: 100
                source: "file:///D:/QML/Notes/assets/logo.png"
            }
        }

        GridLayout {
            Layout.fillWidth: true
            Layout.margins: 20
            columns: 2
            rowSpacing: 20
            columnSpacing: 10

            Label {
                text: "Email:"
                color: "white"
            }

            TextField {
                Layout.fillWidth: true
                height: 40
                placeholderText: "Enter Your Email"
                verticalAlignment: Text.AlignVCenter
                background: Rectangle {
                    color: "white"
                    radius: 5
                }
            }

            Label {
                text: "Password:"
                color: "white"
            }

            TextField {
                Layout.fillWidth: true
                height: 40
                placeholderText: "Enter Your Password"
                verticalAlignment: Text.AlignVCenter
                echoMode: TextInput.Password
                background: Rectangle {
                    color: "white"
                    radius: 5
                }
            }
        }

        Button {
            text: "Login"
            Layout.preferredWidth: parent.width / 5
            Layout.preferredHeight: 40
            Layout.alignment: Qt.AlignHCenter
            onClicked: stackView.push("./NotesScreen.qml")
        }

        Item {
            Layout.fillHeight: true
        }
    }
}
