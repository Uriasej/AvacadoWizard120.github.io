/****************************************************************************
** Meta object code from reading C++ file 'LaunchController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/LaunchController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LaunchController_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LaunchController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LaunchController_t qt_meta_stringdata_LaunchController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LaunchController"
QT_MOC_LITERAL(1, 17, 14), // "readyForLaunch"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "onSucceeded"
QT_MOC_LITERAL(4, 45, 8), // "onFailed"
QT_MOC_LITERAL(5, 54, 6), // "reason"
QT_MOC_LITERAL(6, 61, 19), // "onProgressRequested"
QT_MOC_LITERAL(7, 81, 5), // "Task*"
QT_MOC_LITERAL(8, 87, 4) // "task"

    },
    "LaunchController\0readyForLaunch\0\0"
    "onSucceeded\0onFailed\0reason\0"
    "onProgressRequested\0Task*\0task"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LaunchController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void LaunchController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LaunchController *_t = static_cast<LaunchController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyForLaunch(); break;
        case 1: _t->onSucceeded(); break;
        case 2: _t->onFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onProgressRequested((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Task* >(); break;
            }
            break;
        }
    }
}

const QMetaObject LaunchController::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_LaunchController.data,
      qt_meta_data_LaunchController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LaunchController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaunchController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LaunchController.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int LaunchController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
