/****************************************************************************
** Meta object code from reading C++ file 'channel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../jamin-gram/channel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_channel_t {
    const uint offsetsAndSize[26];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_channel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_channel_t qt_meta_stringdata_channel = {
    {
QT_MOC_LITERAL(0, 7), // "channel"
QT_MOC_LITERAL(8, 36), // "on_action_Get_channel_list_tr..."
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 18), // "on_creatpb_clicked"
QT_MOC_LITERAL(65, 17), // "on_joinpb_clicked"
QT_MOC_LITERAL(83, 19), // "on_Logout_triggered"
QT_MOC_LITERAL(103, 18), // "on_grouppb_clicked"
QT_MOC_LITERAL(122, 17), // "on_chatpb_clicked"
QT_MOC_LITERAL(140, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(162, 19), // "on_list_itemClicked"
QT_MOC_LITERAL(182, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(199, 4), // "item"
QT_MOC_LITERAL(204, 23) // "on_pushButton_2_clicked"

    },
    "channel\0on_action_Get_channel_list_triggered\0"
    "\0on_creatpb_clicked\0on_joinpb_clicked\0"
    "on_Logout_triggered\0on_grouppb_clicked\0"
    "on_chatpb_clicked\0on_pushButton_clicked\0"
    "on_list_itemClicked\0QListWidgetItem*\0"
    "item\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_channel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    1,   75,    2, 0x08,    8 /* Private */,
      12,    0,   78,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void channel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<channel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_action_Get_channel_list_triggered(); break;
        case 1: _t->on_creatpb_clicked(); break;
        case 2: _t->on_joinpb_clicked(); break;
        case 3: _t->on_Logout_triggered(); break;
        case 4: _t->on_grouppb_clicked(); break;
        case 5: _t->on_chatpb_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_list_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject channel::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_channel.offsetsAndSize,
    qt_meta_data_channel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_channel_t
, QtPrivate::TypeAndForceComplete<channel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *channel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *channel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_channel.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
