/****************************************************************************
** Meta object code from reading C++ file 'AtlListModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/modplatform/atlauncher/AtlListModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AtlListModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Atl__ListModel_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Atl__ListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Atl__ListModel_t qt_meta_stringdata_Atl__ListModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Atl::ListModel"
QT_MOC_LITERAL(1, 15, 15), // "requestFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "requestFailed"
QT_MOC_LITERAL(4, 46, 6), // "reason"
QT_MOC_LITERAL(5, 53, 10), // "logoFailed"
QT_MOC_LITERAL(6, 64, 4), // "logo"
QT_MOC_LITERAL(7, 69, 10), // "logoLoaded"
QT_MOC_LITERAL(8, 80, 3) // "out"

    },
    "Atl::ListModel\0requestFinished\0\0"
    "requestFailed\0reason\0logoFailed\0logo\0"
    "logoLoaded\0out"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Atl__ListModel[] = {

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
       5,    1,   38,    2, 0x08 /* Private */,
       7,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QIcon,    6,    8,

       0        // eod
};

void Atl::ListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListModel *_t = static_cast<ListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestFinished(); break;
        case 1: _t->requestFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->logoFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->logoLoaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Atl::ListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Atl__ListModel.data,
      qt_meta_data_Atl__ListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Atl::ListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Atl::ListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Atl__ListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Atl::ListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
