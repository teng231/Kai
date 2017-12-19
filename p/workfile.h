#ifndef WORKFILE_H
#define WORKFILE_H

#include <QPixmap>
#include <QString>
#include <QStringList>
#include <QDateTime>
#include <QFile>
#include <QDir>

class WorkFile
{
public:
    WorkFile();
    void rewriteFileName(QStringList,QStringList);//
    void saveFile(QPixmap pixmap,QString name);//
};

#endif // WORKFILE_H
