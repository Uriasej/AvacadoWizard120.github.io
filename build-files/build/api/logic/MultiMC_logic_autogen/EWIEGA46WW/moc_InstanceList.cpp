/****************************************************************************
** Meta object code from reading C++ file 'InstanceList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/InstanceList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstanceList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstanceList_t {
    QByteArrayData data[22];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstanceList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstanceList_t qt_meta_stringdata_InstanceList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InstanceList"
QT_MOC_LITERAL(1, 13, 13), // "dataIsInvalid"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "instancesChanged"
QT_MOC_LITERAL(4, 45, 21), // "instanceSelectRequest"
QT_MOC_LITERAL(5, 67, 10), // "instanceId"
QT_MOC_LITERAL(6, 78, 13), // "groupsChanged"
QT_MOC_LITERAL(7, 92, 13), // "QSet<QString>"
QT_MOC_LITERAL(8, 106, 6), // "groups"
QT_MOC_LITERAL(9, 113, 20), // "on_InstFolderChanged"
QT_MOC_LITERAL(10, 134, 7), // "Setting"
QT_MOC_LITERAL(11, 142, 7), // "setting"
QT_MOC_LITERAL(12, 150, 5), // "value"
QT_MOC_LITERAL(13, 156, 20), // "on_GroupStateChanged"
QT_MOC_LITERAL(14, 177, 5), // "group"
QT_MOC_LITERAL(15, 183, 9), // "collapsed"
QT_MOC_LITERAL(16, 193, 17), // "propertiesChanged"
QT_MOC_LITERAL(17, 211, 13), // "BaseInstance*"
QT_MOC_LITERAL(18, 225, 4), // "inst"
QT_MOC_LITERAL(19, 230, 15), // "providerUpdated"
QT_MOC_LITERAL(20, 246, 26), // "instanceDirContentsChanged"
QT_MOC_LITERAL(21, 273, 4) // "path"

    },
    "InstanceList\0dataIsInvalid\0\0"
    "instancesChanged\0instanceSelectRequest\0"
    "instanceId\0groupsChanged\0QSet<QString>\0"
    "groups\0on_InstFolderChanged\0Setting\0"
    "setting\0value\0on_GroupStateChanged\0"
    "group\0collapsed\0propertiesChanged\0"
    "BaseInstance*\0inst\0providerUpdated\0"
    "instanceDirContentsChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstanceList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   67,    2, 0x0a /* Public */,
      13,    2,   72,    2, 0x0a /* Public */,
      16,    1,   77,    2, 0x08 /* Private */,
      19,    0,   80,    2, 0x08 /* Private */,
      20,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QVariant,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void InstanceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstanceList *_t = static_cast<InstanceList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataIsInvalid(); break;
        case 1: _t->instancesChanged(); break;
        case 2: _t->instanceSelectRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->groupsChanged((*reinterpret_cast< QSet<QString>(*)>(_a[1]))); break;
        case 4: _t->on_InstFolderChanged((*reinterpret_cast< const Setting(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 5: _t->on_GroupStateChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->propertiesChanged((*reinterpret_cast< BaseInstance*(*)>(_a[1]))); break;
        case 7: _t->providerUpdated(); break;
        case 8: _t->instanceDirContentsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        case 6:
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
            typedef void (InstanceList::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstanceList::dataIsInvalid)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InstanceList::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstanceList::instancesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (InstanceList::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstanceList::instanceSelectRequest)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (InstanceList::*_t)(QSet<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstanceList::groupsChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject InstanceList::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_InstanceList.data,
      qt_meta_data_InstanceList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InstanceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstanceList.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int InstanceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void InstanceList::dataIsInvalid()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InstanceList::instancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InstanceList::instanceSelectRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InstanceList::groupsChanged(QSet<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
