#ifndef QAUTO_H
#define QAUTO_H

#include <QObject>
#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

class QAuto : public QObject
{
    Q_OBJECT
public:
    explicit QAuto(QObject *parent = 0);
    void _click(int,int);
    void _move(int ,int );
    void _drag(int ,int,int ,int );
signals:

public slots:
};

#endif // QAUTO_H
