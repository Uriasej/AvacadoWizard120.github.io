/****************************************************************************
** Meta object code from reading C++ file 'YggdrasilTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/minecraft/auth/YggdrasilTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YggdrasilTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YggdrasilTask_t {
    QByteArrayData data[14];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YggdrasilTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YggdrasilTask_t qt_meta_stringdata_YggdrasilTask = {
    {
QT_MOC_LITERAL(0, 0, 13), // "YggdrasilTask"
QT_MOC_LITERAL(1, 14, 12), // "processReply"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "refreshTimers"
QT_MOC_LITERAL(4, 42, 9), // "heartbeat"
QT_MOC_LITERAL(5, 52, 9), // "sslErrors"
QT_MOC_LITERAL(6, 62, 16), // "QList<QSslError>"
QT_MOC_LITERAL(7, 79, 11), // "changeState"
QT_MOC_LITERAL(8, 91, 5), // "State"
QT_MOC_LITERAL(9, 97, 8), // "newState"
QT_MOC_LITERAL(10, 106, 6), // "reason"
QT_MOC_LITERAL(11, 113, 5), // "abort"
QT_MOC_LITERAL(12, 119, 14), // "abortByTimeout"
QT_MOC_LITERAL(13, 134, 5) // "state"

    },
    "YggdrasilTask\0processReply\0\0refreshTimers\0"
    "heartbeat\0sslErrors\0QList<QSslError>\0"
    "changeState\0State\0newState\0reason\0"
    "abort\0abortByTimeout\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YggdrasilTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    2,   60,    2, 0x09 /* Protected */,
       4,    0,   65,    2, 0x09 /* Protected */,
       5,    1,   66,    2, 0x09 /* Protected */,
       7,    2,   69,    2, 0x09 /* Protected */,
       7,    1,   74,    2, 0x29 /* Protected | MethodCloned */,
      11,    0,   77,    2, 0x0a /* Public */,
      12,    0,   78,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool,
    QMetaType::Void,
    0x80000000 | 8,

       0        // eod
};

void YggdrasilTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        YggdrasilTask *_t = static_cast<YggdrasilTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processReply(); break;
        case 1: _t->refreshTimers((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->heartbeat(); break;
        case 3: _t->sslErrors((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        case 4: _t->changeState((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->changeState((*reinterpret_cast< State(*)>(_a[1]))); break;
        case 6: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->abortByTimeout(); break;
        case 8: { State _r = _t->state();
            if (_a[0]) *reinterpret_cast< State*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject YggdrasilTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_YggdrasilTask.data,
      qt_meta_data_YggdrasilTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *YggdrasilTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YggdrasilTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YggdrasilTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int YggdrasilTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
