#ifndef QGETSCREEN_H
#define QGETSCREEN_H

#include<QPixmap>
#include <QRect>
#include <QScreen>
#include <QImage>
#include <QBuffer>
#include <QByteArray>


class QGetScreen
{
public:
    static QString GetScreenBase64String(QScreen *screen,QPoint p,int w,int h);
    static QPixmap SetToLabel(QScreen *screen,QPoint p,int w,int h);
    static void saveImage(QScreen *screen,int w,int h);
    static QImage GetQImage(QPixmap qp);
};

#endif // QGETSCREEN_H
