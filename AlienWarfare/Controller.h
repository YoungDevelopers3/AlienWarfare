#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

class Controller:public QObject//Inheritance from the QObject class
{
    Q_OBJECT
    //Q_PROPERTY Connects C++ variable to QML UI ,without it QML cannot see any C++ data
    Q_PROPERTY(double x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(double y READ y WRITE setY NOTIFY yChanged)


public:
    Controller(QObject* parent=nullptr);




    double x(){//getter
        return m_x;
    }

    double y(){//getter
        return my_y;
    }

    void setX(double value){//setter
        if(m_x!=value){
            m_x=value;
            emit xChanged();//signal
        }
    }


    void setY(double value){//setter
        if(m_y!=value){
            m_y=value;
            emit yChanged();//signal
        }
    }

   Q_INVOKABLE void moveLeft(){//Q_INVOKABLE is used to make a C++ function callable in QML, as QML cannot call normal C++ methods
        setX(m_x-xSpeed);
    }

    Q_INVOKABLE void moveRight(){
        setY(m_y+xSpeed);
    }





signals://signals are the members of the class that send notification to the qml to update the UI auotmatically
    void xChanged();
    void yChanged();



private:
    double m_x;//current position of our rectangle on x-axis
    double m_y;//current position of our rectangle on y-axis
    double xSpeed;




};

#endif // CONTROLLER_H
