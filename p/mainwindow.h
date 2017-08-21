#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QRegExp>
#include<QProcess>
#include <QVector>
#include <QSettings>
#include <QMessageBox>
#include <QDesktopServices>
#include <QDir>
#include <QTimer>



#include "qauto.h"
#include "mouse.h"
#include "microsleep.h"
#include "calrender.h"
#include "qgetscreen.h"
#include "timer.h"
// custome to recognition image
#include "imagerecognition.h"


namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool kiemTra(QString);
    QStringList configs;
    QString dinhDang(QString);
    void emptyOld();
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mainClick(QPoint);
    void mainDoubleClick(QPoint);
    void mainDrag(QPoint beg,QPoint end);
    void mainMove(QPoint p);
    int layVt(QStringList,QString);
    QStringList phanManh(QString);

    QList<int> sortControl(QString,QString);
    void saveFile(QPixmap pixmap,QString name);
    QNetworkAccessManager *manager;
    MMMouseButton btnMouse;
    QList<QPoint> loca;
    QPoint btn_lc;
    QScreen *screen;
    ImageRecognition imageRec;
    Timer t;
    unsigned long dt = 10; //in seconds

    void doAll();
    bool kt2(QString str);
    void sapBai(QStringList list,QStringList dvao);
    ~MainWindow();


    void readSettings();
    void closeEvent(QCloseEvent *event) override;
    void writeSettings();

    void captureCards(int );
    void rewriteFileName(QStringList,QStringList);
signals:
    void updateResult(int i,QStringList list);
    void goDone();
private slots:
    void on_btn_submit_clicked();
    void replyFinished(QNetworkReply*);
    void on_btn_ping_clicked();
    void update(int i,QStringList list);
    void on_btn_train_clicked();


    void goNext();
    void on_btn_submit_auto_clicked();

    void activateAutoClick();

    void on_btn_load_config_clicked();

    void on_btn_train_start_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
