/****************************************************************************
** Meta object code from reading C++ file 'groups.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../jamin-gram/groups.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groups.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_groups_t {
    const uint offsetsAndSize[30];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_groups_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_groups_t qt_meta_stringdata_groups = {
    {
QT_MOC_LITERAL(0, 6), // "groups"
QT_MOC_LITERAL(7, 20), // "on_channelpb_clicked"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 18), // "on_creatpb_clicked"
QT_MOC_LITERAL(48, 17), // "on_joinpb_clicked"
QT_MOC_LITERAL(66, 26), // "on_actionLog_out_triggered"
QT_MOC_LITERAL(93, 33), // "on_actionGet_group_list_trigg..."
QT_MOC_LITERAL(127, 17), // "on_chatpb_clicked"
QT_MOC_LITERAL(145, 19), // "on_list_itemClicked"
QT_MOC_LITERAL(165, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(182, 4), // "item"
QT_MOC_LITERAL(187, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(211, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(233, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(257, 33) // "on_actionSwitch_account_trigg..."

    },
    "groups\0on_channelpb_clicked\0\0"
    "on_creatpb_clicked\0on_joinpb_clicked\0"
    "on_actionLog_out_triggered\0"
    "on_actionGet_group_list_triggered\0"
    "on_chatpb_clicked\0on_list_itemClicked\0"
    "QListWidgetItem*\0item\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_actionExit_triggered\0"
    "on_actionSwitch_account_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_groups[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    1,   86,    2, 0x08,    7 /* Private */,
      11,    0,   89,    2, 0x08,    9 /* Private */,
      12,    0,   90,    2, 0x08,   10 /* Private */,
      13,    0,   91,    2, 0x08,   11 /* Private */,
      14,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void groups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<groups *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_channelpb_clicked(); break;
        case 1: _t->on_creatpb_clicked(); break;
        case 2: _t->on_joinpb_clicked(); break;
        case 3: _t->on_actionLog_out_triggered(); break;
        case 4: _t->on_actionGet_group_list_triggered(); break;
        case 5: _t->on_chatpb_clicked(); break;
        case 6: _t->on_list_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionSwitch_account_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject groups::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_groups.offsetsAndSize,
    qt_meta_data_groups,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_groups_t
, QtPrivate::TypeAndForceComplete<groups, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *groups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *groups::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_groups.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int groups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
