/****************************************************************************
** Meta object code from reading C++ file 'ServerStatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/widgets/ServerStatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerStatus_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerStatus_t qt_meta_stringdata_ServerStatus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerStatus"
QT_MOC_LITERAL(1, 13, 12), // "reloadStatus"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "StatusChanged"
QT_MOC_LITERAL(4, 41, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(5, 63, 8), // "statuses"
QT_MOC_LITERAL(6, 72, 15), // "StatusReloading"
QT_MOC_LITERAL(7, 88, 12), // "is_reloading"
QT_MOC_LITERAL(8, 101, 7) // "clicked"

    },
    "ServerStatus\0reloadStatus\0\0StatusChanged\0"
    "QMap<QString,QString>\0statuses\0"
    "StatusReloading\0is_reloading\0clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerStatus[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void ServerStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerStatus *_t = static_cast<ServerStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadStatus(); break;
        case 1: _t->StatusChanged((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1]))); break;
        case 2: _t->StatusReloading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ServerStatus::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ServerStatus.data,
      qt_meta_data_ServerStatus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServerStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerStatus.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ServerStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
