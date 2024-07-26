import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 414
    height: 826
    visible: true
    title: qsTr("Notes")
    color: "#0e2843"

    StackView {
        id: stackView
        anchors.fill: parent

        Component {
            id: mainScreen
            Page {
                background: Rectangle {
                    color: "#0e2843"
                }
                Image {
                    id: logo
                    height: 100
                    width: 100
                    source: "file:///D:/QML/Notes/assets/logo.png"
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top: parent.top
                    anchors.topMargin: 320
                }
                Button {
                    text: qsTr("Get Started")
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top: logo.bottom
                    anchors.topMargin: 80
                    width: 120
                    height: 50
                    onClicked: stackView.push("UI/LoginScreen.qml")
                }
            }
        }

        pushEnter: Transition {
            PropertyAnimation {
                property: "y"
                from: stackView.height
                to: 0
                duration: 500
            }

            PropertyAnimation {
                property: "opacity"
                from: 0
                to: 1
                duration: 500
            }
        }
        pushExit: Transition {
            PropertyAnimation {
                property: "y"
                from: 0
                to: -stackView.height
                duration: 1000
            }
            PropertyAnimation {
                property: "opacity"
                from: 1
                to: 0
                duration: 500
            }
        }
        popEnter: Transition {
            PropertyAnimation {
                property: "x"
                from: -stackView.width
                to: 0
                duration: 500
            }
        }
        popExit: Transition {
            PropertyAnimation {
                property: "x"
                from: 0
                to: stackView.width
                duration: 500
            }
        }
        initialItem: mainScreen
    }
}
