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


#include "qauto.h"
#include "mouse.h"
#include "microsleep.h"
#include "calrender.h"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool kiemTra(QString);
    QString dinhDang(QString);
    void emptyOld();
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mainClick(QPoint);
    void mainDrag(QPoint beg,QPoint end);
    void mainMove(QPoint p);
    int layVt(QStringList,QString);
    QStringList phanManh(QString);
    QString lamDep(QString str);
    QList<int> sortControl(QString,QString);
    MMMouseButton btnMouse;
    QList<QPoint> loca;
    QPoint btn_lc;
    bool kt2(QString str);
    void sapBai(QStringList list,QStringList dvao);
    ~MainWindow();

    void readSettings();
    void closeEvent(QCloseEvent *event) override;
    void writeSettings();

private slots:
    void on_btn_submit_clicked();
    void replyFinished(QNetworkReply*);
    void on_pushButton_clicked();
    void on_btn_ping_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
