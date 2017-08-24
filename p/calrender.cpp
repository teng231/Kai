#include "calrender.h"

CalRender::CalRender()
{

}

CalRender::CalRender(QPoint p, int next, int under )
{
    this->p=p;
    this->under=under;
    this->next=next;
}

QList<QPoint> CalRender::calAll()
{
    QList<QPoint> list;
    int hs=2;
    list.append(this->p);
    // hang1
    for(int i=1;i<3;i++){
//       QPoint pp(this->p.x(),this->p.y()+next*i);
       list.append(QPoint(this->p.x()+this->next*i+i*hs,this->p.y()));
    }
    for(int i=0;i<5;i++){
//       QPoint pp(this->p.x()+under,this->p.y()+next*i);
       list.append(QPoint(this->p.x()+this->next*i+i*hs,this->p.y()+this->under));
    }
    for(int i=0;i<5;i++){
//       QPoint pp(this->p.x()+under*2,this->p.y()+next*i);
       list.append(QPoint(this->p.x()+this->next*i+i*hs,this->p.y()+this->under*2));
    }
    return list;
}

QPoint CalRender::calBtn(int btn)
{
    return QPoint(this->p.x()+this->next*6,this->p.y()+this->under*2+btn);
}



