import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Alien Warfare")

    Rectangle{
        id:move
        width:50
        height:50
        color:"red"
        anchors.centerIn: parent

        Text {
            id: name
            text: qsTr("helooo")
        }


    }


    Rectangle{
        id:move1
        width:50
        height:50
        color:"blue"



    }
}
