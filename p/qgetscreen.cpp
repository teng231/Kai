
#include"qgetscreen.h"


QString QGetScreen::GetScreenBase64String(QScreen *screen,QPoint p,int w,int h)
{
    if (screen)
    {
        QByteArray bArray;
        QPixmap pixmap = QPixmap(); // Create a new pixmap
        pixmap = screen->grabWindow(0, p.x(), p.y(), w, h); // Grab the screenshot

        QBuffer buffer(&bArray);

        buffer.open(QIODevice::WriteOnly);
        pixmap.save(&buffer, "PNG");
        buffer.close();

        return bArray.toBase64();
    }
    return QString("");
}

QPixmap QGetScreen::SetToLabel(QScreen *screen,QPoint p,int w,int h)
{
    if (screen)
    {
        return screen->grabWindow(0, p.x(), p.y(), w, h); // Grab the screenshot
    }
    return QPixmap();
}

QImage QGetScreen::GetQImage(QScreen *screen,QPoint p,int w,int h)
{
    QPixmap pix= SetToLabel(screen, p, w, h);
            return pix.toImage();
}
