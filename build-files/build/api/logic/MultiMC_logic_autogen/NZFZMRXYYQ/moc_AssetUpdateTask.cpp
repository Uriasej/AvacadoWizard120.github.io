/****************************************************************************
** Meta object code from reading C++ file 'AssetUpdateTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/minecraft/update/AssetUpdateTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetUpdateTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetUpdateTask_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetUpdateTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetUpdateTask_t qt_meta_stringdata_AssetUpdateTask = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AssetUpdateTask"
QT_MOC_LITERAL(1, 16, 18), // "assetIndexFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "assetIndexFailed"
QT_MOC_LITERAL(4, 53, 6), // "reason"
QT_MOC_LITERAL(5, 60, 12), // "assetsFailed"
QT_MOC_LITERAL(6, 73, 5) // "abort"

    },
    "AssetUpdateTask\0assetIndexFinished\0\0"
    "assetIndexFailed\0reason\0assetsFailed\0"
    "abort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetUpdateTask[] = {

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
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Bool,

       0        // eod
};

void AssetUpdateTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetUpdateTask *_t = static_cast<AssetUpdateTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->assetIndexFinished(); break;
        case 1: _t->assetIndexFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->assetsFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject AssetUpdateTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_AssetUpdateTask.data,
      qt_meta_data_AssetUpdateTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssetUpdateTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetUpdateTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetUpdateTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int AssetUpdateTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
