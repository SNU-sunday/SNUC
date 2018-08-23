/****************************************************************************
** Meta object code from reading C++ file 'PSNUC_Control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PSNUC_Control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PSNUC_Control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PSNUC_Control_t {
    QByteArrayData data[14];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PSNUC_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PSNUC_Control_t qt_meta_stringdata_PSNUC_Control = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PSNUC_Control"
QT_MOC_LITERAL(1, 14, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_openurlBtn_clicked"
QT_MOC_LITERAL(4, 56, 18), // "on_helpBtn_clicked"
QT_MOC_LITERAL(5, 75, 18), // "system_time_update"
QT_MOC_LITERAL(6, 94, 17), // "on_runBtn_clicked"
QT_MOC_LITERAL(7, 112, 18), // "on_stopBtn_clicked"
QT_MOC_LITERAL(8, 131, 16), // "on_goBtn_clicked"
QT_MOC_LITERAL(9, 148, 21), // "on_go2homeBtn_clicked"
QT_MOC_LITERAL(10, 170, 22), // "on_set2homeBtn_clicked"
QT_MOC_LITERAL(11, 193, 22), // "on_showplotBtn_clicked"
QT_MOC_LITERAL(12, 216, 19), // "on_setddBtn_clicked"
QT_MOC_LITERAL(13, 236, 22) // "on_setservoBtn_clicked"

    },
    "PSNUC_Control\0on_exitBtn_clicked\0\0"
    "on_openurlBtn_clicked\0on_helpBtn_clicked\0"
    "system_time_update\0on_runBtn_clicked\0"
    "on_stopBtn_clicked\0on_goBtn_clicked\0"
    "on_go2homeBtn_clicked\0on_set2homeBtn_clicked\0"
    "on_showplotBtn_clicked\0on_setddBtn_clicked\0"
    "on_setservoBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PSNUC_Control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PSNUC_Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PSNUC_Control *_t = static_cast<PSNUC_Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exitBtn_clicked(); break;
        case 1: _t->on_openurlBtn_clicked(); break;
        case 2: _t->on_helpBtn_clicked(); break;
        case 3: _t->system_time_update(); break;
        case 4: _t->on_runBtn_clicked(); break;
        case 5: _t->on_stopBtn_clicked(); break;
        case 6: _t->on_goBtn_clicked(); break;
        case 7: _t->on_go2homeBtn_clicked(); break;
        case 8: _t->on_set2homeBtn_clicked(); break;
        case 9: _t->on_showplotBtn_clicked(); break;
        case 10: _t->on_setddBtn_clicked(); break;
        case 11: _t->on_setservoBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PSNUC_Control::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PSNUC_Control.data,
      qt_meta_data_PSNUC_Control,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PSNUC_Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PSNUC_Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PSNUC_Control.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PSNUC_Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
