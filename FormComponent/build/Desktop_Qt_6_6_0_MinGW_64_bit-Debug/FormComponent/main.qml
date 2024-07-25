import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 420
    height: 700
    visible: true
    title: qsTr("Fill Profile Information")
    color: "#232946"

    Rectangle {
        id: formContainer
        width: parent.width - 40
        height: contentColumn.height + 40
        color: "#eebbc3"
        radius: 15
        anchors.centerIn: parent

        Text {
            id: formTitle
            text: "Profile Form"
            anchors {
                top: parent.top
                topMargin: 20
                horizontalCenter: parent.horizontalCenter
            }
            font {
                pointSize: 18
                bold: true
            }
            color: "#232946"
        }


        Column {
            id: contentColumn
            width: parent.width
            spacing: 20
            padding: 20
            anchors{
                topMargin: 30
            }

            Rectangle {
                id: nameContainer
                height: childrenRect.height
                color: "transparent"
                anchors {
                    left: parent.left
                    right: parent.right
                    leftMargin: 20
                    rightMargin: 20
                }

                Column {
                    spacing: 30
                    width: parent.width

                    Column {
                        spacing: 10
                        width: parent.width
                        TextField {
                            id: nameInput
                            width: parent.width
                            placeholderText: qsTr("Enter your name")
                            font.pointSize: 18
                        }
                        Text {
                            text: "Name: " + nameInput.text
                            font.bold: true
                            font.pointSize: 14
                        }
                    }

                    Column {
                        spacing: 10
                        width: parent.width
                        TextField {
                            id: emailInput
                            width: parent.width
                            placeholderText: qsTr("Enter your email")
                            font.pointSize: 18
                            onTextChanged: validateEmails()
                        }
                        Text {
                            text: "Email: " + emailInput.text
                            font.bold: true
                            font.pointSize: 14
                        }
                    }

                    Column {
                        spacing: 10
                        width: parent.width
                        TextField {
                            id: confirmEmailInput
                            width: parent.width
                            placeholderText: qsTr("Confirm your email")
                            font.pointSize: 18
                            onTextChanged: validateEmails()
                        }
                        Text {
                            text: "Confirm Email: " + confirmEmailInput.text
                            font.bold: true
                            font.pointSize: 14
                        }
                    }

                    Text {
                        id: errorText
                        color: "red"
                        font.pointSize: 14
                        visible: false
                    }

                    Button {
                        text: "Submit"
                        width: parent.width
                        height: 50
                        font.pointSize: 16
                        onClicked: submitForm()
                    }
                }
            }
        }
    }

    function validateEmails() {
        if (confirmEmailInput.text !== "" && emailInput.text !== confirmEmailInput.text) {
            emailInput.color = "red"
            confirmEmailInput.color = "red"
            errorText.text = "Emails do not match"
            errorText.visible = true
        } else {
            emailInput.color = "black"
            confirmEmailInput.color = "black"
            errorText.visible = false
        }
    }

    function submitForm() {
        if (nameInput.text === "") {
            errorText.text = "Please enter your name"
            errorText.visible = true
        } else if (emailInput.text === "") {
            errorText.text = "Please enter your email"
            errorText.visible = true
        } else if (confirmEmailInput.text === "") {
            errorText.text = "Please confirm your email"
            errorText.visible = true
        } else if (emailInput.text !== confirmEmailInput.text) {
            errorText.text = "Emails do not match"
            errorText.visible = true
        } else {
            console.log("Form submitted successfully")
            errorText.visible = false
        }
    }
}
