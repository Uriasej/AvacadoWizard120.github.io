/****************************************************************************
** Meta object code from reading C++ file 'LoggedProcess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/LoggedProcess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoggedProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoggedProcess_t {
    QByteArrayData data[21];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoggedProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoggedProcess_t qt_meta_stringdata_LoggedProcess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LoggedProcess"
QT_MOC_LITERAL(1, 14, 3), // "log"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "lines"
QT_MOC_LITERAL(4, 25, 18), // "MessageLevel::Enum"
QT_MOC_LITERAL(5, 44, 5), // "level"
QT_MOC_LITERAL(6, 50, 12), // "stateChanged"
QT_MOC_LITERAL(7, 63, 20), // "LoggedProcess::State"
QT_MOC_LITERAL(8, 84, 5), // "state"
QT_MOC_LITERAL(9, 90, 4), // "kill"
QT_MOC_LITERAL(10, 95, 9), // "on_stdErr"
QT_MOC_LITERAL(11, 105, 9), // "on_stdOut"
QT_MOC_LITERAL(12, 115, 7), // "on_exit"
QT_MOC_LITERAL(13, 123, 9), // "exit_code"
QT_MOC_LITERAL(14, 133, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(15, 154, 6), // "status"
QT_MOC_LITERAL(16, 161, 8), // "on_error"
QT_MOC_LITERAL(17, 170, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(18, 193, 5), // "error"
QT_MOC_LITERAL(19, 199, 14), // "on_stateChange"
QT_MOC_LITERAL(20, 214, 22) // "QProcess::ProcessState"

    },
    "LoggedProcess\0log\0\0lines\0MessageLevel::Enum\0"
    "level\0stateChanged\0LoggedProcess::State\0"
    "state\0kill\0on_stdErr\0on_stdOut\0on_exit\0"
    "exit_code\0QProcess::ExitStatus\0status\0"
    "on_error\0QProcess::ProcessError\0error\0"
    "on_stateChange\0QProcess::ProcessState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoggedProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    2,   65,    2, 0x08 /* Private */,
      16,    1,   70,    2, 0x08 /* Private */,
      19,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,    2,

       0        // eod
};

void LoggedProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoggedProcess *_t = static_cast<LoggedProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->log((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< MessageLevel::Enum(*)>(_a[2]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< LoggedProcess::State(*)>(_a[1]))); break;
        case 2: _t->kill(); break;
        case 3: _t->on_stdErr(); break;
        case 4: _t->on_stdOut(); break;
        case 5: _t->on_exit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->on_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 7: _t->on_stateChange((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LoggedProcess::*_t)(QStringList , MessageLevel::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoggedProcess::log)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoggedProcess::*_t)(LoggedProcess::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoggedProcess::stateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LoggedProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_LoggedProcess.data,
      qt_meta_data_LoggedProcess,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoggedProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoggedProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoggedProcess.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int LoggedProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LoggedProcess::log(QStringList _t1, MessageLevel::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoggedProcess::stateChanged(LoggedProcess::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
