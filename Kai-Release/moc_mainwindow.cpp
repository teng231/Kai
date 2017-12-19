/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "updateResult"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "i"
QT_MOC_LITERAL(4, 27, 4), // "list"
QT_MOC_LITERAL(5, 32, 12), // "goNextSignal"
QT_MOC_LITERAL(6, 45, 21), // "on_btn_submit_clicked"
QT_MOC_LITERAL(7, 67, 13), // "replyFinished"
QT_MOC_LITERAL(8, 81, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 96, 19), // "on_btn_ping_clicked"
QT_MOC_LITERAL(10, 116, 6), // "update"
QT_MOC_LITERAL(11, 123, 20), // "on_btn_train_clicked"
QT_MOC_LITERAL(12, 144, 5), // "doAll"
QT_MOC_LITERAL(13, 150, 6), // "goNext"
QT_MOC_LITERAL(14, 157, 26), // "on_btn_submit_auto_clicked"
QT_MOC_LITERAL(15, 184, 17), // "activateAutoClick"
QT_MOC_LITERAL(16, 202, 25), // "on_btn_auto_pause_clicked"
QT_MOC_LITERAL(17, 228, 30), // "on_cbb_load_currentTextChanged"
QT_MOC_LITERAL(18, 259, 4), // "arg1"
QT_MOC_LITERAL(19, 264, 25), // "on_btn_add_config_clicked"
QT_MOC_LITERAL(20, 290, 27) // "on_btn_add_config_2_clicked"

    },
    "MainWindow\0updateResult\0\0i\0list\0"
    "goNextSignal\0on_btn_submit_clicked\0"
    "replyFinished\0QNetworkReply*\0"
    "on_btn_ping_clicked\0update\0"
    "on_btn_train_clicked\0doAll\0goNext\0"
    "on_btn_submit_auto_clicked\0activateAutoClick\0"
    "on_btn_auto_pause_clicked\0"
    "on_cbb_load_currentTextChanged\0arg1\0"
    "on_btn_add_config_clicked\0"
    "on_btn_add_config_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   95,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    2,  100,    2, 0x08 /* Private */,
      11,    0,  105,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->goNextSignal(); break;
        case 2: _t->on_btn_submit_clicked(); break;
        case 3: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->on_btn_ping_clicked(); break;
        case 5: _t->update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 6: _t->on_btn_train_clicked(); break;
        case 7: _t->doAll(); break;
        case 8: _t->goNext(); break;
        case 9: _t->on_btn_submit_auto_clicked(); break;
        case 10: _t->activateAutoClick(); break;
        case 11: _t->on_btn_auto_pause_clicked(); break;
        case 12: _t->on_cbb_load_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_btn_add_config_clicked(); break;
        case 14: _t->on_btn_add_config_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(int , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::updateResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::goNextSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateResult(int _t1, QStringList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::goNextSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
