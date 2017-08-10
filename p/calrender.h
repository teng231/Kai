#ifndef CALRENDER_H
#define CALRENDER_H
#include<QPoint>
#include<QList>

class CalRender
{
public:
    CalRender();
    CalRender(QPoint p,int under,int next);
    QPoint p;
    int under;
    int next;
    QPoint btn;
    QList<QPoint> calAll();
    QPoint calBtn(int);
};

#endif // CALRENDER_H
