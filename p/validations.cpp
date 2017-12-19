#include "validations.h"
#define r "♦"
#define c "♥"
#define b "♠"
#define te "♣"


Validations::Validations()
{

}

bool Validations::kiemTra(QString str)
{
    return str.isEmpty();
}

QStringList Validations::phanManh(QString str)
{
    QStringList li;
        for(int i=0;i<13;i++){
           QString item=str.left(2);
           li<<item;
           str.remove(0,2);
        }
        return li;
}

QString Validations::dinhDang(QString str)
{
    QString t1,t2,t3;
    t1=str.left(6).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
    t2=str.mid(6,10).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
    t3=str.right(10).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
    return t1.append("\n").append(t2).append("\n").append(t3);
}


QList<int> Validations::sortControl(QString dvao, QString dra)
{
    QStringList lvao=phanManh(dvao),lra=phanManh(dra);
    QList<int> lc;
//    qDebug()<<lvao<<lra;
    // Xét tính trạng 3 chi 3
   QStringList tl1,tl2={lra[0],lra[1],lra[2]};
   for(int i=0;i<3;i++){
       bool ok=false;
        for(int j=0;j<3;j++){
           if(lvao[i]==lra[j]){ok=true;tl2.removeAt(tl2.indexOf(lvao[i]));break;}
        }
        if(!ok){tl1.append(lvao[i]);}
//         qDebug()<<tl1<<tl2;
   }
   for(int i=0;i<tl2.size();i++){
       int vt1=lvao.indexOf(tl1[i]),vt2=lvao.indexOf(tl2[i]);
       lc<<vt1<<vt2;
       QString temp=lvao[vt1];
       lvao[vt1]=lvao[vt2];lvao[vt2]=temp;
   }
//    qDebug()<<lvao;

   QStringList tl12,tl22={lra[3],lra[4],lra[5],lra[6],lra[7]};
//     Xét tinh trạng 5 chi giữa
    for(int i=3;i<8;i++){
        bool tim=false;
        for(int j=3;j<8;j++){
            if(lvao[i]==lra[j]){
                tim=true;tl22.removeAt(tl22.indexOf(lvao[i]));break;
            }
        }
        if(!tim){tl12.append(lvao[i]);}
    }
    // Xét tính trạng 5 chi đầu

    for(int i=0;i<tl22.size();i++){
        int vt1=lvao.indexOf(tl12[i]),vt2=lvao.indexOf(tl22[i]);
        lc<<vt1<<vt2;
        QString temp=lvao[vt1];
        lvao[vt1]=lvao[vt2];lvao[vt2]=temp;
    }
    return lc;
}

bool Validations::kt2(QString str)
{
    str=str.replace("\r\n|\n| ","");
    if(str.length()!=26) {return false;}
    return true;
}
