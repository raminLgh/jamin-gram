/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../jamin-gram/chat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chat_t {
    const uint offsetsAndSize[28];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_chat_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_chat_t qt_meta_stringdata_chat = {
    {
QT_MOC_LITERAL(0, 4), // "chat"
QT_MOC_LITERAL(5, 20), // "on_channelpb_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 18), // "on_grouppb_clicked"
QT_MOC_LITERAL(46, 16), // "on_addpb_clicked"
QT_MOC_LITERAL(63, 26), // "on_actionLOg_out_triggered"
QT_MOC_LITERAL(90, 33), // "on_actionGet_chat_lists_trigg..."
QT_MOC_LITERAL(124, 19), // "on_list_itemClicked"
QT_MOC_LITERAL(144, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(161, 4), // "item"
QT_MOC_LITERAL(166, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(190, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(212, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(236, 33) // "on_actionSwitch_account_trigg..."

    },
    "chat\0on_channelpb_clicked\0\0"
    "on_grouppb_clicked\0on_addpb_clicked\0"
    "on_actionLOg_out_triggered\0"
    "on_actionGet_chat_lists_triggered\0"
    "on_list_itemClicked\0QListWidgetItem*\0"
    "item\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_actionExit_triggered\0"
    "on_actionSwitch_account_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chat[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    1,   79,    2, 0x08,    6 /* Private */,
      10,    0,   82,    2, 0x08,    8 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,
      12,    0,   84,    2, 0x08,   10 /* Private */,
      13,    0,   85,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_channelpb_clicked(); break;
        case 1: _t->on_grouppb_clicked(); break;
        case 2: _t->on_addpb_clicked(); break;
        case 3: _t->on_actionLOg_out_triggered(); break;
        case 4: _t->on_actionGet_chat_lists_triggered(); break;
        case 5: _t->on_list_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_actionExit_triggered(); break;
        case 9: _t->on_actionSwitch_account_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject chat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_chat.offsetsAndSize,
    qt_meta_data_chat,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_chat_t
, QtPrivate::TypeAndForceComplete<chat, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
