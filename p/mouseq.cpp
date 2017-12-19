#include "mouseq.h"

MouseQ::MouseQ()
{
    btnMouse=LEFT_BUTTON;
}

void MouseQ::mainClick(QPoint p)
{
    MMPoint point;
    point.x=p.x();
    point.y=p.y();
    smoothlyMoveMouse(point);
    microsleep(10);
    clickMouse(btnMouse);
    microsleep(10);
}

void MouseQ::mainDoubleClick(QPoint p)
{
    MMPoint point;
    point.x=p.x();
    point.y=p.y();
    moveMouse(point);
    microsleep(10);doubleClick(btnMouse);microsleep(10);
}

void MouseQ::mainDrag(QPoint beg, QPoint end)
{
    MMPoint point;
    point.x=beg.x();
    point.y=beg.y();
    MMPoint point2;
    point2.x=end.x();
    point2.y=end.y();
//    smoothlyMoveMouse(point);
    moveMouse(point);
    microsleep(100);
    toggleMouse(true,btnMouse);
    microsleep(100);
    dragMouse(point2,btnMouse);
    microsleep(100);
    toggleMouse(false,btnMouse);
    microsleep(100);
}

void MouseQ::mainMove(QPoint p)
{
    MMPoint point;
    point.x=p.x();
    point.y=p.y();
    smoothlyMoveMouse(point);
    microsleep(10);
}
