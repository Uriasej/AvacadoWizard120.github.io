/****************************************************************************
** Meta object code from reading C++ file 'NetJob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/net/NetJob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetJob_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetJob_t qt_meta_stringdata_NetJob = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NetJob"
QT_MOC_LITERAL(1, 7, 14), // "startMoreParts"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "executeTask"
QT_MOC_LITERAL(4, 35, 5), // "abort"
QT_MOC_LITERAL(5, 41, 12), // "partProgress"
QT_MOC_LITERAL(6, 54, 5), // "index"
QT_MOC_LITERAL(7, 60, 13), // "bytesReceived"
QT_MOC_LITERAL(8, 74, 10), // "bytesTotal"
QT_MOC_LITERAL(9, 85, 13), // "partSucceeded"
QT_MOC_LITERAL(10, 99, 10), // "partFailed"
QT_MOC_LITERAL(11, 110, 11) // "partAborted"

    },
    "NetJob\0startMoreParts\0\0executeTask\0"
    "abort\0partProgress\0index\0bytesReceived\0"
    "bytesTotal\0partSucceeded\0partFailed\0"
    "partAborted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    3,   52,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void NetJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetJob *_t = static_cast<NetJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startMoreParts(); break;
        case 1: _t->executeTask(); break;
        case 2: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->partProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 4: _t->partSucceeded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->partFailed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->partAborted((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NetJob::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_NetJob.data,
      qt_meta_data_NetJob,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetJob.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int NetJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
