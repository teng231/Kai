#include "mainwindow.h"
#include "ui_mainwindow.h"
#define r "♦"
#define c "♥"
#define b "♠"
#define te "♣"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMouseTracking(true);
    move(0,0);
    ui->txt_ic1->setFocusPolicy(Qt::StrongFocus);
    ui->txt_ic1->setFocus();
    ui->spin_x->setValue(cursor().pos().x());
    ui->spin_y->setValue(cursor().pos().y());
    btnMouse=LEFT_BUTTON;

    // read setting
    readSettings();

    CalRender *render=new CalRender(QPoint(ui->spin_card_x->value(),ui->spin_card_y->value()),
                                    ui->spin_next->value(),ui->spin_under->value());
    loca=render->calAll();
    btn_lc=render->calBtn(ui->spin_btn->value());
    qDebug()<<this->loca;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::writeSettings()
{
    QSettings settings;

    settings.beginGroup("MainWindow");
    settings.setValue("card", QPoint(ui->spin_card_x->value(),ui->spin_card_y->value()));
    settings.setValue("under", ui->spin_under->value());
    settings.setValue("next", ui->spin_next->value());
    settings.setValue("btn", ui->spin_btn->value());
     settings.setValue("kc_card", ui->spin_kc->value());
    settings.setValue("url", ui->txt_server->text());
    settings.endGroup();
}

void MainWindow::readSettings()
{
    QSettings settings;

    settings.beginGroup("MainWindow");
    ui->spin_card_x->setValue(settings.value("card").toPoint().x());
    ui->spin_card_y->setValue(settings.value("card").toPoint().y());
    ui->spin_next->setValue(settings.value("next").toInt());
    ui->spin_under->setValue(settings.value("under").toInt());
    ui->spin_btn->setValue(settings.value("btn").toInt());
    ui->spin_kc->setValue(settings.value("kc_card").toInt());
    ui->txt_server->setText(settings.value("url").toString());
    settings.endGroup();
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    if (true) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
}



bool MainWindow::kiemTra(QString str){
    return str.isEmpty();
}
QString MainWindow::dinhDang(QString str){
    QString t1,t2,t3;
    t1=str.left(6).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
    t2=str.mid(6,10).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
    t3=str.right(10).replace("r",r).replace("c",c).replace("b",b).replace("t",te);
//    qDebug()<<t1<<t2<<t3;
    return t1.append("\n").append(t2).append("\n").append(t3);
}

void MainWindow::emptyOld()
{
    ui->txt_oc1->setPlainText("");
    ui->txt_oc2->setPlainText("");
    ui->txt_oc3->setPlainText("");
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    event->accept();
    int _y=event->pos().y();
    if(_y>0) _y+=45;
    ui->spin_x->setValue(event->pos().x());
    ui->spin_y->setValue(_y);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    event->accept();
    int _y=event->pos().y();
    if(_y>0) _y+=45;
    ui->spin_x->setValue(event->pos().x());
    ui->spin_y->setValue(_y);
}

void MainWindow::mainClick(QPoint p)
{
    MMPoint point;
    point.x=p.x();
    point.y=p.y();
    smoothlyMoveMouse(point);
    microsleep(10);
    clickMouse(btnMouse);
    microsleep(10);
}

void MainWindow::mainDrag(QPoint beg, QPoint end)
{
    MMPoint point;
    point.x=beg.x();
    point.y=beg.y();
    MMPoint point2;
    point2.x=end.x();
    point2.y=end.y();
//    smoothlyMoveMouse(point);
    moveMouse(point);
    microsleep(100);
    toggleMouse(true,btnMouse);
    microsleep(100);
    dragMouse(point2,btnMouse);
    microsleep(100);
    toggleMouse(false,btnMouse);
    microsleep(100);
}

void MainWindow::mainMove(QPoint p)
{
    MMPoint point;
    point.x=p.x();
    point.y=p.y();
    smoothlyMoveMouse(point);
    microsleep(10);
}


QStringList MainWindow::phanManh(QString str)
{
    QStringList li;
    for(int i=0;i<13;i++){
       QString item=str.left(2);
       li<<item;
       str.remove(0,2);
    }
    return li;
}

QString MainWindow::lamDep(QString str)
{
    QString str1,str2,str3;
    str1=str.left(6);
    str2=str.mid(6,10);
    str3=str.right(10);
    return str1.append('\n').append(str2).append('\n').append(str3);
}

int MainWindow::layVt(QStringList li, QString str)
{
    for(int i=0;i<13;i++){
        if(li[i]==str) {
            return i;
        }
    }
    return -99;
}

QList<int> MainWindow::sortControl(QString dvao, QString dra)
{
//    qDebug()<<dvao<<dra;
    QStringList lvao=phanManh(dvao),lra=phanManh(dra);
    QList<int> lc;
//    qDebug()<<lvao<<lra;
    // Xét tính trạng 3 chi 3
   QStringList tl1,tl2={lra[0],lra[1],lra[2]};
   for(int i=0;i<3;i++){
       bool ok=false;
        for(int j=0;j<3;j++){
           if(lvao[i]==lra[j]){ok=true;tl2.removeAt(tl2.indexOf(lvao[i]));break;}
        }
        if(!ok){tl1.append(lvao[i]);}
//         qDebug()<<tl1<<tl2;
   }
   for(int i=0;i<tl2.size();i++){
       int vt1=lvao.indexOf(tl1[i]),vt2=lvao.indexOf(tl2[i]);
       lc<<vt1<<vt2;
       QString temp=lvao[vt1];
       lvao[vt1]=lvao[vt2];lvao[vt2]=temp;
   }
//    qDebug()<<lvao;

   QStringList tl12,tl22={lra[3],lra[4],lra[5],lra[6],lra[7]};
//     Xét tinh trạng 5 chi giữa
    for(int i=3;i<8;i++){
        bool tim=false;
        for(int j=3;j<8;j++){
            if(lvao[i]==lra[j]){
                tim=true;tl22.removeAt(tl22.indexOf(lvao[i]));break;
            }
        }
        if(!tim){tl12.append(lvao[i]);}
    }
    // Xét tính trạng 5 chi đầu

    for(int i=0;i<tl22.size();i++){
        int vt1=lvao.indexOf(tl12[i]),vt2=lvao.indexOf(tl22[i]);
        lc<<vt1<<vt2;
        QString temp=lvao[vt1];
        lvao[vt1]=lvao[vt2];lvao[vt2]=temp;
    }
//    qDebug()<<lvao<<lra;
    qDebug()<<lc;
    return lc;
}

bool MainWindow::kt2(QString str)
{
    str=str.replace("\r\n|\n| ","");
    if(str.length()!=26) {return false;}
    return true;
}

void MainWindow::sapBai(QStringList list, QStringList dvao)
{
    int kc=ui->spin_kc->value();
    try{
            for(int i=0;i<list.length();i++)
            {
                // Lấy các hoán vị
                QList<int> ls=sortControl(dvao[i],list[i]);
                // khoi dong ct
                mainClick(QPoint(loca[0].x()+i*kc,loca[0].y()));
                for(int j=0;j<ls.size();j+=2){
                    mainDrag(QPoint(loca[ls[j]].x()+i*kc,loca[ls[j]].y()) ,QPoint(loca[ls[j+1]].x()+i*kc,loca[ls[j+1]].y()));
                }
                 //so chi click
                mainClick(QPoint(btn_lc.x()+kc*i,btn_lc.y()));
            }
        }
        catch(...){
            QMessageBox::warning(this, tr("Lỗi chương trình"),
                                           tr("Lỗi nhập liệu không chính xác."),
                                           QMessageBox::Close);
        }
}

void MainWindow::on_btn_submit_clicked()
{
    emptyOld();
    QString cards1=ui->txt_ic1->toPlainText().trimmed(),
            cards2=ui->txt_ic2->toPlainText().trimmed(),
            cards3=ui->txt_ic3->toPlainText().trimmed(),
            server=ui->txt_server->text().append("?");
    qDebug()<<cards1;
    if(!kiemTra(cards1)) {
        if(kt2(cards1))
            server=server.append("cards1=").append(cards1).append('&');
        else {
            QMessageBox::warning(this, tr("Lỗi nhập"),
                                              tr("Dữ liệu không chính xác tại Bộ 1."),
                                              QMessageBox::Close);
            return;
        }
    }

    if(!kiemTra(cards2)) {
        if(kt2(cards2))
        server=server.append("cards2=").append(cards2).append('&');
        else {
            QMessageBox::warning(this, tr("Lỗi nhập"),
                                              tr("Dữ liệu không chính xác tại Bộ 2."),
                                              QMessageBox::Close);
            return;
        }
    }

    if(!kiemTra(cards3)) {
        if(kt2(cards3))
            server=server.append("cards3=").append(cards3).append('&');
        else {
            QMessageBox::warning(this, tr("Lỗi nhập"),
                                         tr("Dữ liệu không chính xác tại Bộ 3."),
                                          QMessageBox::Close);
            return;
        }
    }
    server=server.toLower().replace("\n","").trimmed();
    // request lên server
    QRegularExpression re("[^rctbajqk0-9]");
    QRegularExpressionMatch match = re.match(cards1.append(cards2).append(cards3));

    if (!match.hasMatch()) {
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);
        connect(manager, SIGNAL(finished(QNetworkReply*)),
                this, SLOT(replyFinished(QNetworkReply*)));
        manager->get(QNetworkRequest(QUrl(server)));
    }
    else{
        QMessageBox::warning(this, tr("Lỗi chương trình"),
                                       tr("Lỗi nhập liệu không chính xác."),
                                       QMessageBox::Close);
    }

}
void MainWindow::replyFinished(QNetworkReply*reply){
    QString data=(QString) reply->readAll();
    QStringList list=data.trimmed().split("\r\n");

    int len=list.length();
    QStringList dvao;
    if(len==3){
        ui->txt_oc1->setPlainText(dinhDang(list[0]));
        ui->txt_oc2->setPlainText(dinhDang(list[1]));
        ui->txt_oc3->setPlainText(dinhDang(list[2]));
        dvao<<ui->txt_ic1->toPlainText().replace("\n","")<<ui->txt_ic2->toPlainText().replace("\n","")<<ui->txt_ic3->toPlainText().replace("\n","");
    }
    else if(len==2){
        ui->txt_oc1->setPlainText(dinhDang(list[0]));
        ui->txt_oc2->setPlainText(dinhDang(list[1]));
        dvao<<ui->txt_ic1->toPlainText().replace("\n","")<<ui->txt_ic2->toPlainText().replace("\n","");
    }
    else if(len==1)
        ui->txt_oc1->setPlainText(dinhDang(list[0]));
        dvao<<ui->txt_ic1->toPlainText().replace("\n","");
//    qDebug()<<list;

        sapBai(list,dvao);
}
void  MainWindow::on_pushButton_clicked(){
    mainDrag(QPoint(400,235),QPoint(1077,687));
    microsleep(300);
    mainDrag(QPoint(936,297),QPoint(283,650));
}


void MainWindow::on_btn_ping_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->txt_server->text().replace("poker","")));
}
