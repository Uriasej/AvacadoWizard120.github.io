/****************************************************************************
** Meta object code from reading C++ file 'ATLPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/modplatform/atlauncher/ATLPackInstallTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ATLPackInstallTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ATLauncher__PackInstallTask_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ATLauncher__PackInstallTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ATLauncher__PackInstallTask_t qt_meta_stringdata_ATLauncher__PackInstallTask = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ATLauncher::PackInstallTask"
QT_MOC_LITERAL(1, 28, 19), // "onDownloadSucceeded"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 16), // "onDownloadFailed"
QT_MOC_LITERAL(4, 66, 6), // "reason"
QT_MOC_LITERAL(5, 73, 16), // "onModsDownloaded"
QT_MOC_LITERAL(6, 90, 15) // "onModsExtracted"

    },
    "ATLauncher::PackInstallTask\0"
    "onDownloadSucceeded\0\0onDownloadFailed\0"
    "reason\0onModsDownloaded\0onModsExtracted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ATLauncher__PackInstallTask[] = {

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
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ATLauncher::PackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PackInstallTask *_t = static_cast<PackInstallTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDownloadSucceeded(); break;
        case 1: _t->onDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onModsDownloaded(); break;
        case 3: _t->onModsExtracted(); break;
        default: ;
        }
    }
}

const QMetaObject ATLauncher::PackInstallTask::staticMetaObject = {
    { &InstanceTask::staticMetaObject, qt_meta_stringdata_ATLauncher__PackInstallTask.data,
      qt_meta_data_ATLauncher__PackInstallTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ATLauncher::PackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ATLauncher::PackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ATLauncher__PackInstallTask.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int ATLauncher::PackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
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
