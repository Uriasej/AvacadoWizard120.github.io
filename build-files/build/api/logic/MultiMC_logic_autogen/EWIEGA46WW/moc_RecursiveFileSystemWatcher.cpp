/****************************************************************************
** Meta object code from reading C++ file 'RecursiveFileSystemWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/RecursiveFileSystemWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecursiveFileSystemWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecursiveFileSystemWatcher_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecursiveFileSystemWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecursiveFileSystemWatcher_t qt_meta_stringdata_RecursiveFileSystemWatcher = {
    {
QT_MOC_LITERAL(0, 0, 26), // "RecursiveFileSystemWatcher"
QT_MOC_LITERAL(1, 27, 12), // "filesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "fileChanged"
QT_MOC_LITERAL(4, 53, 4), // "path"
QT_MOC_LITERAL(5, 58, 6), // "enable"
QT_MOC_LITERAL(6, 65, 7), // "disable"
QT_MOC_LITERAL(7, 73, 10), // "fileChange"
QT_MOC_LITERAL(8, 84, 15) // "directoryChange"

    },
    "RecursiveFileSystemWatcher\0filesChanged\0"
    "\0fileChanged\0path\0enable\0disable\0"
    "fileChange\0directoryChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecursiveFileSystemWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void RecursiveFileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecursiveFileSystemWatcher *_t = static_cast<RecursiveFileSystemWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filesChanged(); break;
        case 1: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->enable(); break;
        case 3: _t->disable(); break;
        case 4: _t->fileChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->directoryChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RecursiveFileSystemWatcher::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecursiveFileSystemWatcher::filesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RecursiveFileSystemWatcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecursiveFileSystemWatcher::fileChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RecursiveFileSystemWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RecursiveFileSystemWatcher.data,
      qt_meta_data_RecursiveFileSystemWatcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RecursiveFileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecursiveFileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecursiveFileSystemWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RecursiveFileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RecursiveFileSystemWatcher::filesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RecursiveFileSystemWatcher::fileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
