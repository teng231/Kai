#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    connect(this,SIGNAL(updateResult(int,QStringList)),this,SLOT(update(int,QStringList)));
    connect(this,SIGNAL(goNextSignal()),this,SLOT(goNext()));

    configs<<"MainWindow"<<"SaoClub"<<"Vip52";

    for(int i=0;i<configs.size();i++){
        ui->cbb_load->addItem(configs[i]);
    }
    // read setting
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));

    screen=QGuiApplication::primaryScreen();
    timer=new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(doAll()));

//    string str=imageRec.loadTrain("0b_8.jpg",24,40);//0b0113.png
//    string str=imageRec.loadTrain("0b0113.png",24,40);//0b0113.png
//    qDebug()<<QString::fromStdString(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::writeSettings()
{
    QSettings settings;

    settings.beginGroup(ui->cbb_load->currentText());
    settings.setValue("card", QPoint(ui->spin_card_x->value(),ui->spin_card_y->value()));
    settings.setValue("under", ui->spin_under->value());
    settings.setValue("next", ui->spin_next->value());
    settings.setValue("btnX", ui->spin_btn->value());
    settings.setValue("btnY", ui->spin_btn_2->value());
    settings.setValue("kc_card", ui->spin_kc->value());
    settings.setValue("url", ui->txt_server->text());
    settings.setValue("zoom_x", ui->spin_zoom_x->value());
    settings.setValue("zoom_y", ui->spin_zoom_y->value());
    settings.setValue("zoom_x_out", ui->spin_zoom_x_2->value());
    settings.setValue("zoom_y_out", ui->spin_zoom_y_2->value());
    settings.setValue("zoom_kc", ui->spin_zoom_kc->value());

    settings.setValue("rect_px", ui->spin_rec_x->value());
    settings.setValue("rect_py", ui->spin_rec_y->value());
    settings.setValue("rect_h", ui->spin_rec_h->value());
    settings.setValue("rect_w", ui->spin_rec_w->value());
    settings.setValue("rect_kc_x", ui->spin_rec_kc_x->value());
    settings.setValue("rect_kc_y", ui->spin_rec_kc_y->value());
    settings.endGroup();
}

void MainWindow::readSettings(QString str)
{
    QSettings settings;
    // get curren config

    settings.beginGroup(str);
    ui->spin_card_x->setValue(settings.value("card").toPoint().x());
    ui->spin_card_y->setValue(settings.value("card").toPoint().y());
    ui->spin_next->setValue(settings.value("next").toInt());
    ui->spin_under->setValue(settings.value("under").toInt());
    ui->spin_btn->setValue(settings.value("btnX").toInt());
    ui->spin_btn_2->setValue(settings.value("btnY").toInt());
    ui->spin_kc->setValue(settings.value("kc_card").toInt());
    ui->txt_server->setText(settings.value("url").toString());
    ui->spin_zoom_x->setValue(settings.value("zoom_x").toInt());
    ui->spin_zoom_y->setValue(settings.value("zoom_y").toInt());
    ui->spin_zoom_x_2->setValue(settings.value("zoom_x_out").toInt());
    ui->spin_zoom_y_2->setValue(settings.value("zoom_y_out").toInt());
    ui->spin_zoom_kc->setValue(settings.value("zoom_kc").toInt());
    ui->spin_rec_x->setValue(settings.value("rect_px").toInt());
    ui->spin_rec_y->setValue(settings.value("rect_py").toInt());
    ui->spin_rec_h->setValue(settings.value("rect_h").toInt());
    ui->spin_rec_w->setValue(settings.value("rect_w").toInt());
    ui->spin_rec_kc_x->setValue(settings.value("rect_kc_x").toInt());
    ui->spin_rec_kc_y->setValue(settings.value("rect_kc_y").toInt());

    settings.endGroup();

    CalRender *render=new CalRender(QPoint(ui->spin_card_x->value(),ui->spin_card_y->value()),
                                    ui->spin_next->value(),ui->spin_under->value());
    startPoint=render->calAll();
    btn_lc=QPoint(ui->spin_btn->value(),ui->spin_btn_2->value());//16
//    qDebug()<<btn_lc;
    qDebug()<<this->startPoint;
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    if (true) {
        writeSettings();
        QDir dir(QDir::currentPath()+"/temp");
        dir.setNameFilters(QStringList() << "*.*");
        dir.setFilter(QDir::Files);
        foreach(QString dirFile, dir.entryList())
        {
            dir.remove(dirFile);
        }
        event->accept();
    } else {
        event->ignore();
    }
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

int MainWindow::kiemThu()
{
    QDateTime time=QDateTime::currentDateTime();
    if(ui->chk_get_Image_toTrain->isChecked())
        wf->saveFile(QGetScreen::SetToLabel(
                    screen,QPoint(btn_lc.x(),btn_lc.y())
                                 ,70,20)
                                 ,time.toString()+".png");
    return imageRec.loadTrainStart(QGetScreen::GetQImage(
                                       screen,QPoint(btn_lc.x()
                                                    ,btn_lc.y())
                                                    ,70,20));
}

void MainWindow::doAll()
{
    if(kiemThu()==1){
        doAcceppt++;
        if(doAcceppt>2){
            emptyOld();
            try {
                int num=ui->spin_num->value();
                // tiên hanh zoom
                int kc=ui->spin_zoom_kc->value();
                for(int i=0;i<num;i++){
                    mq.mainClick(QPoint(ui->spin_zoom_x->value()+i*kc,ui->spin_zoom_y->value()));
                    // zoom lên
                    mq.mainDoubleClick(QPoint(ui->spin_zoom_x->value()+i*kc,ui->spin_zoom_y->value()));
                    sleep(1);
                    captureCards(i+1);
                    mq.mainDoubleClick(QPoint(ui->spin_zoom_x_2->value(),ui->spin_zoom_y_2->value()));
                }
                bool getTrain =ui->chk_add_train->isChecked();
                if(getTrain){
                    QDir recoredDir(QDir::currentPath()+"/temp");
                    QStringList allFiles = recoredDir.entryList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst);//(QDir::Filter::Files,QDir::SortFlag::NoSort)
                    QStringList lkq;
                    if(allFiles[0]==".DS_Store") allFiles.removeFirst();
                    QString str2=ui->txt_ic1->toPlainText()+ui->txt_ic2->toPlainText()+ui->txt_ic3->toPlainText();
                    str2=str2.trimmed();
                    if(str2==""|| str2.isEmpty()){
                        string str="";
                        for(int i=0;i<allFiles.size();i++){
                            string kq=imageRec.loadTrain(QString("/temp/"+allFiles[i]).toStdString()
                                                         ,ui->spin_rec_w->value(),ui->spin_rec_h->value());
                            lkq.append(QString::fromStdString(kq));
                            str+=kq;
                        }
                        str2=QString::fromStdString(str);
                    }else{
                        str2=str2.trimmed();
                        for(int i=0;i<str2.length();i+=2)
                           lkq<<str2.mid(i,2);
                    }

                    if(num==1) wf->rewriteFileName(allFiles,lkq);

                    else if(num==2) wf->rewriteFileName(allFiles,lkq);

                    else if(num==3) wf->rewriteFileName(allFiles,lkq);
                }
                // đưa dữ liệu vào text f
//                trainer();
//                sleep(1);
                doAcceppt=0;
                emit goNextSignal();
            } catch (...) {
                QMessageBox::critical(this,tr("Lỗi chụp màn hình"),tr("Điều chỉnh kích cỡ không đúng.Click check show/hide để điều chỉnh lại")
                                      ,QMessageBox::Cancel);
            }
        }
        else if(doAcceppt==1) return;
    }
}

void MainWindow::goNext()
{
    try {
        QString cards1=ui->txt_ic1->toPlainText().trimmed(),
                cards2=ui->txt_ic2->toPlainText().trimmed(),
                cards3=ui->txt_ic3->toPlainText().trimmed(),
                server=ui->txt_server->text().append("?");

        if(!validate.kiemTra(cards1)) {
            if(validate.kt2(cards1))
            {
                server=server.append("cards1=").append(cards1).append('&');
                //  capture
    //            num++;
            }
            else {
                QMessageBox::warning(this, tr("Lỗi nhập"),
                                                  tr("Dữ liệu không chính xác tại Bộ 1."),
                                                  QMessageBox::Close);
                return;
            }
        }

        if(!validate.kiemTra(cards2)) {
            if(validate.kt2(cards2))
            {
                server=server.append("cards2=").append(cards2).append('&');

            }
            else {
                QMessageBox::warning(this, tr("Lỗi nhập"),
                                                  tr("Dữ liệu không chính xác tại Bộ 2."),
                                                  QMessageBox::Close);
                return;
            }
        }

        if(!validate.kiemTra(cards3)) {
            if(validate.kt2(cards3))
            {
                server=server.append("cards3=").append(cards3).append('&');

            }
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
        // check chế độ chơi

        if(ui->chk_chedo_don->isChecked())// nếu check sẽ la che độ đánh đơn.
        {
            server=server.append("&don=true");
        }

        if (!match.hasMatch()) {
            manager->get(QNetworkRequest(QUrl(server)));
        }
        else{
            QMessageBox::warning(this, tr("Lỗi chương trình"),
                                           tr("Lỗi nhập liệu không chính xác."),
                                           QMessageBox::Close);
        }
    } catch (...) {
        return;
    }
}


void MainWindow::sapBai(QStringList list, QStringList dvao)
{
    int kc=ui->spin_kc->value();

    try{
            for(int i=0;i<list.length();i++)
            {
                // Lấy các hoán vị
                QList<int> ls= validate.sortControl(dvao[i],list[i]);
                // khoi dong ct
                mq.mainClick(QPoint(startPoint[0].x()+i*kc,startPoint[0].y()));
                for(int j=0;j<ls.size();j+=2){
                    mq.mainDrag(QPoint(startPoint[ls[j]].x()+i*kc,startPoint[ls[j]].y()) ,QPoint(startPoint[ls[j+1]].x()+i*kc,startPoint[ls[j+1]].y()));
                }
                 //so chi click
                mq.mainClick(QPoint(btn_lc.x()+8,btn_lc.y()+8));

            }

        }
        catch(...){
            QMessageBox::warning(this, tr("Lỗi chương trình"),
                                           tr("Lỗi nhập liệu không chính xác."),
                                           QMessageBox::Close);
        }
}
void MainWindow::captureCards(int vt)
{
    // Tạo list
    try {
        QList<QPoint> temp;
        int h=ui->spin_rec_h->value()
                ,w=ui->spin_rec_w->value()
                ,_x=ui->spin_rec_x->value()
                ,_y=ui->spin_rec_y->value()
                ,kc_x=ui->spin_rec_kc_x->value()
                ,kc_y=ui->spin_rec_kc_y->value();
        // tạo point
        bool ischecked= ui->chk_done->isChecked()
                ,isTrain=ui->chk_add_train->isChecked();
        for(int i=0;i<3;i++){
           temp.append(QPoint(_x+kc_x*i,_y));
        }
        for(int i=0;i<5;i++){
           temp.append(QPoint(_x+kc_x*i,_y+kc_y));
        }
        for(int i=0;i<5;i++){
           temp.append(QPoint(_x+kc_x*i,_y+kc_y*2));
        }
        QStringList strl;
        if(vt==1){
            if(ischecked){
                ui->txt_1_0->setPixmap(QGetScreen::SetToLabel(screen,temp[0],w,h));
                ui->txt_1_1->setPixmap(QGetScreen::SetToLabel(screen,temp[1],w,h));
                ui->txt_1_2->setPixmap(QGetScreen::SetToLabel(screen,temp[2],w,h));
                ui->txt_1_3->setPixmap(QGetScreen::SetToLabel(screen,temp[3],w,h));
                ui->txt_1_4->setPixmap(QGetScreen::SetToLabel(screen,temp[4],w,h));
                ui->txt_1_5->setPixmap(QGetScreen::SetToLabel(screen,temp[5],w,h));
                ui->txt_1_6->setPixmap(QGetScreen::SetToLabel(screen,temp[6],w,h));
                ui->txt_1_7->setPixmap(QGetScreen::SetToLabel(screen,temp[7],w,h));
                ui->txt_1_8->setPixmap(QGetScreen::SetToLabel(screen,temp[8],w,h));
                ui->txt_1_9->setPixmap(QGetScreen::SetToLabel(screen,temp[9],w,h));
                ui->txt_1_10->setPixmap(QGetScreen::SetToLabel(screen,temp[10],w,h));
                ui->txt_1_11->setPixmap(QGetScreen::SetToLabel(screen,temp[11],w,h));
                ui->txt_1_12->setPixmap(QGetScreen::SetToLabel(screen,temp[12],w,h));
            }
            for(int i=0;i<13;i++){
               if(isTrain)wf->saveFile(QGetScreen::SetToLabel(screen,temp[i],w,h),QString::number(i+1+100)+".png");
                strl<<QString::fromStdString(imageRec.loadTrain(QGetScreen::GetQImage(screen,temp[i],w,h),w,h));
            }
            if(!isTrain) ui->txt_ic1->setPlainText(strl.join(""));
            }
            if(vt==2){
                if(ischecked){
                    ui->txt_2_0->setPixmap(QGetScreen::SetToLabel(screen,temp[0],w,h));
                    ui->txt_2_1->setPixmap(QGetScreen::SetToLabel(screen,temp[1],w,h));
                    ui->txt_2_2->setPixmap(QGetScreen::SetToLabel(screen,temp[2],w,h));
                    ui->txt_2_3->setPixmap(QGetScreen::SetToLabel(screen,temp[3],w,h));
                    ui->txt_2_4->setPixmap(QGetScreen::SetToLabel(screen,temp[4],w,h));
                    ui->txt_2_5->setPixmap(QGetScreen::SetToLabel(screen,temp[5],w,h));
                    ui->txt_2_6->setPixmap(QGetScreen::SetToLabel(screen,temp[6],w,h));
                    ui->txt_2_7->setPixmap(QGetScreen::SetToLabel(screen,temp[7],w,h));
                    ui->txt_2_8->setPixmap(QGetScreen::SetToLabel(screen,temp[8],w,h));
                    ui->txt_2_9->setPixmap(QGetScreen::SetToLabel(screen,temp[9],w,h));
                    ui->txt_2_10->setPixmap(QGetScreen::SetToLabel(screen,temp[10],w,h));
                    ui->txt_2_11->setPixmap(QGetScreen::SetToLabel(screen,temp[11],w,h));
                    ui->txt_2_12->setPixmap(QGetScreen::SetToLabel(screen,temp[12],w,h));
                }
                for(int i=0;i<13;i++){
                    if(isTrain)wf->saveFile(QGetScreen::SetToLabel(screen,temp[i],w,h),QString::number(i+1+200)+".png");
                    strl<<QString::fromStdString(imageRec.loadTrain(QGetScreen::GetQImage(screen,temp[i],w,h),w,h));
                }
                if(!isTrain) ui->txt_ic2->setPlainText(strl.join(""));
            }
            if(vt==3){
                if(ischecked){
                    ui->txt_3_0->setPixmap(QGetScreen::SetToLabel(screen,temp[0],w,h));
                    ui->txt_3_1->setPixmap(QGetScreen::SetToLabel(screen,temp[1],w,h));
                    ui->txt_3_2->setPixmap(QGetScreen::SetToLabel(screen,temp[2],w,h));
                    ui->txt_3_3->setPixmap(QGetScreen::SetToLabel(screen,temp[3],w,h));
                    ui->txt_3_4->setPixmap(QGetScreen::SetToLabel(screen,temp[4],w,h));
                    ui->txt_3_5->setPixmap(QGetScreen::SetToLabel(screen,temp[5],w,h));
                    ui->txt_3_6->setPixmap(QGetScreen::SetToLabel(screen,temp[6],w,h));
                    ui->txt_3_7->setPixmap(QGetScreen::SetToLabel(screen,temp[7],w,h));
                    ui->txt_3_8->setPixmap(QGetScreen::SetToLabel(screen,temp[8],w,h));
                    ui->txt_3_9->setPixmap(QGetScreen::SetToLabel(screen,temp[9],w,h));
                    ui->txt_3_10->setPixmap(QGetScreen::SetToLabel(screen,temp[10],w,h));
                    ui->txt_3_11->setPixmap(QGetScreen::SetToLabel(screen,temp[11],w,h));
                    ui->txt_3_12->setPixmap(QGetScreen::SetToLabel(screen,temp[12],w,h));
                }
                for(int i=0;i<13;i++){
                       if(isTrain)wf->saveFile(QGetScreen::SetToLabel(screen,temp[i],w,h),QString::number(i+1+300)+".png");
                      strl<<QString::fromStdString(imageRec.loadTrain(QGetScreen::GetQImage(screen,temp[i],w,h),w,h));
                }
               if(!isTrain)  ui->txt_ic3->setPlainText(strl.join(""));
            }
    } catch (...) {
        return;
    }
}

void MainWindow::on_btn_submit_clicked()
{
        goNext();
}
void MainWindow::replyFinished(QNetworkReply*reply){
    try {
        QString data=(QString) reply->readAll();
        ui->txt_kq_server->setPlainText(data);
        QStringList list=data.trimmed().split("\r\n");

        if(list.join("")=="Error: NGoại lệ của server báo Tể - code 500"){
            emptyOld();
            return;
        }

//        if(list.join("")=="Error:Bài nhập vào ko đúng - Không tạo đủ 13 quân bài enemy - code: 503"){
//            doAcceppt=1;
//            doAll();
//            return;
//        }

        int len=list.size();
        QStringList dvao;
        if(len==3){
            emit updateResult(len,list);
            dvao<<ui->txt_ic1->toPlainText().replace("\n","")
                    <<ui->txt_ic2->toPlainText().replace("\n","")
                    <<ui->txt_ic3->toPlainText().replace("\n","");
        }
        else if(len==2){
            emit updateResult(len,list);
            dvao<<ui->txt_ic1->toPlainText().replace("\n","")
                    <<ui->txt_ic2->toPlainText().replace("\n","");
        }
        else if(len==1)
            {
                emit updateResult(len,list);
                dvao<<ui->txt_ic1->toPlainText().replace("\n","");
            }
            sapBai(list,dvao);
    } catch (...) {
        QMessageBox::critical(this, tr("Cảnh báo"),
                              ("Kiểm tra các kết nối mạng. Dữ liệu xuất hiện ngoại lệ"),
                              QMessageBox::Close);
    }

}

void MainWindow::on_btn_ping_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->txt_server->text().replace("poker","")));
}

void MainWindow::update(int i, QStringList list)
{
    try {
        if(i==3){
            ui->txt_oc1->setPlainText(validate.dinhDang(list[0]));
            ui->txt_oc2->setPlainText(validate.dinhDang(list[1]));
            ui->txt_oc3->setPlainText(validate.dinhDang(list[2]));
        }
        if(i==2){
            ui->txt_oc1->setPlainText(validate.dinhDang(list[0]));
            ui->txt_oc2->setPlainText(validate.dinhDang(list[1]));
        }
        if(i==1){
            ui->txt_oc1->setPlainText(validate.dinhDang(list[0]));
        }
    } catch (...) {
        return;
    }
}

void MainWindow::on_btn_train_clicked()
{
    try {

        imageRec.trainAll(ui->spin_rec_w->value(),ui->spin_rec_h->value());
        QMessageBox::critical(this, tr("Cảnh báo"),
                                          ("Đã retrain file updated classifier start number symbol model"),
                                          QMessageBox::Close);


        imageRec.trainAll(ui->spin_rec_w->value(),ui->spin_rec_h->value());



    } catch (...) {
    }
}

void MainWindow::on_btn_submit_auto_clicked()
{
    timer->start(4*1000);
    if(!ui->rd_auto->isChecked())ui->rd_auto->setChecked(true);
}

void MainWindow::activateAutoClick()
{
    mq.mainClick((QPoint(629,128)));
}

void MainWindow::on_btn_auto_pause_clicked()
{
    timer->stop();
    if(!ui->rd_stop->isChecked())ui->rd_stop->setChecked(true);
}

void MainWindow::on_cbb_load_currentTextChanged(const QString &arg1)
{
    readSettings(arg1);
}

void MainWindow::on_btn_add_config_clicked()
{

}

void MainWindow::on_btn_add_config_2_clicked()
{

}
