/****************************************************************************
** Meta object code from reading C++ file 'VersionProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/VersionProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VersionProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VersionProxyModel_t {
    QByteArrayData data[14];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VersionProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VersionProxyModel_t qt_meta_stringdata_VersionProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VersionProxyModel"
QT_MOC_LITERAL(1, 18, 17), // "sourceDataChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "source_top_left"
QT_MOC_LITERAL(4, 53, 19), // "source_bottom_right"
QT_MOC_LITERAL(5, 73, 20), // "sourceAboutToBeReset"
QT_MOC_LITERAL(6, 94, 11), // "sourceReset"
QT_MOC_LITERAL(7, 106, 27), // "sourceRowsAboutToBeInserted"
QT_MOC_LITERAL(8, 134, 6), // "parent"
QT_MOC_LITERAL(9, 141, 5), // "first"
QT_MOC_LITERAL(10, 147, 4), // "last"
QT_MOC_LITERAL(11, 152, 18), // "sourceRowsInserted"
QT_MOC_LITERAL(12, 171, 26), // "sourceRowsAboutToBeRemoved"
QT_MOC_LITERAL(13, 198, 17) // "sourceRowsRemoved"

    },
    "VersionProxyModel\0sourceDataChanged\0"
    "\0source_top_left\0source_bottom_right\0"
    "sourceAboutToBeReset\0sourceReset\0"
    "sourceRowsAboutToBeInserted\0parent\0"
    "first\0last\0sourceRowsInserted\0"
    "sourceRowsAboutToBeRemoved\0sourceRowsRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VersionProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    3,   56,    2, 0x08 /* Private */,
      11,    3,   63,    2, 0x08 /* Private */,
      12,    3,   70,    2, 0x08 /* Private */,
      13,    3,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    9,   10,

       0        // eod
};

void VersionProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VersionProxyModel *_t = static_cast<VersionProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->sourceAboutToBeReset(); break;
        case 2: _t->sourceReset(); break;
        case 3: _t->sourceRowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->sourceRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject VersionProxyModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_VersionProxyModel.data,
      qt_meta_data_VersionProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VersionProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VersionProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VersionProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int VersionProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
