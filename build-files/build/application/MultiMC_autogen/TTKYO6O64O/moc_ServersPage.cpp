/****************************************************************************
** Meta object code from reading C++ file 'ServersPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/instance/ServersPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServersPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServersPage_t {
    QByteArrayData data[23];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServersPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServersPage_t qt_meta_stringdata_ServersPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ServersPage"
QT_MOC_LITERAL(1, 12, 14), // "currentChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "current"
QT_MOC_LITERAL(4, 36, 8), // "previous"
QT_MOC_LITERAL(5, 45, 11), // "rowsRemoved"
QT_MOC_LITERAL(6, 57, 6), // "parent"
QT_MOC_LITERAL(7, 64, 5), // "first"
QT_MOC_LITERAL(8, 70, 4), // "last"
QT_MOC_LITERAL(9, 75, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(10, 98, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(11, 124, 26), // "on_actionMove_Up_triggered"
QT_MOC_LITERAL(12, 151, 28), // "on_actionMove_Down_triggered"
QT_MOC_LITERAL(13, 180, 23), // "on_RunningState_changed"
QT_MOC_LITERAL(14, 204, 7), // "running"
QT_MOC_LITERAL(15, 212, 10), // "nameEdited"
QT_MOC_LITERAL(16, 223, 4), // "name"
QT_MOC_LITERAL(17, 228, 13), // "addressEdited"
QT_MOC_LITERAL(18, 242, 7), // "address"
QT_MOC_LITERAL(19, 250, 20), // "resourceIndexChanged"
QT_MOC_LITERAL(20, 271, 5), // "index"
QT_MOC_LITERAL(21, 277, 15), // "ShowContextMenu"
QT_MOC_LITERAL(22, 293, 3) // "pos"

    },
    "ServersPage\0currentChanged\0\0current\0"
    "previous\0rowsRemoved\0parent\0first\0"
    "last\0on_actionAdd_triggered\0"
    "on_actionRemove_triggered\0"
    "on_actionMove_Up_triggered\0"
    "on_actionMove_Down_triggered\0"
    "on_RunningState_changed\0running\0"
    "nameEdited\0name\0addressEdited\0address\0"
    "resourceIndexChanged\0index\0ShowContextMenu\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServersPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x08 /* Private */,
       5,    3,   74,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      15,    1,   88,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,
      19,    1,   94,    2, 0x08 /* Private */,
      21,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QPoint,   22,

       0        // eod
};

void ServersPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServersPage *_t = static_cast<ServersPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->on_actionAdd_triggered(); break;
        case 3: _t->on_actionRemove_triggered(); break;
        case 4: _t->on_actionMove_Up_triggered(); break;
        case 5: _t->on_actionMove_Down_triggered(); break;
        case 6: _t->on_RunningState_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->nameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->addressEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->resourceIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ServersPage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ServersPage.data,
      qt_meta_data_ServersPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServersPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServersPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServersPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ServersPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
