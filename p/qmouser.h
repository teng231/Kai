#ifndef QMOUSER_H
#define QMOUSER_H
#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

class QMouser
{
public:
    QMouser();
    void click(int,int);
    void move(int ,int );
    void drag(int ,int,int ,int );
};

#endif // QMOUSER_H
