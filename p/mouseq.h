#ifndef MOUSEQ_H
#define MOUSEQ_H

#include<QPoint>
#include "mouse.h"
#include "types.h"
#include "microsleep.h"

// custome lại cho dễ controll code with Qt

class MouseQ
{
public:
    MouseQ();
    MMMouseButton btnMouse;
    void mainClick(QPoint);
    void mainDoubleClick(QPoint);
    void mainDrag(QPoint beg,QPoint end);
    void mainMove(QPoint p);
};

#endif // MOUSEQ_H
