/****************************************************************************
** Meta object code from reading C++ file 'BaseProfiler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/tools/BaseProfiler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseProfiler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseProfiler_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseProfiler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseProfiler_t qt_meta_stringdata_BaseProfiler = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BaseProfiler"
QT_MOC_LITERAL(1, 13, 13), // "readyToLaunch"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "message"
QT_MOC_LITERAL(4, 36, 11), // "abortLaunch"
QT_MOC_LITERAL(5, 48, 14), // "beginProfiling"
QT_MOC_LITERAL(6, 63, 30), // "shared_qobject_ptr<LaunchTask>"
QT_MOC_LITERAL(7, 94, 7), // "process"
QT_MOC_LITERAL(8, 102, 14) // "abortProfiling"

    },
    "BaseProfiler\0readyToLaunch\0\0message\0"
    "abortLaunch\0beginProfiling\0"
    "shared_qobject_ptr<LaunchTask>\0process\0"
    "abortProfiling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseProfiler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void BaseProfiler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseProfiler *_t = static_cast<BaseProfiler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyToLaunch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->abortLaunch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->beginProfiling((*reinterpret_cast< shared_qobject_ptr<LaunchTask>(*)>(_a[1]))); break;
        case 3: _t->abortProfiling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BaseProfiler::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseProfiler::readyToLaunch)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseProfiler::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseProfiler::abortLaunch)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BaseProfiler::staticMetaObject = {
    { &BaseExternalTool::staticMetaObject, qt_meta_stringdata_BaseProfiler.data,
      qt_meta_data_BaseProfiler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseProfiler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseProfiler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseProfiler.stringdata0))
        return static_cast<void*>(this);
    return BaseExternalTool::qt_metacast(_clname);
}

int BaseProfiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseExternalTool::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BaseProfiler::readyToLaunch(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseProfiler::abortLaunch(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
