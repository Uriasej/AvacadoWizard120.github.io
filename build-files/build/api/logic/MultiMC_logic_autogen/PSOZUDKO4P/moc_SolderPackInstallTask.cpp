/****************************************************************************
** Meta object code from reading C++ file 'SolderPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/modplatform/technic/SolderPackInstallTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolderPackInstallTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Technic__SolderPackInstallTask_t {
    QByteArrayData data[12];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Technic__SolderPackInstallTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Technic__SolderPackInstallTask_t qt_meta_stringdata_Technic__SolderPackInstallTask = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Technic::SolderPackInstallTask"
QT_MOC_LITERAL(1, 31, 16), // "versionSucceeded"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 17), // "fileListSucceeded"
QT_MOC_LITERAL(4, 67, 17), // "downloadSucceeded"
QT_MOC_LITERAL(5, 85, 14), // "downloadFailed"
QT_MOC_LITERAL(6, 100, 6), // "reason"
QT_MOC_LITERAL(7, 107, 23), // "downloadProgressChanged"
QT_MOC_LITERAL(8, 131, 7), // "current"
QT_MOC_LITERAL(9, 139, 5), // "total"
QT_MOC_LITERAL(10, 145, 15), // "extractFinished"
QT_MOC_LITERAL(11, 161, 14) // "extractAborted"

    },
    "Technic::SolderPackInstallTask\0"
    "versionSucceeded\0\0fileListSucceeded\0"
    "downloadSucceeded\0downloadFailed\0"
    "reason\0downloadProgressChanged\0current\0"
    "total\0extractFinished\0extractAborted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Technic__SolderPackInstallTask[] = {

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
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Technic::SolderPackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SolderPackInstallTask *_t = static_cast<SolderPackInstallTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->versionSucceeded(); break;
        case 1: _t->fileListSucceeded(); break;
        case 2: _t->downloadSucceeded(); break;
        case 3: _t->downloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->downloadProgressChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->extractFinished(); break;
        case 6: _t->extractAborted(); break;
        default: ;
        }
    }
}

const QMetaObject Technic::SolderPackInstallTask::staticMetaObject = {
    { &InstanceTask::staticMetaObject, qt_meta_stringdata_Technic__SolderPackInstallTask.data,
      qt_meta_data_Technic__SolderPackInstallTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Technic::SolderPackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Technic::SolderPackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Technic__SolderPackInstallTask.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int Technic::SolderPackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
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
