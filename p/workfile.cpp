#include "workfile.h"

WorkFile::WorkFile()
{

}

void WorkFile::rewriteFileName(QStringList ltep, QStringList llabel)
{
    for(int i=0;i<llabel.size();i++){
        QDateTime time=QDateTime::currentDateTime();
//          qDebug()<<d.toString();
        QFile::copy(QDir::currentPath()+"/temp/"+ltep[i],QDir::currentPath()+"/retrain/"+llabel[i]+"_"+time.toString()+".png");
    }
}

void WorkFile::saveFile(QPixmap pixmap, QString name)
{
    QFile file("temp/"+name);
    file.open(QIODevice::WriteOnly);
    pixmap.save(&file, "PNG");
}
