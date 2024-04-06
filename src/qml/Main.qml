import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15
import "qrc:/src/qml/scenes"


ApplicationWindow {
    width: 1024
    height: 768
    visible: true
    title: qsTr("Hello World")

    Loader {
        anchors.fill: parent
        source: "scenes/ChoosePlayerScene.qml"
    }

}


