import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15

Item {
    ListView {
        anchors.fill: parent
        model: PlayerModel
        orientation: ListView.Horizontal
        delegate: Column {
            Image {
                id: img
                source: linkss
                visible: true
                Text {
                    anchors.horizontalCenter: parent.horizontalCenter
                    text: name
                    color: "white"
                }
                MouseArea {
                    anchors.fill: img
                    onClicked: {
                        console.log("testLOG",img.width,img.height)
                    }
                }
            }
        }
    }
}
