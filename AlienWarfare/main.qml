import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Alien Warfare")



    Rectangle{
        id:move1
        width:50
        height:50
        color:"blue"
        x:100
        y:100
        focus: true

        Keys.onPressed:(event)=>
                       {
                           if(event.key===Qt.Key_Left){
                               move1.x-=10;
                           }
                           if(event.key===Qt.Key_Right){
                               move1.x+=10;
                           }
                           if(event.key===Qt.Key_Up){
                               move1.y-=10;
                           }
                           if(event.key===Qt.Key_Down){
                               move1.y+=10;
                           }
                       }

    }
}
