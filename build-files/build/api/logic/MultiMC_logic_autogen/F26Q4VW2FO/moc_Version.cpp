/****************************************************************************
** Meta object code from reading C++ file 'Version.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/meta/Version.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Version.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Meta__Version_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Meta__Version_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Meta__Version_t qt_meta_stringdata_Meta__Version = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Meta::Version"
QT_MOC_LITERAL(1, 14, 11), // "typeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "timeChanged"
QT_MOC_LITERAL(4, 39, 15) // "requiresChanged"

    },
    "Meta::Version\0typeChanged\0\0timeChanged\0"
    "requiresChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Meta__Version[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Meta::Version::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Version *_t = static_cast<Version *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->timeChanged(); break;
        case 2: _t->requiresChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Version::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Version::typeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Version::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Version::timeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Version::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Version::requiresChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Meta::Version::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Meta__Version.data,
      qt_meta_data_Meta__Version,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Meta::Version::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Meta::Version::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Meta__Version.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BaseVersion"))
        return static_cast< BaseVersion*>(this);
    if (!strcmp(_clname, "BaseEntity"))
        return static_cast< BaseEntity*>(this);
    return QObject::qt_metacast(_clname);
}

int Meta::Version::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Meta::Version::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Meta::Version::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Meta::Version::requiresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
