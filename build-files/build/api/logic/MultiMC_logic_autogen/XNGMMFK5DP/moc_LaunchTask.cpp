/****************************************************************************
** Meta object code from reading C++ file 'LaunchTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/launch/LaunchTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LaunchTask_t {
    QByteArrayData data[16];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LaunchTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LaunchTask_t qt_meta_stringdata_LaunchTask = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LaunchTask"
QT_MOC_LITERAL(1, 11, 14), // "readyForLaunch"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "requestProgress"
QT_MOC_LITERAL(4, 43, 5), // "Task*"
QT_MOC_LITERAL(5, 49, 4), // "task"
QT_MOC_LITERAL(6, 54, 14), // "requestLogging"
QT_MOC_LITERAL(7, 69, 10), // "onLogLines"
QT_MOC_LITERAL(8, 80, 5), // "lines"
QT_MOC_LITERAL(9, 86, 18), // "MessageLevel::Enum"
QT_MOC_LITERAL(10, 105, 12), // "defaultLevel"
QT_MOC_LITERAL(11, 118, 9), // "onLogLine"
QT_MOC_LITERAL(12, 128, 4), // "line"
QT_MOC_LITERAL(13, 133, 16), // "onReadyForLaunch"
QT_MOC_LITERAL(14, 150, 14), // "onStepFinished"
QT_MOC_LITERAL(15, 165, 28) // "onProgressReportingRequested"

    },
    "LaunchTask\0readyForLaunch\0\0requestProgress\0"
    "Task*\0task\0requestLogging\0onLogLines\0"
    "lines\0MessageLevel::Enum\0defaultLevel\0"
    "onLogLine\0line\0onReadyForLaunch\0"
    "onStepFinished\0onProgressReportingRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LaunchTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   69,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x2a /* Public | MethodCloned */,
      11,    2,   77,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x2a /* Public | MethodCloned */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,   12,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LaunchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LaunchTask *_t = static_cast<LaunchTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyForLaunch(); break;
        case 1: _t->requestProgress((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        case 2: _t->requestLogging(); break;
        case 3: _t->onLogLines((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< MessageLevel::Enum(*)>(_a[2]))); break;
        case 4: _t->onLogLines((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->onLogLine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< MessageLevel::Enum(*)>(_a[2]))); break;
        case 6: _t->onLogLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onReadyForLaunch(); break;
        case 8: _t->onStepFinished(); break;
        case 9: _t->onProgressReportingRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Task* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LaunchTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LaunchTask::readyForLaunch)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LaunchTask::*_t)(Task * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LaunchTask::requestProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LaunchTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LaunchTask::requestLogging)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LaunchTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_LaunchTask.data,
      qt_meta_data_LaunchTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LaunchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaunchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LaunchTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int LaunchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
void LaunchTask::readyForLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LaunchTask::requestProgress(Task * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LaunchTask::requestLogging()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
