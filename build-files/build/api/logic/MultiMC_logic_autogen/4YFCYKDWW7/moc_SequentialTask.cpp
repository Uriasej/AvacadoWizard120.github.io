/****************************************************************************
** Meta object code from reading C++ file 'SequentialTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/tasks/SequentialTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SequentialTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SequentialTask_t {
    QByteArrayData data[9];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SequentialTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SequentialTask_t qt_meta_stringdata_SequentialTask = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SequentialTask"
QT_MOC_LITERAL(1, 15, 9), // "startNext"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "subTaskFailed"
QT_MOC_LITERAL(4, 40, 3), // "msg"
QT_MOC_LITERAL(5, 44, 13), // "subTaskStatus"
QT_MOC_LITERAL(6, 58, 15), // "subTaskProgress"
QT_MOC_LITERAL(7, 74, 7), // "current"
QT_MOC_LITERAL(8, 82, 5) // "total"

    },
    "SequentialTask\0startNext\0\0subTaskFailed\0"
    "msg\0subTaskStatus\0subTaskProgress\0"
    "current\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SequentialTask[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,

       0        // eod
};

void SequentialTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SequentialTask *_t = static_cast<SequentialTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startNext(); break;
        case 1: _t->subTaskFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->subTaskStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->subTaskProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SequentialTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_SequentialTask.data,
      qt_meta_data_SequentialTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SequentialTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequentialTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SequentialTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int SequentialTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
