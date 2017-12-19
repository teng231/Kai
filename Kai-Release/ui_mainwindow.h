/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionResset;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPlainTextEdit *txt_oc1;
    QPlainTextEdit *txt_oc2;
    QPlainTextEdit *txt_oc3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QSpinBox *spin_card_x;
    QSpinBox *spin_under;
    QLabel *label_6;
    QSpinBox *spin_card_y;
    QLabel *label_5;
    QSpinBox *spin_next;
    QLabel *label_7;
    QSpinBox *spin_btn;
    QSpinBox *spin_kc;
    QSpinBox *spin_btn_2;
    QWidget *tab_5;
    QSpinBox *spin_zoom_y;
    QSpinBox *spin_zoom_x;
    QSpinBox *spin_zoom_kc;
    QSpinBox *spin_zoom_x_2;
    QSpinBox *spin_zoom_y_2;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *chk_done;
    QCheckBox *chk_add_train;
    QWidget *tab_2;
    QSpinBox *spin_rec_y;
    QSpinBox *spin_rec_x;
    QLabel *label_12;
    QSpinBox *spin_rec_w;
    QSpinBox *spin_rec_h;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *spin_rec_kc_y;
    QSpinBox *spin_rec_kc_x;
    QLabel *label_17;
    QLabel *label_18;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *btn_ping;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txt_server;
    QSpinBox *spin_x;
    QSpinBox *spin_y;
    QSpinBox *spin_num;
    QLabel *label_19;
    QLabel *label_20;
    QCheckBox *chk_chedo_don;
    QCheckBox *chk_get_Image_toTrain;
    QLabel *label_21;
    QWidget *tab_4;
    QTextEdit *txt_kq_server;
    QPushButton *btn_train;
    QComboBox *cbb_load;
    QPushButton *btn_add_config;
    QPushButton *btn_add_config_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QPushButton *btn_submit;
    QPlainTextEdit *txt_ic1;
    QPlainTextEdit *txt_ic2;
    QPlainTextEdit *txt_ic3;
    QPushButton *btn_submit_auto;
    QPushButton *btn_auto_pause;
    QRadioButton *rd_auto;
    QRadioButton *rd_stop;
    QWidget *tab_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *txt_1_9;
    QLabel *txt_1_4;
    QLabel *txt_1_7;
    QLabel *txt_1_8;
    QLabel *txt_1_3;
    QLabel *txt_1_11;
    QLabel *txt_1_2;
    QLabel *txt_1_5;
    QLabel *txt_1_0;
    QLabel *txt_1_10;
    QLabel *txt_1_1;
    QLabel *txt_1_12;
    QLabel *txt_1_6;
    QLabel *txt_2_3;
    QLabel *txt_2_8;
    QLabel *txt_2_2;
    QLabel *txt_2_11;
    QLabel *txt_2_10;
    QLabel *txt_2_7;
    QLabel *txt_2_9;
    QLabel *txt_2_6;
    QLabel *txt_2_4;
    QLabel *txt_2_12;
    QLabel *txt_2_0;
    QLabel *txt_2_5;
    QLabel *txt_2_1;
    QLabel *txt_3_12;
    QLabel *txt_3_5;
    QLabel *txt_3_10;
    QLabel *txt_3_6;
    QLabel *txt_3_0;
    QLabel *txt_3_11;
    QLabel *txt_3_9;
    QLabel *txt_3_8;
    QLabel *txt_3_1;
    QLabel *txt_3_4;
    QLabel *txt_3_2;
    QLabel *txt_3_7;
    QLabel *txt_3_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1268, 131);
        MainWindow->setMouseTracking(true);
        actionResset = new QAction(MainWindow);
        actionResset->setObjectName(QStringLiteral("actionResset"));
        QFont font;
        font.setPointSize(12);
        actionResset->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(670, 0, 371, 121));
        txt_oc1 = new QPlainTextEdit(groupBox);
        txt_oc1->setObjectName(QStringLiteral("txt_oc1"));
        txt_oc1->setGeometry(QRect(10, 40, 111, 61));
        QFont font1;
        font1.setPointSize(10);
        txt_oc1->setFont(font1);
        txt_oc1->setAutoFillBackground(false);
        txt_oc2 = new QPlainTextEdit(groupBox);
        txt_oc2->setObjectName(QStringLiteral("txt_oc2"));
        txt_oc2->setGeometry(QRect(130, 40, 111, 61));
        txt_oc2->setFont(font1);
        txt_oc3 = new QPlainTextEdit(groupBox);
        txt_oc3->setObjectName(QStringLiteral("txt_oc3"));
        txt_oc3->setGeometry(QRect(250, 40, 111, 61));
        txt_oc3->setFont(font1);
        txt_oc2->raise();
        txt_oc3->raise();
        txt_oc1->raise();
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(1050, 10, 205, 111));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 41, 16));
        spin_card_x = new QSpinBox(tab);
        spin_card_x->setObjectName(QStringLiteral("spin_card_x"));
        spin_card_x->setGeometry(QRect(50, 0, 51, 24));
        spin_card_x->setMaximum(2000);
        spin_under = new QSpinBox(tab);
        spin_under->setObjectName(QStringLiteral("spin_under"));
        spin_under->setGeometry(QRect(140, 30, 51, 24));
        spin_under->setMaximum(2000);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 30, 41, 16));
        spin_card_y = new QSpinBox(tab);
        spin_card_y->setObjectName(QStringLiteral("spin_card_y"));
        spin_card_y->setGeometry(QRect(110, 0, 51, 24));
        spin_card_y->setMaximum(2000);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 41, 16));
        spin_next = new QSpinBox(tab);
        spin_next->setObjectName(QStringLiteral("spin_next"));
        spin_next->setGeometry(QRect(40, 30, 51, 24));
        spin_next->setMaximum(2000);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 60, 31, 16));
        spin_btn = new QSpinBox(tab);
        spin_btn->setObjectName(QStringLiteral("spin_btn"));
        spin_btn->setGeometry(QRect(90, 60, 51, 21));
        spin_btn->setMinimum(-50);
        spin_btn->setMaximum(2000);
        spin_kc = new QSpinBox(tab);
        spin_kc->setObjectName(QStringLiteral("spin_kc"));
        spin_kc->setGeometry(QRect(10, 56, 51, 24));
        spin_kc->setMaximum(2000);
        spin_btn_2 = new QSpinBox(tab);
        spin_btn_2->setObjectName(QStringLiteral("spin_btn_2"));
        spin_btn_2->setGeometry(QRect(140, 60, 51, 21));
        spin_btn_2->setMinimum(-50);
        spin_btn_2->setMaximum(2000);
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        spin_zoom_y = new QSpinBox(tab_5);
        spin_zoom_y->setObjectName(QStringLiteral("spin_zoom_y"));
        spin_zoom_y->setGeometry(QRect(100, 30, 48, 21));
        spin_zoom_y->setMaximum(2000);
        spin_zoom_x = new QSpinBox(tab_5);
        spin_zoom_x->setObjectName(QStringLiteral("spin_zoom_x"));
        spin_zoom_x->setGeometry(QRect(50, 30, 48, 21));
        spin_zoom_x->setMaximum(2000);
        spin_zoom_kc = new QSpinBox(tab_5);
        spin_zoom_kc->setObjectName(QStringLiteral("spin_zoom_kc"));
        spin_zoom_kc->setGeometry(QRect(150, 30, 48, 21));
        spin_zoom_kc->setMaximum(2000);
        spin_zoom_x_2 = new QSpinBox(tab_5);
        spin_zoom_x_2->setObjectName(QStringLiteral("spin_zoom_x_2"));
        spin_zoom_x_2->setGeometry(QRect(50, 60, 48, 21));
        spin_zoom_x_2->setMaximum(2000);
        spin_zoom_y_2 = new QSpinBox(tab_5);
        spin_zoom_y_2->setObjectName(QStringLiteral("spin_zoom_y_2"));
        spin_zoom_y_2->setGeometry(QRect(100, 60, 48, 21));
        spin_zoom_y_2->setMaximum(2000);
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 30, 31, 16));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 60, 31, 16));
        chk_done = new QCheckBox(tab_5);
        chk_done->setObjectName(QStringLiteral("chk_done"));
        chk_done->setGeometry(QRect(10, 0, 91, 20));
        chk_done->setChecked(false);
        chk_add_train = new QCheckBox(tab_5);
        chk_add_train->setObjectName(QStringLiteral("chk_add_train"));
        chk_add_train->setGeometry(QRect(100, 0, 81, 20));
        chk_add_train->setCheckable(true);
        chk_add_train->setChecked(false);
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        spin_rec_y = new QSpinBox(tab_2);
        spin_rec_y->setObjectName(QStringLiteral("spin_rec_y"));
        spin_rec_y->setGeometry(QRect(100, 0, 48, 21));
        spin_rec_y->setMaximum(2000);
        spin_rec_x = new QSpinBox(tab_2);
        spin_rec_x->setObjectName(QStringLiteral("spin_rec_x"));
        spin_rec_x->setGeometry(QRect(50, 0, 48, 21));
        spin_rec_x->setMaximum(2000);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 0, 41, 16));
        spin_rec_w = new QSpinBox(tab_2);
        spin_rec_w->setObjectName(QStringLiteral("spin_rec_w"));
        spin_rec_w->setGeometry(QRect(40, 30, 48, 21));
        spin_rec_w->setMaximum(2000);
        spin_rec_h = new QSpinBox(tab_2);
        spin_rec_h->setObjectName(QStringLiteral("spin_rec_h"));
        spin_rec_h->setGeometry(QRect(120, 30, 48, 21));
        spin_rec_h->setMaximum(2000);
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 30, 21, 16));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 30, 21, 16));
        spin_rec_kc_y = new QSpinBox(tab_2);
        spin_rec_kc_y->setObjectName(QStringLiteral("spin_rec_kc_y"));
        spin_rec_kc_y->setGeometry(QRect(120, 60, 48, 21));
        spin_rec_kc_y->setMaximum(2000);
        spin_rec_kc_x = new QSpinBox(tab_2);
        spin_rec_kc_x->setObjectName(QStringLiteral("spin_rec_kc_x"));
        spin_rec_kc_x->setGeometry(QRect(40, 60, 48, 21));
        spin_rec_kc_x->setMaximum(2000);
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 60, 31, 16));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 60, 31, 16));
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 201, 111));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        btn_ping = new QPushButton(tab_3);
        btn_ping->setObjectName(QStringLiteral("btn_ping"));
        btn_ping->setGeometry(QRect(170, 30, 21, 31));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 21, 16));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 40, 21, 16));
        txt_server = new QLineEdit(tab_3);
        txt_server->setObjectName(QStringLiteral("txt_server"));
        txt_server->setGeometry(QRect(10, 0, 181, 21));
        txt_server->setFont(font);
        txt_server->setLayoutDirection(Qt::RightToLeft);
        txt_server->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_x = new QSpinBox(tab_3);
        spin_x->setObjectName(QStringLiteral("spin_x"));
        spin_x->setEnabled(true);
        spin_x->setGeometry(QRect(30, 30, 61, 31));
        spin_x->setReadOnly(true);
        spin_x->setMaximum(2000);
        spin_y = new QSpinBox(tab_3);
        spin_y->setObjectName(QStringLiteral("spin_y"));
        spin_y->setEnabled(true);
        spin_y->setGeometry(QRect(110, 30, 51, 31));
        spin_y->setFont(font);
        spin_y->setReadOnly(true);
        spin_y->setMaximum(2000);
        spin_num = new QSpinBox(tab_3);
        spin_num->setObjectName(QStringLiteral("spin_num"));
        spin_num->setGeometry(QRect(40, 60, 41, 21));
        spin_num->setMinimum(1);
        spin_num->setMaximum(3);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 60, 31, 20));
        label_19->setFont(font);
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 60, 31, 20));
        label_20->setFont(font);
        chk_chedo_don = new QCheckBox(tab_3);
        chk_chedo_don->setObjectName(QStringLiteral("chk_chedo_don"));
        chk_chedo_don->setGeometry(QRect(120, 60, 21, 20));
        chk_get_Image_toTrain = new QCheckBox(tab_3);
        chk_get_Image_toTrain->setObjectName(QStringLiteral("chk_get_Image_toTrain"));
        chk_get_Image_toTrain->setGeometry(QRect(170, 60, 21, 20));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(140, 60, 31, 20));
        label_21->setFont(font);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        txt_kq_server = new QTextEdit(tab_4);
        txt_kq_server->setObjectName(QStringLiteral("txt_kq_server"));
        txt_kq_server->setGeometry(QRect(10, 10, 141, 41));
        QFont font2;
        font2.setPointSize(11);
        txt_kq_server->setFont(font2);
        btn_train = new QPushButton(tab_4);
        btn_train->setObjectName(QStringLiteral("btn_train"));
        btn_train->setGeometry(QRect(160, 10, 31, 41));
        cbb_load = new QComboBox(tab_4);
        cbb_load->setObjectName(QStringLiteral("cbb_load"));
        cbb_load->setGeometry(QRect(10, 60, 121, 21));
        cbb_load->setFont(font);
        btn_add_config = new QPushButton(tab_4);
        btn_add_config->setObjectName(QStringLiteral("btn_add_config"));
        btn_add_config->setGeometry(QRect(140, 60, 21, 21));
        btn_add_config_2 = new QPushButton(tab_4);
        btn_add_config_2->setObjectName(QStringLiteral("btn_add_config_2"));
        btn_add_config_2->setGeometry(QRect(170, 60, 21, 21));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget_3 = new QTabWidget(centralWidget);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(220, 10, 441, 111));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        btn_submit = new QPushButton(tab_6);
        btn_submit->setObjectName(QStringLiteral("btn_submit"));
        btn_submit->setGeometry(QRect(300, 20, 51, 51));
        btn_submit->setStyleSheet(QStringLiteral(""));
        txt_ic1 = new QPlainTextEdit(tab_6);
        txt_ic1->setObjectName(QStringLiteral("txt_ic1"));
        txt_ic1->setGeometry(QRect(10, 10, 91, 61));
        txt_ic1->setFont(font);
        txt_ic1->setTabChangesFocus(true);
        txt_ic2 = new QPlainTextEdit(tab_6);
        txt_ic2->setObjectName(QStringLiteral("txt_ic2"));
        txt_ic2->setGeometry(QRect(110, 10, 91, 61));
        txt_ic2->setFont(font);
        txt_ic3 = new QPlainTextEdit(tab_6);
        txt_ic3->setObjectName(QStringLiteral("txt_ic3"));
        txt_ic3->setGeometry(QRect(210, 10, 91, 61));
        txt_ic3->setFont(font);
        btn_submit_auto = new QPushButton(tab_6);
        btn_submit_auto->setObjectName(QStringLiteral("btn_submit_auto"));
        btn_submit_auto->setGeometry(QRect(360, 10, 43, 43));
        btn_submit_auto->setStyleSheet(QLatin1String(" background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20.5px;\n"
" border-color: gray;\n"
" max-width:41px;\n"
" max-height:41px;\n"
" min-width:41px;\n"
" min-height:41px;\n"
"font-weight:bold;"));
        btn_auto_pause = new QPushButton(tab_6);
        btn_auto_pause->setObjectName(QStringLiteral("btn_auto_pause"));
        btn_auto_pause->setGeometry(QRect(350, 50, 61, 31));
        btn_auto_pause->setStyleSheet(QStringLiteral(""));
        rd_auto = new QRadioButton(tab_6);
        rd_auto->setObjectName(QStringLiteral("rd_auto"));
        rd_auto->setEnabled(false);
        rd_auto->setGeometry(QRect(410, 20, 21, 20));
        rd_auto->setCheckable(true);
        rd_stop = new QRadioButton(tab_6);
        rd_stop->setObjectName(QStringLiteral("rd_stop"));
        rd_stop->setEnabled(false);
        rd_stop->setGeometry(QRect(410, 50, 21, 20));
        rd_stop->setCheckable(true);
        rd_stop->setChecked(true);
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        scrollArea = new QScrollArea(tab_7);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 431, 81));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 420, 160));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 70, 41, 16));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 20, 41, 16));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 120, 41, 16));
        txt_1_9 = new QLabel(scrollAreaWidgetContents);
        txt_1_9->setObjectName(QStringLiteral("txt_1_9"));
        txt_1_9->setGeometry(QRect(290, 10, 31, 41));
        txt_1_9->setStyleSheet(QStringLiteral(""));
        txt_1_9->setFrameShape(QFrame::StyledPanel);
        txt_1_9->setAlignment(Qt::AlignCenter);
        txt_1_9->setWordWrap(false);
        txt_1_4 = new QLabel(scrollAreaWidgetContents);
        txt_1_4->setObjectName(QStringLiteral("txt_1_4"));
        txt_1_4->setGeometry(QRect(140, 10, 31, 41));
        txt_1_4->setStyleSheet(QStringLiteral(""));
        txt_1_4->setFrameShape(QFrame::StyledPanel);
        txt_1_4->setAlignment(Qt::AlignCenter);
        txt_1_4->setWordWrap(false);
        txt_1_7 = new QLabel(scrollAreaWidgetContents);
        txt_1_7->setObjectName(QStringLiteral("txt_1_7"));
        txt_1_7->setGeometry(QRect(230, 10, 31, 41));
        txt_1_7->setStyleSheet(QStringLiteral(""));
        txt_1_7->setFrameShape(QFrame::StyledPanel);
        txt_1_7->setAlignment(Qt::AlignCenter);
        txt_1_7->setWordWrap(false);
        txt_1_8 = new QLabel(scrollAreaWidgetContents);
        txt_1_8->setObjectName(QStringLiteral("txt_1_8"));
        txt_1_8->setGeometry(QRect(260, 10, 31, 41));
        txt_1_8->setStyleSheet(QStringLiteral(""));
        txt_1_8->setFrameShape(QFrame::StyledPanel);
        txt_1_8->setAlignment(Qt::AlignCenter);
        txt_1_8->setWordWrap(false);
        txt_1_3 = new QLabel(scrollAreaWidgetContents);
        txt_1_3->setObjectName(QStringLiteral("txt_1_3"));
        txt_1_3->setGeometry(QRect(110, 10, 31, 41));
        txt_1_3->setStyleSheet(QStringLiteral(""));
        txt_1_3->setFrameShape(QFrame::StyledPanel);
        txt_1_3->setAlignment(Qt::AlignCenter);
        txt_1_3->setWordWrap(false);
        txt_1_11 = new QLabel(scrollAreaWidgetContents);
        txt_1_11->setObjectName(QStringLiteral("txt_1_11"));
        txt_1_11->setGeometry(QRect(350, 10, 31, 41));
        txt_1_11->setStyleSheet(QStringLiteral(""));
        txt_1_11->setFrameShape(QFrame::StyledPanel);
        txt_1_11->setAlignment(Qt::AlignCenter);
        txt_1_11->setWordWrap(false);
        txt_1_2 = new QLabel(scrollAreaWidgetContents);
        txt_1_2->setObjectName(QStringLiteral("txt_1_2"));
        txt_1_2->setGeometry(QRect(80, 10, 31, 41));
        txt_1_2->setStyleSheet(QStringLiteral(""));
        txt_1_2->setFrameShape(QFrame::StyledPanel);
        txt_1_2->setAlignment(Qt::AlignCenter);
        txt_1_2->setWordWrap(false);
        txt_1_5 = new QLabel(scrollAreaWidgetContents);
        txt_1_5->setObjectName(QStringLiteral("txt_1_5"));
        txt_1_5->setGeometry(QRect(170, 10, 31, 41));
        txt_1_5->setStyleSheet(QStringLiteral(""));
        txt_1_5->setFrameShape(QFrame::StyledPanel);
        txt_1_5->setAlignment(Qt::AlignCenter);
        txt_1_5->setWordWrap(false);
        txt_1_0 = new QLabel(scrollAreaWidgetContents);
        txt_1_0->setObjectName(QStringLiteral("txt_1_0"));
        txt_1_0->setGeometry(QRect(20, 10, 31, 41));
        txt_1_0->setStyleSheet(QStringLiteral(""));
        txt_1_0->setFrameShape(QFrame::StyledPanel);
        txt_1_0->setAlignment(Qt::AlignCenter);
        txt_1_0->setWordWrap(false);
        txt_1_10 = new QLabel(scrollAreaWidgetContents);
        txt_1_10->setObjectName(QStringLiteral("txt_1_10"));
        txt_1_10->setGeometry(QRect(320, 10, 31, 41));
        txt_1_10->setStyleSheet(QStringLiteral(""));
        txt_1_10->setFrameShape(QFrame::StyledPanel);
        txt_1_10->setAlignment(Qt::AlignCenter);
        txt_1_10->setWordWrap(false);
        txt_1_1 = new QLabel(scrollAreaWidgetContents);
        txt_1_1->setObjectName(QStringLiteral("txt_1_1"));
        txt_1_1->setGeometry(QRect(50, 10, 31, 41));
        txt_1_1->setStyleSheet(QStringLiteral(""));
        txt_1_1->setFrameShape(QFrame::StyledPanel);
        txt_1_1->setAlignment(Qt::AlignCenter);
        txt_1_1->setWordWrap(false);
        txt_1_12 = new QLabel(scrollAreaWidgetContents);
        txt_1_12->setObjectName(QStringLiteral("txt_1_12"));
        txt_1_12->setGeometry(QRect(380, 10, 31, 41));
        txt_1_12->setStyleSheet(QStringLiteral(""));
        txt_1_12->setFrameShape(QFrame::StyledPanel);
        txt_1_12->setAlignment(Qt::AlignCenter);
        txt_1_12->setWordWrap(false);
        txt_1_6 = new QLabel(scrollAreaWidgetContents);
        txt_1_6->setObjectName(QStringLiteral("txt_1_6"));
        txt_1_6->setGeometry(QRect(200, 10, 31, 41));
        txt_1_6->setStyleSheet(QStringLiteral(""));
        txt_1_6->setFrameShape(QFrame::StyledPanel);
        txt_1_6->setAlignment(Qt::AlignCenter);
        txt_1_6->setWordWrap(false);
        txt_2_3 = new QLabel(scrollAreaWidgetContents);
        txt_2_3->setObjectName(QStringLiteral("txt_2_3"));
        txt_2_3->setGeometry(QRect(110, 60, 31, 41));
        txt_2_3->setStyleSheet(QStringLiteral(""));
        txt_2_3->setFrameShape(QFrame::StyledPanel);
        txt_2_3->setAlignment(Qt::AlignCenter);
        txt_2_3->setWordWrap(false);
        txt_2_8 = new QLabel(scrollAreaWidgetContents);
        txt_2_8->setObjectName(QStringLiteral("txt_2_8"));
        txt_2_8->setGeometry(QRect(260, 60, 31, 41));
        txt_2_8->setStyleSheet(QStringLiteral(""));
        txt_2_8->setFrameShape(QFrame::StyledPanel);
        txt_2_8->setAlignment(Qt::AlignCenter);
        txt_2_8->setWordWrap(false);
        txt_2_2 = new QLabel(scrollAreaWidgetContents);
        txt_2_2->setObjectName(QStringLiteral("txt_2_2"));
        txt_2_2->setGeometry(QRect(80, 60, 31, 41));
        txt_2_2->setStyleSheet(QStringLiteral(""));
        txt_2_2->setFrameShape(QFrame::StyledPanel);
        txt_2_2->setAlignment(Qt::AlignCenter);
        txt_2_2->setWordWrap(false);
        txt_2_11 = new QLabel(scrollAreaWidgetContents);
        txt_2_11->setObjectName(QStringLiteral("txt_2_11"));
        txt_2_11->setGeometry(QRect(350, 60, 31, 41));
        txt_2_11->setStyleSheet(QStringLiteral(""));
        txt_2_11->setFrameShape(QFrame::StyledPanel);
        txt_2_11->setAlignment(Qt::AlignCenter);
        txt_2_11->setWordWrap(false);
        txt_2_10 = new QLabel(scrollAreaWidgetContents);
        txt_2_10->setObjectName(QStringLiteral("txt_2_10"));
        txt_2_10->setGeometry(QRect(320, 60, 31, 41));
        txt_2_10->setStyleSheet(QStringLiteral(""));
        txt_2_10->setFrameShape(QFrame::StyledPanel);
        txt_2_10->setAlignment(Qt::AlignCenter);
        txt_2_10->setWordWrap(false);
        txt_2_7 = new QLabel(scrollAreaWidgetContents);
        txt_2_7->setObjectName(QStringLiteral("txt_2_7"));
        txt_2_7->setGeometry(QRect(230, 60, 31, 41));
        txt_2_7->setStyleSheet(QStringLiteral(""));
        txt_2_7->setFrameShape(QFrame::StyledPanel);
        txt_2_7->setAlignment(Qt::AlignCenter);
        txt_2_7->setWordWrap(false);
        txt_2_9 = new QLabel(scrollAreaWidgetContents);
        txt_2_9->setObjectName(QStringLiteral("txt_2_9"));
        txt_2_9->setGeometry(QRect(290, 60, 31, 41));
        txt_2_9->setStyleSheet(QStringLiteral(""));
        txt_2_9->setFrameShape(QFrame::StyledPanel);
        txt_2_9->setAlignment(Qt::AlignCenter);
        txt_2_9->setWordWrap(false);
        txt_2_6 = new QLabel(scrollAreaWidgetContents);
        txt_2_6->setObjectName(QStringLiteral("txt_2_6"));
        txt_2_6->setGeometry(QRect(200, 60, 31, 41));
        txt_2_6->setStyleSheet(QStringLiteral(""));
        txt_2_6->setFrameShape(QFrame::StyledPanel);
        txt_2_6->setAlignment(Qt::AlignCenter);
        txt_2_6->setWordWrap(false);
        txt_2_4 = new QLabel(scrollAreaWidgetContents);
        txt_2_4->setObjectName(QStringLiteral("txt_2_4"));
        txt_2_4->setGeometry(QRect(140, 60, 31, 41));
        txt_2_4->setStyleSheet(QStringLiteral(""));
        txt_2_4->setFrameShape(QFrame::StyledPanel);
        txt_2_4->setAlignment(Qt::AlignCenter);
        txt_2_4->setWordWrap(false);
        txt_2_12 = new QLabel(scrollAreaWidgetContents);
        txt_2_12->setObjectName(QStringLiteral("txt_2_12"));
        txt_2_12->setGeometry(QRect(380, 60, 31, 41));
        txt_2_12->setStyleSheet(QStringLiteral(""));
        txt_2_12->setFrameShape(QFrame::StyledPanel);
        txt_2_12->setAlignment(Qt::AlignCenter);
        txt_2_12->setWordWrap(false);
        txt_2_0 = new QLabel(scrollAreaWidgetContents);
        txt_2_0->setObjectName(QStringLiteral("txt_2_0"));
        txt_2_0->setGeometry(QRect(20, 60, 31, 41));
        txt_2_0->setStyleSheet(QStringLiteral(""));
        txt_2_0->setFrameShape(QFrame::StyledPanel);
        txt_2_0->setAlignment(Qt::AlignCenter);
        txt_2_0->setWordWrap(false);
        txt_2_5 = new QLabel(scrollAreaWidgetContents);
        txt_2_5->setObjectName(QStringLiteral("txt_2_5"));
        txt_2_5->setGeometry(QRect(170, 60, 31, 41));
        txt_2_5->setStyleSheet(QStringLiteral(""));
        txt_2_5->setFrameShape(QFrame::StyledPanel);
        txt_2_5->setAlignment(Qt::AlignCenter);
        txt_2_5->setWordWrap(false);
        txt_2_1 = new QLabel(scrollAreaWidgetContents);
        txt_2_1->setObjectName(QStringLiteral("txt_2_1"));
        txt_2_1->setGeometry(QRect(50, 60, 31, 41));
        txt_2_1->setStyleSheet(QStringLiteral(""));
        txt_2_1->setFrameShape(QFrame::StyledPanel);
        txt_2_1->setAlignment(Qt::AlignCenter);
        txt_2_1->setWordWrap(false);
        txt_3_12 = new QLabel(scrollAreaWidgetContents);
        txt_3_12->setObjectName(QStringLiteral("txt_3_12"));
        txt_3_12->setGeometry(QRect(380, 110, 31, 41));
        txt_3_12->setStyleSheet(QStringLiteral(""));
        txt_3_12->setFrameShape(QFrame::StyledPanel);
        txt_3_12->setAlignment(Qt::AlignCenter);
        txt_3_12->setWordWrap(false);
        txt_3_5 = new QLabel(scrollAreaWidgetContents);
        txt_3_5->setObjectName(QStringLiteral("txt_3_5"));
        txt_3_5->setGeometry(QRect(170, 110, 31, 41));
        txt_3_5->setStyleSheet(QStringLiteral(""));
        txt_3_5->setFrameShape(QFrame::StyledPanel);
        txt_3_5->setAlignment(Qt::AlignCenter);
        txt_3_5->setWordWrap(false);
        txt_3_10 = new QLabel(scrollAreaWidgetContents);
        txt_3_10->setObjectName(QStringLiteral("txt_3_10"));
        txt_3_10->setGeometry(QRect(320, 110, 31, 41));
        txt_3_10->setStyleSheet(QStringLiteral(""));
        txt_3_10->setFrameShape(QFrame::StyledPanel);
        txt_3_10->setAlignment(Qt::AlignCenter);
        txt_3_10->setWordWrap(false);
        txt_3_6 = new QLabel(scrollAreaWidgetContents);
        txt_3_6->setObjectName(QStringLiteral("txt_3_6"));
        txt_3_6->setGeometry(QRect(200, 110, 31, 41));
        txt_3_6->setStyleSheet(QStringLiteral(""));
        txt_3_6->setFrameShape(QFrame::StyledPanel);
        txt_3_6->setAlignment(Qt::AlignCenter);
        txt_3_6->setWordWrap(false);
        txt_3_0 = new QLabel(scrollAreaWidgetContents);
        txt_3_0->setObjectName(QStringLiteral("txt_3_0"));
        txt_3_0->setGeometry(QRect(20, 110, 31, 41));
        txt_3_0->setStyleSheet(QStringLiteral(""));
        txt_3_0->setFrameShape(QFrame::StyledPanel);
        txt_3_0->setAlignment(Qt::AlignCenter);
        txt_3_0->setWordWrap(false);
        txt_3_11 = new QLabel(scrollAreaWidgetContents);
        txt_3_11->setObjectName(QStringLiteral("txt_3_11"));
        txt_3_11->setGeometry(QRect(350, 110, 31, 41));
        txt_3_11->setStyleSheet(QStringLiteral(""));
        txt_3_11->setFrameShape(QFrame::StyledPanel);
        txt_3_11->setAlignment(Qt::AlignCenter);
        txt_3_11->setWordWrap(false);
        txt_3_9 = new QLabel(scrollAreaWidgetContents);
        txt_3_9->setObjectName(QStringLiteral("txt_3_9"));
        txt_3_9->setGeometry(QRect(290, 110, 31, 41));
        txt_3_9->setStyleSheet(QStringLiteral(""));
        txt_3_9->setFrameShape(QFrame::StyledPanel);
        txt_3_9->setAlignment(Qt::AlignCenter);
        txt_3_9->setWordWrap(false);
        txt_3_8 = new QLabel(scrollAreaWidgetContents);
        txt_3_8->setObjectName(QStringLiteral("txt_3_8"));
        txt_3_8->setGeometry(QRect(260, 110, 31, 41));
        txt_3_8->setStyleSheet(QStringLiteral(""));
        txt_3_8->setFrameShape(QFrame::StyledPanel);
        txt_3_8->setAlignment(Qt::AlignCenter);
        txt_3_8->setWordWrap(false);
        txt_3_1 = new QLabel(scrollAreaWidgetContents);
        txt_3_1->setObjectName(QStringLiteral("txt_3_1"));
        txt_3_1->setGeometry(QRect(50, 110, 31, 41));
        txt_3_1->setStyleSheet(QStringLiteral(""));
        txt_3_1->setFrameShape(QFrame::StyledPanel);
        txt_3_1->setAlignment(Qt::AlignCenter);
        txt_3_1->setWordWrap(false);
        txt_3_4 = new QLabel(scrollAreaWidgetContents);
        txt_3_4->setObjectName(QStringLiteral("txt_3_4"));
        txt_3_4->setGeometry(QRect(140, 110, 31, 41));
        txt_3_4->setStyleSheet(QStringLiteral(""));
        txt_3_4->setFrameShape(QFrame::StyledPanel);
        txt_3_4->setAlignment(Qt::AlignCenter);
        txt_3_4->setWordWrap(false);
        txt_3_2 = new QLabel(scrollAreaWidgetContents);
        txt_3_2->setObjectName(QStringLiteral("txt_3_2"));
        txt_3_2->setGeometry(QRect(80, 110, 31, 41));
        txt_3_2->setStyleSheet(QStringLiteral(""));
        txt_3_2->setFrameShape(QFrame::StyledPanel);
        txt_3_2->setAlignment(Qt::AlignCenter);
        txt_3_2->setWordWrap(false);
        txt_3_7 = new QLabel(scrollAreaWidgetContents);
        txt_3_7->setObjectName(QStringLiteral("txt_3_7"));
        txt_3_7->setGeometry(QRect(230, 110, 31, 41));
        txt_3_7->setStyleSheet(QStringLiteral(""));
        txt_3_7->setFrameShape(QFrame::StyledPanel);
        txt_3_7->setAlignment(Qt::AlignCenter);
        txt_3_7->setWordWrap(false);
        txt_3_3 = new QLabel(scrollAreaWidgetContents);
        txt_3_3->setObjectName(QStringLiteral("txt_3_3"));
        txt_3_3->setGeometry(QRect(110, 110, 31, 41));
        txt_3_3->setStyleSheet(QStringLiteral(""));
        txt_3_3->setFrameShape(QFrame::StyledPanel);
        txt_3_3->setAlignment(Qt::AlignCenter);
        txt_3_3->setWordWrap(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget_3->addTab(tab_7, QString());
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(txt_ic1, txt_ic2);
        QWidget::setTabOrder(txt_ic2, txt_ic3);
        QWidget::setTabOrder(txt_ic3, btn_submit);
        QWidget::setTabOrder(btn_submit, txt_oc3);
        QWidget::setTabOrder(txt_oc3, txt_oc1);
        QWidget::setTabOrder(txt_oc1, txt_server);
        QWidget::setTabOrder(txt_server, txt_oc2);
        QWidget::setTabOrder(txt_oc2, spin_x);
        QWidget::setTabOrder(spin_x, spin_y);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kai", Q_NULLPTR));
        actionResset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243 t\303\255nh to\303\241n", Q_NULLPTR));
        txt_oc1->setPlaceholderText(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243 1...", Q_NULLPTR));
        txt_oc2->setPlaceholderText(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243 2...", Q_NULLPTR));
        txt_oc3->setPlaceholderText(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243 3...", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "V\341\273\213 tr\303\255:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_card_x->setToolTip(QApplication::translate("MainWindow", "X-Point b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_under->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch t\341\273\233i Point \341\273\237 d\306\260\341\273\233i", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MainWindow", "under:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_card_y->setToolTip(QApplication::translate("MainWindow", "Y-Point b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "next:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_next->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch t\341\273\233i n\303\272t ti\341\272\277p theo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "n\303\272t:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_btn->setToolTip(QApplication::translate("MainWindow", "T\341\273\215a \304\221\341\273\231 y bonus c\341\273\247a n\303\272t So Chi", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_kc->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch t\341\273\233i bot ti\341\272\277p theo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_btn_2->setToolTip(QApplication::translate("MainWindow", "T\341\273\215a \304\221\341\273\231 y bonus c\341\273\247a n\303\272t So Chi", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "V\341\273\213 tr\303\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_zoom_y->setToolTip(QApplication::translate("MainWindow", "T\341\273\215a \304\221\341\273\231 y c\341\273\247a tabs bar \304\221\341\273\203 full m\303\240n ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_zoom_x->setToolTip(QApplication::translate("MainWindow", "T\341\273\215a \304\221\341\273\231 x c\341\273\247a tabs bar \304\221\341\273\203 full m\303\240n ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_zoom_kc->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch t\341\273\233i bot th\341\273\251 2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_zoom_x_2->setToolTip(QApplication::translate("MainWindow", "Zoom out x", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_zoom_y_2->setToolTip(QApplication::translate("MainWindow", "Zoom out y", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("MainWindow", "In:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Out:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chk_done->setToolTip(QApplication::translate("MainWindow", "Show nh\303\243n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chk_done->setText(QApplication::translate("MainWindow", "Show/Hide", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chk_add_train->setToolTip(QApplication::translate("MainWindow", "T\341\273\261 h\341\273\215c h\341\273\217i", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chk_add_train->setText(QApplication::translate("MainWindow", "Learning", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "T.S\341\273\221", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_rec_y->setToolTip(QApplication::translate("MainWindow", "Y-Point full m\303\240n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_rec_x->setToolTip(QApplication::translate("MainWindow", "X-Point full m\303\240n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("MainWindow", "Point:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_rec_w->setToolTip(QApplication::translate("MainWindow", "\304\220\341\273\231 r\341\273\231ng c\341\272\247n ch\341\273\245p", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_rec_h->setToolTip(QApplication::translate("MainWindow", "\304\220\341\273\231 cao c\341\272\247n ch\341\273\245p", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("MainWindow", "w:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "h:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_rec_kc_y->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch d\341\273\215c", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_rec_kc_x->setToolTip(QApplication::translate("MainWindow", "Kho\341\272\243ng c\303\241ch ngang", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("MainWindow", "kc_x", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "kc_y", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Rec", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_ping->setToolTip(QApplication::translate("MainWindow", "Ping server v\303\254 ch\341\272\241y tr\303\252n AWS", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_ping->setText(QApplication::translate("MainWindow", "P", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">X:</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Y:</span></p></body></html>", Q_NULLPTR));
        txt_server->setText(QString());
#ifndef QT_NO_TOOLTIP
        spin_x->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_num->setToolTip(QApplication::translate("MainWindow", "S\341\273\221 bot", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("MainWindow", "Num:", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\304\220\306\241n:", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        chk_chedo_don->setStatusTip(QApplication::translate("MainWindow", "N\341\272\277u click th\303\254 ch\341\272\277 \304\221\341\273\231 \304\221\341\272\245u \304\221\306\241n k\341\273\203 c\341\272\243 v\341\273\233i 3 bots", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        chk_chedo_don->setText(QString());
#ifndef QT_NO_STATUSTIP
        chk_get_Image_toTrain->setStatusTip(QApplication::translate("MainWindow", "Ch\341\273\245p \341\272\243nh", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        chk_get_Image_toTrain->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Get I:", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Server", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_train->setToolTip(QApplication::translate("MainWindow", "Retrain l\341\272\241i n\341\272\277u learning k\303\255ch ho\341\272\241t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_train->setText(QApplication::translate("MainWindow", "T", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_add_config->setToolTip(QApplication::translate("MainWindow", "Retrain l\341\272\241i n\341\272\277u learning k\303\255ch ho\341\272\241t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_add_config->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_add_config_2->setToolTip(QApplication::translate("MainWindow", "Retrain l\341\272\241i n\341\272\277u learning k\303\255ch ho\341\272\241t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_add_config_2->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "D\341\273\257 li\341\273\207u t\341\273\253 AI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_submit->setToolTip(QApplication::translate("MainWindow", "Ch\341\272\241y ch\306\260\306\241ng tr\303\254nh b\341\272\261ng nh\341\272\255p tay", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_submit->setText(QApplication::translate("MainWindow", "Go!", Q_NULLPTR));
        txt_ic1->setPlainText(QString());
        txt_ic1->setPlaceholderText(QApplication::translate("MainWindow", "B\341\273\231 1...", Q_NULLPTR));
        txt_ic2->setPlainText(QString());
        txt_ic2->setPlaceholderText(QApplication::translate("MainWindow", "B\341\273\231 2...", Q_NULLPTR));
        txt_ic3->setPlainText(QString());
        txt_ic3->setPlaceholderText(QApplication::translate("MainWindow", "B\341\273\231 3...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_submit_auto->setToolTip(QApplication::translate("MainWindow", "Ch\306\241i auto \341\272\245n 1 l\341\272\247n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_submit_auto->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_auto_pause->setToolTip(QApplication::translate("MainWindow", "T\341\272\241m d\341\273\253ng auto", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_auto_pause->setText(QApplication::translate("MainWindow", "pause", Q_NULLPTR));
        rd_auto->setText(QString());
        rd_stop->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Nh\341\272\255p tay", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "C:2", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "C:1", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "C:3", Q_NULLPTR));
        txt_1_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        txt_1_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        txt_1_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        txt_1_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        txt_1_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        txt_1_11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        txt_1_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        txt_1_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        txt_1_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        txt_1_10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        txt_1_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        txt_1_12->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        txt_1_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        txt_2_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        txt_2_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        txt_2_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        txt_2_11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        txt_2_10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        txt_2_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        txt_2_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        txt_2_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        txt_2_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        txt_2_12->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        txt_2_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        txt_2_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        txt_2_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        txt_3_12->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        txt_3_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        txt_3_10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        txt_3_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        txt_3_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        txt_3_11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        txt_3_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        txt_3_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        txt_3_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        txt_3_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        txt_3_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        txt_3_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        txt_3_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Nh\341\272\255p t\341\273\261 \304\221\341\273\231ng", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
