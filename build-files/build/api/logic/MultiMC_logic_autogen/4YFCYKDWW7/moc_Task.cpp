/****************************************************************************
** Meta object code from reading C++ file 'Task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/tasks/Task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Task_t {
    QByteArrayData data[18];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Task"
QT_MOC_LITERAL(1, 5, 7), // "started"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "progress"
QT_MOC_LITERAL(4, 23, 7), // "current"
QT_MOC_LITERAL(5, 31, 5), // "total"
QT_MOC_LITERAL(6, 37, 8), // "finished"
QT_MOC_LITERAL(7, 46, 9), // "succeeded"
QT_MOC_LITERAL(8, 56, 6), // "failed"
QT_MOC_LITERAL(9, 63, 6), // "reason"
QT_MOC_LITERAL(10, 70, 6), // "status"
QT_MOC_LITERAL(11, 77, 5), // "start"
QT_MOC_LITERAL(12, 83, 5), // "abort"
QT_MOC_LITERAL(13, 89, 13), // "emitSucceeded"
QT_MOC_LITERAL(14, 103, 11), // "emitAborted"
QT_MOC_LITERAL(15, 115, 10), // "emitFailed"
QT_MOC_LITERAL(16, 126, 9), // "setStatus"
QT_MOC_LITERAL(17, 136, 11) // "setProgress"

    },
    "Task\0started\0\0progress\0current\0total\0"
    "finished\0succeeded\0failed\0reason\0"
    "status\0start\0abort\0emitSucceeded\0"
    "emitAborted\0emitFailed\0setStatus\0"
    "setProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Task[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    2,   80,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    0,   86,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,
      10,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x09 /* Protected */,
      14,    0,   96,    2, 0x09 /* Protected */,
      15,    1,   97,    2, 0x09 /* Protected */,
      16,    1,  100,    2, 0x0a /* Public */,
      17,    2,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Task *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->succeeded(); break;
        case 4: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->emitSucceeded(); break;
        case 9: _t->emitAborted(); break;
        case 10: _t->emitFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Task::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::succeeded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Task::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::failed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Task::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::status)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Task::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Task.data,
      qt_meta_data_Task,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Task.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Task::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Task::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Task::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Task::succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Task::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Task::status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
