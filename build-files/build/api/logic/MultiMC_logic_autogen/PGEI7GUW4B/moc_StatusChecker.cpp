/****************************************************************************
** Meta object code from reading C++ file 'StatusChecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/status/StatusChecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatusChecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusChecker_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusChecker_t qt_meta_stringdata_StatusChecker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StatusChecker"
QT_MOC_LITERAL(1, 14, 13), // "statusLoading"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "loading"
QT_MOC_LITERAL(4, 37, 13), // "statusChanged"
QT_MOC_LITERAL(5, 51, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(6, 73, 9), // "newStatus"
QT_MOC_LITERAL(7, 83, 12), // "reloadStatus"
QT_MOC_LITERAL(8, 96, 22), // "statusDownloadFinished"
QT_MOC_LITERAL(9, 119, 20), // "statusDownloadFailed"
QT_MOC_LITERAL(10, 140, 6), // "reason"
QT_MOC_LITERAL(11, 147, 7), // "succeed"
QT_MOC_LITERAL(12, 155, 4), // "fail"
QT_MOC_LITERAL(13, 160, 8) // "errorMsg"

    },
    "StatusChecker\0statusLoading\0\0loading\0"
    "statusChanged\0QMap<QString,QString>\0"
    "newStatus\0reloadStatus\0statusDownloadFinished\0"
    "statusDownloadFailed\0reason\0succeed\0"
    "fail\0errorMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x09 /* Protected */,
       9,    1,   57,    2, 0x09 /* Protected */,
      11,    0,   60,    2, 0x09 /* Protected */,
      12,    1,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void StatusChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StatusChecker *_t = static_cast<StatusChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 2: _t->reloadStatus(); break;
        case 3: _t->statusDownloadFinished(); break;
        case 4: _t->statusDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->succeed(); break;
        case 6: _t->fail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StatusChecker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusChecker::statusLoading)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StatusChecker::*_t)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusChecker::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject StatusChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StatusChecker.data,
      qt_meta_data_StatusChecker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StatusChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void StatusChecker::statusLoading(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusChecker::statusChanged(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
