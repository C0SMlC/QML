import QtQuick
import QtQuick.Controls

Page {
    id: notesScreen

    property color primaryColor: "#232946"
    property color secondaryColor: "#b8c1ec"
    property color textColor: "#676767"
    property color noteColor: "#fffffe"

    Component {
           id: notePopup
           Rectangle {
               id: popupBackground
               anchors.fill: parent
               color: "black"
               opacity: 0.8

               MouseArea {
                   anchors.fill: parent
                   onClicked: popupLoader.sourceComponent = undefined
               }

               Rectangle {
                   width: parent.width * 0.8
                   height: parent.height * 0.6
                   anchors.centerIn: parent
                   color: noteColor
                   radius: 10

                   Column {
                       anchors.fill: parent
                       anchors.margins: 20
                       spacing: 10

                       Text {
                           text: popupLoader.noteTitle
                           font.pixelSize: 24
                           font.bold: true
                       }

                       TextArea {
                           width: parent.width
                           height: parent.height - 40
                           text: "Edit your note here..."
                           wrapMode: TextEdit.Wrap
                       }
                   }
               }
           }
       }

       Loader {
           id: popupLoader
           anchors.fill: parent
           property string noteTitle: ""
           z: 100
       }

    Rectangle {
        id: customHeader
        anchors.top: parent.top
        width: parent.width
        height: 120
        color: secondaryColor

        Rectangle {
            anchors.fill: parent
            anchors.topMargin: -50
            color: primaryColor
            radius: 50
        }

        Label {
            anchors.centerIn: parent
            text: "Notes"
            color: noteColor
            font.pixelSize: 34
            font.bold: true
        }
    }

    background: Rectangle {
        anchors.fill: parent
        color: secondaryColor
    }

    ScrollView {
        anchors.fill: parent
        anchors.topMargin: customHeader.height + 20
        anchors.margins: 20
        clip: true

        GridView {
            id: notesGrid
            width: parent.width
            height: parent.height
            cellWidth: width / 2
            cellHeight: 220
            model: ListModel {
                ListElement { title: "Note 1" }
                ListElement { title: "Note 2" }
                ListElement { title: "Note 3" }
                ListElement { title: "Note 4" }
                ListElement { title: "Note 5" }
                ListElement { title: "Note 6" }
            }
            delegate: Rectangle {
                width: notesGrid.cellWidth - 10
                height: 200
                color: noteColor
                radius: 25

                Text {
                    text: model.title
                    color: textColor
                    anchors.centerIn: parent
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        console.log("Clicked on", model.title)
                        popupLoader.noteTitle = model.title
                        popupLoader.sourceComponent = notePopup
                    }
                }
            }
        }
    }

    Keys.onReturnPressed: {
            console.log("Login via Enter key")
            stackView.pop()
    }
}
