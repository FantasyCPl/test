import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15
import "qrc:/src/qml/scenes"
import com.game 1.0


ApplicationWindow {
    width: 1024
    height: 768
    visible: true
    title: qsTr("Hello World")

    Loader {
        anchors.fill: parent
        source: APP.scene === APP.ChoosePlayer ? "scenes/ChoosePlayerScene.qml" : "scenes/RoomScene.qml"


    }
    Component.onCompleted: {
        console.log("onCompleted",APP.ChoosePlayer,APP.Room)
        APP.setScene(APP.Room)
        console.log("onCompleted",APP.scene)
    }
}


