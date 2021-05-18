/****************************************************************************
** Meta object code from reading C++ file 'DownloadTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/updater/DownloadTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DownloadTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoUpdate__DownloadTask_t {
    QByteArrayData data[10];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoUpdate__DownloadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoUpdate__DownloadTask_t qt_meta_stringdata_GoUpdate__DownloadTask = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GoUpdate::DownloadTask"
QT_MOC_LITERAL(1, 23, 28), // "processDownloadedVersionInfo"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 19), // "vinfoDownloadFailed"
QT_MOC_LITERAL(4, 73, 20), // "fileDownloadFinished"
QT_MOC_LITERAL(5, 94, 18), // "fileDownloadFailed"
QT_MOC_LITERAL(6, 113, 6), // "reason"
QT_MOC_LITERAL(7, 120, 27), // "fileDownloadProgressChanged"
QT_MOC_LITERAL(8, 148, 7), // "current"
QT_MOC_LITERAL(9, 156, 5) // "total"

    },
    "GoUpdate::DownloadTask\0"
    "processDownloadedVersionInfo\0\0"
    "vinfoDownloadFailed\0fileDownloadFinished\0"
    "fileDownloadFailed\0reason\0"
    "fileDownloadProgressChanged\0current\0"
    "total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoUpdate__DownloadTask[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    2,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,

       0        // eod
};

void GoUpdate::DownloadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadTask *_t = static_cast<DownloadTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processDownloadedVersionInfo(); break;
        case 1: _t->vinfoDownloadFailed(); break;
        case 2: _t->fileDownloadFinished(); break;
        case 3: _t->fileDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->fileDownloadProgressChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject GoUpdate::DownloadTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_GoUpdate__DownloadTask.data,
      qt_meta_data_GoUpdate__DownloadTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GoUpdate::DownloadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoUpdate::DownloadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoUpdate__DownloadTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int GoUpdate::DownloadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
