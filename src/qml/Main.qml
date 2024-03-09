import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15


ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

   Rectangle {
       anchors.fill: parent
       color: "Red"
   }

   Button {
       anchors.centerIn: parent
       width: 140
       height: 50
       onPressed: {
       }
   }

   ListView {
       anchors.fill: parent
       model: CardModel
       delegate: Text {
           text: name
       }
   }
}

