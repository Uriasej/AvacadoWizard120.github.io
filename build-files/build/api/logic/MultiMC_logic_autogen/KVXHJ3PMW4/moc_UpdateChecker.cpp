/****************************************************************************
** Meta object code from reading C++ file 'UpdateChecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/updater/UpdateChecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateChecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdateChecker_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateChecker_t qt_meta_stringdata_UpdateChecker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UpdateChecker"
QT_MOC_LITERAL(1, 14, 15), // "updateAvailable"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "GoUpdate::Status"
QT_MOC_LITERAL(4, 48, 6), // "status"
QT_MOC_LITERAL(5, 55, 17), // "channelListLoaded"
QT_MOC_LITERAL(6, 73, 13), // "noUpdateFound"
QT_MOC_LITERAL(7, 87, 19), // "updateCheckFinished"
QT_MOC_LITERAL(8, 107, 14), // "notifyNoUpdate"
QT_MOC_LITERAL(9, 122, 17), // "updateCheckFailed"
QT_MOC_LITERAL(10, 140, 24), // "chanListDownloadFinished"
QT_MOC_LITERAL(11, 165, 22), // "chanListDownloadFailed"
QT_MOC_LITERAL(12, 188, 6) // "reason"

    },
    "UpdateChecker\0updateAvailable\0\0"
    "GoUpdate::Status\0status\0channelListLoaded\0"
    "noUpdateFound\0updateCheckFinished\0"
    "notifyNoUpdate\0updateCheckFailed\0"
    "chanListDownloadFinished\0"
    "chanListDownloadFailed\0reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void UpdateChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdateChecker *_t = static_cast<UpdateChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAvailable((*reinterpret_cast< GoUpdate::Status(*)>(_a[1]))); break;
        case 1: _t->channelListLoaded(); break;
        case 2: _t->noUpdateFound(); break;
        case 3: _t->updateCheckFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateCheckFailed(); break;
        case 5: _t->chanListDownloadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->chanListDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GoUpdate::Status >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UpdateChecker::*_t)(GoUpdate::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateChecker::updateAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UpdateChecker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateChecker::channelListLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UpdateChecker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateChecker::noUpdateFound)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject UpdateChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpdateChecker.data,
      qt_meta_data_UpdateChecker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UpdateChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpdateChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UpdateChecker::updateAvailable(GoUpdate::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UpdateChecker::channelListLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UpdateChecker::noUpdateFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
