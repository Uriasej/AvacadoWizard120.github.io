/****************************************************************************
** Meta object code from reading C++ file 'FtbListModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/modplatform/ftb/FtbListModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FtbListModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ftb__ListModel_t {
    QByteArrayData data[13];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ftb__ListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ftb__ListModel_t qt_meta_stringdata_Ftb__ListModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Ftb::ListModel"
QT_MOC_LITERAL(1, 15, 13), // "performSearch"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "searchRequestFinished"
QT_MOC_LITERAL(4, 52, 19), // "searchRequestFailed"
QT_MOC_LITERAL(5, 72, 6), // "reason"
QT_MOC_LITERAL(6, 79, 11), // "requestPack"
QT_MOC_LITERAL(7, 91, 19), // "packRequestFinished"
QT_MOC_LITERAL(8, 111, 17), // "packRequestFailed"
QT_MOC_LITERAL(9, 129, 10), // "logoFailed"
QT_MOC_LITERAL(10, 140, 4), // "logo"
QT_MOC_LITERAL(11, 145, 10), // "logoLoaded"
QT_MOC_LITERAL(12, 156, 5) // "stale"

    },
    "Ftb::ListModel\0performSearch\0\0"
    "searchRequestFinished\0searchRequestFailed\0"
    "reason\0requestPack\0packRequestFinished\0"
    "packRequestFailed\0logoFailed\0logo\0"
    "logoLoaded\0stale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ftb__ListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   12,

       0        // eod
};

void Ftb::ListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListModel *_t = static_cast<ListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->performSearch(); break;
        case 1: _t->searchRequestFinished(); break;
        case 2: _t->searchRequestFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->requestPack(); break;
        case 4: _t->packRequestFinished(); break;
        case 5: _t->packRequestFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->logoFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->logoLoaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Ftb::ListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Ftb__ListModel.data,
      qt_meta_data_Ftb__ListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ftb::ListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ftb::ListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ftb__ListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Ftb::ListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
