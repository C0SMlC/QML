import QtQuick
import QtQuick.Controls
import Qt.labs.folderlistmodel
import Qt.labs.platform
import Qt.labs.settings 1.0
import QtQuick.Layouts

Rectangle {
    id: videoRecordHistory
    height: parent.height - 20
    width: 400
    color: "#f0f0f0"
    radius: 25
    visible: false
    opacity: 0

    Behavior on opacity {
        NumberAnimation { duration: 250 }
    }

    property string folderPath: "file:///D:/QML/Recorder/Recordings/"
    property string playVideoName: ""
    signal itemClicked(string videoFilePath)

    Rectangle {
        id: listViewBackground
        anchors.fill: parent
        anchors.margins: 20
        color: "white"
        radius: 15
        border.color: "#e0e0e0"
        border.width: 1

        // layer.enabled: true
        // layer.effect: DropShadow {
        //     transparentBorder: true
        //     horizontalOffset: 0
        //     verticalOffset: 2
        //     radius: 8.0
        //     samples: 17
        //     color: "#20000000"
        // }

        ListView {
            id: recordingListView
            anchors.fill: parent
            anchors.margins: 10
            clip: true
            spacing: 10

            model: FolderListModel {
                id: recordingFolderFiles
                folder: folderPath
                nameFilters: ["*.mp4"]
                showDirs: false
                sortField: FolderListModel.Time
                sortReversed: true
            }

            delegate: Item {
                width: recordingListView.width
                height: 80

                Rectangle {
                    anchors.fill: parent
                    color: "#f9f9f9"
                    radius: 10
                    border.color: "#e0e0e0"
                    border.width: 1

                    Rectangle {
                        width: 5
                        height: parent.height
                        color: "#4CAF50"
                        radius: 5
                    }

                    Rectangle {
                        id: hoverBackground
                        anchors.fill: parent
                        color: "#e8f5e9"
                        opacity: 0
                        radius: 10
                    }

                    states: State {
                        name: "hovered"
                        when: mouseArea.containsMouse
                        PropertyChanges { target: hoverBackground; opacity: 0.5 }
                    }

                    transitions: Transition {
                        NumberAnimation { properties: "opacity"; duration: 150 }
                    }

                    MouseArea {
                        id: mouseArea
                        anchors.fill: parent
                        hoverEnabled: true
                    }

                    RowLayout {
                        anchors.fill: parent
                        anchors.margins: 10
                        spacing: 10

                        Rectangle {
                            width: 60
                            height: 60
                            color: "#e0e0e0"
                            radius: 5

                            Image {
                                anchors.centerIn: parent
                                source: "file:///D:/QML/Recorder/resources/video_icon.png"
                                width: 40
                                height: 40
                                fillMode: Image.PreserveAspectFit
                            }
                        }

                        Column {
                            Layout.fillWidth: true
                            spacing: 5

                            Text {
                                text: fileName
                                font.pixelSize: 16
                                font.weight: Font.Medium
                                color: "#333333"
                                elide: Text.ElideRight
                                width: parent.width
                            }

                            Text {
                                text: Qt.formatDateTime(fileModified, "yyyy-MM-dd hh:mm:ss")
                                font.pixelSize: 14
                                color: "#666666"
                            }
                        }

                        Column {
                            spacing: 10

                            CustomButton {
                                text: "Play"
                                onClicked: {
                                    playVideoName = folderPath + '/' + fileName;
                                    console.log("Play video:", playVideoName)
                                    videoRecordHistory.itemClicked(playVideoName)
                                }
                            }

                            CustomButton {
                                text: "Delete"
                                onClicked: {
                                    deleteFile(fileName)
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    Text {
        id: emptyStateText
        anchors.centerIn: parent
        text: qsTr("No records to display")
        visible: recordingListView.count === 0
        font.pixelSize: 18
        color: "#999999"
    }

    function deleteFile(fileName) {
        let file = StandardPaths.writableLocation(StandardPaths.DocumentsLocation) + "/Recorder/Recordings/" + fileName
        let fileInfo = Qt.createQmlObject('import Qt.labs.platform 1.0; FileInfo {}', videoRecordHistory)
        if (fileInfo.exists(file)) {
            let result = fileInfo.remove(file)
            if (result) {
                console.log("File deleted successfully:", fileName)
                recordingFolderFiles.refresh()
            } else {
                console.error("Failed to delete file:", fileName)
            }
        } else {
            console.error("File does not exist:", fileName)
        }
    }

    Component.onCompleted: {
        console.log("Number of recordings:", recordingFolderFiles.count)
        for (let i = 0; i < recordingFolderFiles.count; i++) {
            console.log("File:", recordingFolderFiles.get(i, "fileName"))
        }
    }

    component CustomButton: Button {
        id: control

        contentItem: Text {
            text: control.text
            font: control.font
            opacity: enabled ? 1.0 : 0.3
            color: control.down ? "#e0e0e0" : "#ffffff"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 80
            implicitHeight: 30
            opacity: enabled ? 1 : 0.3
            color: control.down ? "#1976D2" : (control.hovered ? "#42A5F5" : "#2196F3")
            radius: 6
            Behavior on color {
                ColorAnimation { duration: 150 }
            }
        }
    }
}
