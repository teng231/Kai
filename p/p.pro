#-------------------------------------------------
#
# Project created by QtCreator 2017-08-02T08:50:58
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET =Kai
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    mainwindow.cpp \
    mouse.c \
    deadbeef_rand.c \
    screen.c \
    calrender.cpp

HEADERS  += mainwindow.h \
    mouse.h \
    os.h \
    types.h \
    inline_keywords.h \
    microsleep.h \
    deadbeef_rand.h \
    screen.h \
    calrender.h

FORMS    += mainwindow.ui

CONFIG      -=app_bundle
CONFIG      -= x86_64

LIBS += -framework ApplicationServices
