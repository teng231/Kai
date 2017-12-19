#ifndef VALIDATIONS_H
#define VALIDATIONS_H

#include<QString>
#include <QStringList>



class Validations
{
public:
    Validations();
    QString dinhDang(QString);
    bool kiemTra(QString);
    QStringList phanManh(QString);
    QList<int> sortControl(QString,QString);//
    bool kt2(QString str);
};

#endif // VALIDATIONS_H
