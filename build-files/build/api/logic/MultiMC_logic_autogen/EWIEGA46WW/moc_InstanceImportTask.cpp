/****************************************************************************
** Meta object code from reading C++ file 'InstanceImportTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/InstanceImportTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstanceImportTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstanceImportTask_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstanceImportTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstanceImportTask_t qt_meta_stringdata_InstanceImportTask = {
    {
QT_MOC_LITERAL(0, 0, 18), // "InstanceImportTask"
QT_MOC_LITERAL(1, 19, 17), // "downloadSucceeded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "downloadFailed"
QT_MOC_LITERAL(4, 53, 6), // "reason"
QT_MOC_LITERAL(5, 60, 23), // "downloadProgressChanged"
QT_MOC_LITERAL(6, 84, 7), // "current"
QT_MOC_LITERAL(7, 92, 5), // "total"
QT_MOC_LITERAL(8, 98, 15), // "extractFinished"
QT_MOC_LITERAL(9, 114, 14) // "extractAborted"

    },
    "InstanceImportTask\0downloadSucceeded\0"
    "\0downloadFailed\0reason\0downloadProgressChanged\0"
    "current\0total\0extractFinished\0"
    "extractAborted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstanceImportTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    2,   43,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InstanceImportTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstanceImportTask *_t = static_cast<InstanceImportTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadSucceeded(); break;
        case 1: _t->downloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->downloadProgressChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->extractFinished(); break;
        case 4: _t->extractAborted(); break;
        default: ;
        }
    }
}

const QMetaObject InstanceImportTask::staticMetaObject = {
    { &InstanceTask::staticMetaObject, qt_meta_stringdata_InstanceImportTask.data,
      qt_meta_data_InstanceImportTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InstanceImportTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceImportTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstanceImportTask.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int InstanceImportTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
