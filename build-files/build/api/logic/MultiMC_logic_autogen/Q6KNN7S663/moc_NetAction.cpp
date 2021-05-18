/****************************************************************************
** Meta object code from reading C++ file 'NetAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/net/NetAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetAction_t {
    QByteArrayData data[19];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetAction_t qt_meta_stringdata_NetAction = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NetAction"
QT_MOC_LITERAL(1, 10, 7), // "started"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "index"
QT_MOC_LITERAL(4, 25, 17), // "netActionProgress"
QT_MOC_LITERAL(5, 43, 7), // "current"
QT_MOC_LITERAL(6, 51, 5), // "total"
QT_MOC_LITERAL(7, 57, 9), // "succeeded"
QT_MOC_LITERAL(8, 67, 6), // "failed"
QT_MOC_LITERAL(9, 74, 7), // "aborted"
QT_MOC_LITERAL(10, 82, 16), // "downloadProgress"
QT_MOC_LITERAL(11, 99, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 113, 10), // "bytesTotal"
QT_MOC_LITERAL(13, 124, 13), // "downloadError"
QT_MOC_LITERAL(14, 138, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 166, 5), // "error"
QT_MOC_LITERAL(16, 172, 16), // "downloadFinished"
QT_MOC_LITERAL(17, 189, 17), // "downloadReadyRead"
QT_MOC_LITERAL(18, 207, 5) // "start"

    },
    "NetAction\0started\0\0index\0netActionProgress\0"
    "current\0total\0succeeded\0failed\0aborted\0"
    "downloadProgress\0bytesReceived\0"
    "bytesTotal\0downloadError\0"
    "QNetworkReply::NetworkError\0error\0"
    "downloadFinished\0downloadReadyRead\0"
    "start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    3,   67,    2, 0x06 /* Public */,
       7,    1,   74,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,
       9,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   83,    2, 0x09 /* Protected */,
      13,    1,   88,    2, 0x09 /* Protected */,
      16,    0,   91,    2, 0x09 /* Protected */,
      17,    0,   92,    2, 0x09 /* Protected */,
      18,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetAction *_t = static_cast<NetAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->netActionProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->succeeded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->failed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->aborted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->downloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 7: _t->downloadFinished(); break;
        case 8: _t->downloadReadyRead(); break;
        case 9: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NetAction::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetAction::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NetAction::*_t)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetAction::netActionProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NetAction::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetAction::succeeded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NetAction::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetAction::failed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NetAction::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetAction::aborted)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject NetAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetAction.data,
      qt_meta_data_NetAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void NetAction::started(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetAction::netActionProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetAction::succeeded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetAction::failed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetAction::aborted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
