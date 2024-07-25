import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    width: 1024
    height: 600
    visible: true
    title: qsTr("Dashboard")

    property string backgroundSource: "file:///D:/QML/Dashboard/assets/dragon.jpg"

    StackView {
        id: stackView
        anchors.fill: parent

        initialItem: Page {

            ListModel {
                id: imageModel
                ListElement { source: "file:///D:/QML/Dashboard/assets/wallpaper.png" }
                ListElement { source: "file:///D:/QML/Dashboard/assets/apps.png" }
                ListElement { source: "file:///D:/QML/Dashboard/assets/calculator.png" }
            }

            Rectangle {
                id: mainScreen
                anchors.fill: parent

                Image {
                    id: backgroundImage
                    source: backgroundSource
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectCrop
                }

                Rectangle {
                    width: parent.width / 10
                    height: width
                    radius: 50
                    color: "white"
                    anchors {
                        top: parent.top
                        right: parent.right
                        topMargin: 80
                        rightMargin: 80
                    }
                    scale: 2

                    Image {
                        id: clockFace
                        source: "file:///D:/QML/Dashboard/assets/clock.png"
                        anchors.fill: parent
                        fillMode: Image.PreserveAspectFit

                        Rectangle {
                            id: centerDot
                            height: 10
                            width: 10
                            radius:50
                            anchors.centerIn: parent
                            color: "black"
                            z:10
                        }

                        Rectangle {
                            id: hourHand
                            width: parent.width * 0.04
                            height: parent.height * 0.3
                            color: "black"
                            anchors.centerIn: parent
                            anchors.verticalCenterOffset: -(parent.height * 0.3)/2
                            antialiasing: true
                            transformOrigin: Item.BottomLeft
                        }

                        Rectangle {
                            id: minuteHand
                            width: parent.width * 0.02
                            height: parent.height * 0.4
                            color: "black"
                            anchors.centerIn: parent
                            anchors.verticalCenterOffset: -(parent.height * 0.4)/2
                            antialiasing: true
                            transformOrigin: Item.BottomLeft
                        }

                        Rectangle {
                            id: secondsHand
                            width: parent.width * 0.01
                            height: parent.height * 0.45
                            color: "red"
                            anchors.centerIn: parent
                            anchors.verticalCenterOffset: -(parent.height * 0.45)/2
                            antialiasing: true
                            transformOrigin: Item.BottomLeft
                        }

                        Timer {
                            interval: 1000
                            running: true
                            repeat: true
                            onTriggered: {
                                var date = new Date()
                                hourHand.rotation = 30 * (date.getHours() % 12) + date.getMinutes() * 0.5
                                minuteHand.rotation = 6 * date.getMinutes()
                                secondsHand.rotation = 6 * date.getSeconds()
                            }
                        }
                    }
                }
            }

            Rectangle {
                id: dock
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.bottom: parent.bottom
                anchors.bottomMargin: parent.height / 100
                anchors.leftMargin: parent.height / 100
                anchors.rightMargin: parent.height / 100
                color: "#263238"
                height: parent.height / 10
                radius: 10

                Row {
                    anchors.centerIn: parent
                    spacing: width / 8;

                    Repeater {
                        model: imageModel
                        delegate: Item {
                            width: 40
                            height: 40

                            Image {
                                source: model.source
                                anchors.fill: parent
                            }

                            MouseArea {
                                anchors.fill: parent
                                onClicked: {
                                    if (model.source === "file:///D:/QML/Dashboard/assets/wallpaper.png") {
                                        backgroundSource = "file:///D:/QML/Dashboard/assets/dragon1.jpg";
                                        console.log("Wallpaper button clicked, background changed to dragon.png");
                                    }

                                    if (model.source === "file:///D:/QML/Dashboard/assets/apps.png") {
                                        stackView.push(blankPage);
                                        console.log("Apps button clicked, navigating to new page");
                                    }

                                    console.log("App drawer clicked: " + model.source);
                                }
                            }
                        }
                    }
                }
            }
        }

        pushEnter: Transition {
            PropertyAnimation {
                property: "y"
                from: stackView.height
                to: 0
                duration: 300
                easing.type: Easing.OutQuad
            }
            PropertyAnimation {
                property: "opacity"
                from: 0
                to: 1
                duration: 300
            }
        }

        pushExit: Transition {
            PropertyAnimation {
                property: "opacity"
                from: 1
                to: 0
                duration: 300
            }
        }

        popEnter: Transition {
            PropertyAnimation {
                property: "opacity"
                from: 0
                to: 1
                duration: 300
            }
        }

        popExit: Transition {
            PropertyAnimation {
                property: "y"
                from: 0
                to: stackView.height
                duration: 300
                easing.type: Easing.InQuad
            }
            PropertyAnimation {
                property: "opacity"
                from: 1
                to: 0
                duration: 300
            }
        }

        Component {
            id: blankPage
            Page {
                Rectangle {
                    anchors.fill: parent
                    color: "#FFFFFF"

                    Button {
                        id: goBack
                        height: 100
                        width: 100
                        onClicked: {
                            stackView.pop();
                            console.log("Apps button clicked, navigating to new page");
                        }
                    }
                }
            }
        }
    }
}
