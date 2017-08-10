#ifndef MOUSER_H
#define MOUSER_H

#include <QObject>
#include <QMouseEvent>
#include <QCursor>

class Mouser
{
public:
    Mouser();
    QPoint point;
    QPoint getCurPos();
    void moveMouse(QPoint);
    void dragMouse();
};

#endif // MOUSER_H
