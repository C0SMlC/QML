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
                width: parent.width
                height: parent.height
                Image {
                    id: backgroundImage
                    source: backgroundSource
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectCrop
                    visible: true
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

    transitions: Transition {
        from: "*"
        to: "*"

        ParallelAnimation {
            NumberAnimation {
                property: "y"
                from: height
                to: 0
                duration: 300
                easing.type: Easing.OutQuad
            }
            NumberAnimation {
                property: "opacity"
                from: 0
                to: 1
                duration: 300
            }
        }
    }

}
}
