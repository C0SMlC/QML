import QtQuick
import QtQuick.Controls

Page {
    id: loginScreen

    Rectangle {
        id: customHeader
        anchors.top: parent.top
        width: parent.width
        height: 120
        color: "#0e2843"
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -180
        Image {
            id: logo
            height: 100
            width: 100
            source: "file:///D:/QML/Notes/assets/logo.png"
            anchors.centerIn: parent
        }
    }

    Column {
        anchors.top: customHeader.bottom
        anchors.topMargin: 50
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.leftMargin: 20
        anchors.rightMargin: 20
        spacing: 20

        Row {
            width: parent.width
            spacing: 10
            Label {
                text: "Email: "
                color: "white"
                width: 50
                anchors.verticalCenter: parent.verticalCenter
            }
            TextField {
                width: parent.width - 100
                height: 40
                placeholderText: "Enter Your Email"
                verticalAlignment: Text.AlignVCenter
                background: Rectangle {
                    color: "white"
                    radius: 5
                }
            }
        }

        Row {
            id: emailRow
            width: parent.width
            spacing: 10
            Label {
                text: "Password: "
                color: "white"
                width: 50
                anchors.verticalCenter: parent.verticalCenter
            }
            TextField {
                width: parent.width - 100
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
            width: parent.width/5
            height: 40
            anchors.horizontalCenter: parent.horizontalCenter
            // anchors.top: emailRow.bottom
            // anchors.topMargin: -50

            onClicked: stackView.push("./NotesScreen.qml")
        }
    }

    background: Rectangle {
        anchors.fill: parent
        color: "#0e2843"
    }
}
