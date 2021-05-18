/****************************************************************************
** Meta object code from reading C++ file 'JavaCheckerJob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/java/JavaCheckerJob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaCheckerJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JavaCheckerJob_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaCheckerJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaCheckerJob_t qt_meta_stringdata_JavaCheckerJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "JavaCheckerJob"
QT_MOC_LITERAL(1, 15, 12), // "partFinished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "JavaCheckResult"
QT_MOC_LITERAL(4, 45, 6) // "result"

    },
    "JavaCheckerJob\0partFinished\0\0"
    "JavaCheckResult\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaCheckerJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void JavaCheckerJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaCheckerJob *_t = static_cast<JavaCheckerJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->partFinished((*reinterpret_cast< JavaCheckResult(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject JavaCheckerJob::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_JavaCheckerJob.data,
      qt_meta_data_JavaCheckerJob,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaCheckerJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaCheckerJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaCheckerJob.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int JavaCheckerJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
