import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Page {
    id: loginScreen
    anchors.centerIn: parent
    property color primaryColor: "#0e2843"
    property color textColor: "white"
    property color inputBackgroundColor: "white"
    property int inputHeight: 40
    property int marginSize: 20

    background: Rectangle {
        color: primaryColor
        anchors.fill: parent
    }

    ColumnLayout {
        anchors.centerIn: parent
        spacing: marginSize*2
        width: parent.width - 2 * marginSize

        Rectangle {
            id: customHeader
            Layout.fillWidth: true
            height: 120
            color: primaryColor

            Image {
                id: logo
                height: 100
                width: 100
                source: "file:///D:/QML/Notes/assets/logo.png"
                anchors.centerIn: parent
            }
        }

        ColumnLayout {
            Layout.fillWidth: true
            Layout.leftMargin: marginSize
            Layout.rightMargin: marginSize
            spacing: marginSize

            RowLayout {
                Layout.fillWidth: true
                spacing: 10

                Label {
                    text: "Email: "
                    color: textColor
                    Layout.preferredWidth: 80
                }

                TextField {
                    id: emailField
                    Layout.fillWidth: true
                    height: inputHeight
                    placeholderText: "Enter Your Email"
                    verticalAlignment: Text.AlignVCenter
                    background: Rectangle {
                        color: inputBackgroundColor
                        radius: 5
                    }
                    validator: RegularExpressionValidator {
                        regularExpression: /^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}$/
                    }
                }
            }

            RowLayout {
                Layout.fillWidth: true
                spacing: 10

                Label {
                    text: "Password: "
                    color: textColor
                    Layout.preferredWidth: 80
                }

                TextField {
                    id: passwordField
                    Layout.fillWidth: true
                    height: inputHeight
                    placeholderText: "Enter Your Password"
                    verticalAlignment: Text.AlignVCenter
                    echoMode: TextInput.Password
                    background: Rectangle {
                        color: inputBackgroundColor
                        radius: 5
                    }
                }

                Button {
                    text: passwordField.echoMode === TextInput.Normal ? "Hide" : "Show"
                    onClicked: passwordField.echoMode = passwordField.echoMode === TextInput.Normal ? TextInput.Password : TextInput.Normal
                }
            }

            CheckBox {
                id: rememberMeCheckbox
                text: "Remember Me"
                checked: false
                contentItem: Text {
                    text: rememberMeCheckbox.text
                    color: textColor
                    verticalAlignment: Text.AlignVCenter
                    leftPadding: rememberMeCheckbox.indicator.width + rememberMeCheckbox.spacing
                }
            }

            Button {
                text: "Login"
                Layout.preferredWidth: parent.width / 3
                Layout.alignment: Qt.AlignHCenter
                height: inputHeight
                enabled: emailField.acceptableInput && passwordField.text.length > 0

                background: Rectangle {
                    color: parent.enabled ? "steelblue" : "gray"
                    radius: 5
                }

                contentItem: Text {
                    text: parent.text
                    color: "white"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                onClicked: {
                    console.log("Login clicked")
                    stackView.push("./NotesScreen.qml")
                }
            }

            Text {
                text: "Forgot Password?"
                color: "lightblue"
                Layout.alignment: Qt.AlignHCenter
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        console.log("Forgot password clicked")
                    }
                }
            }
        }
    }

    Keys.onReturnPressed: {
        if (emailField.acceptableInput && passwordField.text.length > 0) {
            console.log("Login via Enter key")
            stackView.push("./NotesScreen.qml")
        }
    }
}
