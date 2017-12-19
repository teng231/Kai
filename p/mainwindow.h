#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QRegExp>
#include <QVector>
#include <QSettings>
#include <QMessageBox>
#include <QDesktopServices>
#include <QDir>
#include <QTimer>



#include "qauto.h"
#include "microsleep.h"
#include "calrender.h"
#include "qgetscreen.h"
#include "mouseq.h"
#include "validations.h"
#include "imagerecognition.h"
#include "workfile.h"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QStringList configs;
    void emptyOld();
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void closeEvent(QCloseEvent *event) override;
    QNetworkAccessManager *manager;

    // biến bổ trợ thao tác lưu trữ
    QList<QPoint> startPoint;
    QPoint btn_lc;
    QScreen *screen;

    ImageRecognition imageRec;
    // Biến tự định nghĩa
    QTimer *timer;
    WorkFile *wf;
    MouseQ mq;
    Validations validate;
    int doAcceppt=0;

    // Hàn thao tác trên con trỏ ui
    int kiemThu();
    void sapBai(QStringList list,QStringList dvao);
    ~MainWindow();

    // Hàm config
    void readSettings(QString str);
    void writeSettings();
    void captureCards(int );
    void rewriteFileName(QStringList,QStringList);//
signals:
    void updateResult(int i,QStringList list);
    void goNextSignal();
private slots:
    void on_btn_submit_clicked();
    void replyFinished(QNetworkReply*);
    void on_btn_ping_clicked();
    void update(int i,QStringList list);
    void on_btn_train_clicked();
    void doAll();

    void goNext();
    void on_btn_submit_auto_clicked();

    void activateAutoClick();

    void on_btn_auto_pause_clicked();

    void on_cbb_load_currentTextChanged(const QString &arg1);

    void on_btn_add_config_clicked();

    void on_btn_add_config_2_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
