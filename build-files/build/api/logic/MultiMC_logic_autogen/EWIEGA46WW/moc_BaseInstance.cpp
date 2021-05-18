/****************************************************************************
** Meta object code from reading C++ file 'BaseInstance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/BaseInstance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseInstance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseInstance_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseInstance_t qt_meta_stringdata_BaseInstance = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BaseInstance"
QT_MOC_LITERAL(1, 13, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "BaseInstance*"
QT_MOC_LITERAL(4, 46, 4), // "inst"
QT_MOC_LITERAL(5, 51, 17), // "launchTaskChanged"
QT_MOC_LITERAL(6, 69, 30), // "shared_qobject_ptr<LaunchTask>"
QT_MOC_LITERAL(7, 100, 20), // "runningStatusChanged"
QT_MOC_LITERAL(8, 121, 7), // "running"
QT_MOC_LITERAL(9, 129, 13), // "statusChanged"
QT_MOC_LITERAL(10, 143, 6), // "Status"
QT_MOC_LITERAL(11, 150, 4), // "from"
QT_MOC_LITERAL(12, 155, 2), // "to"
QT_MOC_LITERAL(13, 158, 11), // "iconUpdated"
QT_MOC_LITERAL(14, 170, 3) // "key"

    },
    "BaseInstance\0propertiesChanged\0\0"
    "BaseInstance*\0inst\0launchTaskChanged\0"
    "shared_qobject_ptr<LaunchTask>\0"
    "runningStatusChanged\0running\0statusChanged\0"
    "Status\0from\0to\0iconUpdated\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseInstance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,
       9,    2,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   53,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void BaseInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseInstance *_t = static_cast<BaseInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< BaseInstance*(*)>(_a[1]))); break;
        case 1: _t->launchTaskChanged((*reinterpret_cast< shared_qobject_ptr<LaunchTask>(*)>(_a[1]))); break;
        case 2: _t->runningStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        case 4: _t->iconUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BaseInstance* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BaseInstance::*_t)(BaseInstance * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseInstance::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseInstance::*_t)(shared_qobject_ptr<LaunchTask> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseInstance::launchTaskChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseInstance::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseInstance::runningStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BaseInstance::*_t)(Status , Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseInstance::statusChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BaseInstance::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BaseInstance.data,
      qt_meta_data_BaseInstance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseInstance.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<BaseInstance>"))
        return static_cast< std::enable_shared_from_this<BaseInstance>*>(this);
    return QObject::qt_metacast(_clname);
}

int BaseInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BaseInstance::propertiesChanged(BaseInstance * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseInstance::launchTaskChanged(shared_qobject_ptr<LaunchTask> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseInstance::runningStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BaseInstance::statusChanged(Status _t1, Status _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
