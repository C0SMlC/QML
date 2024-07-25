import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

ApplicationWindow {
    width: 420
    height: 700
    visible: true
    title: qsTr("Fill Profile Information")
    color: "#232946"

    Rectangle {
        id: formContainer
        width: parent.width - 40
        height: contentColumn.implicitHeight + 40
        color: "#eebbc3"
        radius: 15
        anchors.centerIn: parent

        ColumnLayout {
            id: contentColumn
            width: parent.width - 40
            anchors.centerIn: parent
            spacing: 20

            Label {
                text: "Profile Form"
                font.pointSize: 18
                font.bold: true
                color: "#232946"
                Layout.alignment: Qt.AlignHCenter
            }

            Repeater {
                model: [
                    { label: "Name", placeholder: "Enter your name" },
                    { label: "Email", placeholder: "Enter your email" },
                    { label: "Confirm Email", placeholder: "Confirm your email" }
                ]
                delegate: ColumnLayout {
                    Layout.fillWidth: true
                    spacing: 5

                    TextField {
                        id: input
                        Layout.fillWidth: true
                        placeholderText: modelData.placeholder
                        font.pointSize: 16
                        onTextChanged: {
                            if (index === 1 || index === 2) validateEmails()
                        }
                    }

                    Label {
                        text: modelData.label + ": " + input.text
                        font.bold: true
                        font.pointSize: 12
                    }
                }
            }

            Label {
                id: errorText
                color: "red"
                font.pointSize: 14
                visible: false
                Layout.fillWidth: true
                wrapMode: Text.WordWrap
            }

            Button {
                text: "Submit"
                Layout.fillWidth: true
                Layout.preferredHeight: 50
                font.pointSize: 16
                onClicked: submitForm()
            }
        }
    }

    function validateEmails() {
        let emailInput = contentColumn.children[2].children[0];
        let confirmEmailInput = contentColumn.children[3].children[0];
        let emailsMatch = confirmEmailInput.text !== "" && emailInput.text === confirmEmailInput.text;

        emailInput.color = emailsMatch ? "black" : "red";
        confirmEmailInput.color = emailsMatch ? "black" : "red";
        errorText.visible = !emailsMatch;
        errorText.text = emailsMatch ? "" : "Emails do not match";
    }

    function submitForm() {
        let nameInput = contentColumn.children[1].children[0];
        let emailInput = contentColumn.children[2].children[0];
        let confirmEmailInput = contentColumn.children[3].children[0];

        if (nameInput.text === "") {
            errorText.text = "Please enter your name";
        } else if (emailInput.text === "") {
            errorText.text = "Please enter your email";
        } else if (confirmEmailInput.text === "") {
            errorText.text = "Please confirm your email";
        } else if (emailInput.text !== confirmEmailInput.text) {
            errorText.text = "Emails do not match";
        } else {
            console.log("Form submitted successfully");
            errorText.text = "";
            errorText.visible = false;
            return;
        }
        errorText.visible = true;
    }
}
