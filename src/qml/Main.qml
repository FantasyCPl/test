import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15
import "qrc:/src/qml/scenes"
import com.game.Scene 1.0


ApplicationWindow {
    width: 1024
    height: 768
    visible: true
    title: qsTr("Hello World")

    Loader {
        anchors.fill: parent
        source: changeScene(App.scene)
    }

    Component.onCompleted: {
        App.setScene(AppScene.ChoosePlayer)
    }

    function changeScene(scene) {
        switch(scene) {
        case AppScene.ChoosePlayer:
            return "scenes/ChoosePlayerScene.qml"
        case AppScene.Room:
            return "scenes/RoomScene.qml"
        default:
            break
        }
        return ""
    }
}


