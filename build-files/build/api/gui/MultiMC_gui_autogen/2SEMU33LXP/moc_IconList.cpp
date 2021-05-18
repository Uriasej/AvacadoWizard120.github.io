/****************************************************************************
** Meta object code from reading C++ file 'IconList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/gui/icons/IconList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IconList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IconList_t {
    QByteArrayData data[11];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IconList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IconList_t qt_meta_stringdata_IconList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "IconList"
QT_MOC_LITERAL(1, 9, 11), // "iconUpdated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "key"
QT_MOC_LITERAL(4, 26, 16), // "directoryChanged"
QT_MOC_LITERAL(5, 43, 4), // "path"
QT_MOC_LITERAL(6, 48, 11), // "fileChanged"
QT_MOC_LITERAL(7, 60, 14), // "SettingChanged"
QT_MOC_LITERAL(8, 75, 7), // "Setting"
QT_MOC_LITERAL(9, 83, 7), // "setting"
QT_MOC_LITERAL(10, 91, 5) // "value"

    },
    "IconList\0iconUpdated\0\0key\0directoryChanged\0"
    "path\0fileChanged\0SettingChanged\0Setting\0"
    "setting\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IconList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x09 /* Protected */,
       7,    2,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QVariant,    9,   10,

       0        // eod
};

void IconList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IconList *_t = static_cast<IconList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->SettingChanged((*reinterpret_cast< const Setting(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IconList::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconList::iconUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IconList::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_IconList.data,
      qt_meta_data_IconList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IconList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IconList.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IIconList"))
        return static_cast< IIconList*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int IconList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void IconList::iconUpdated(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
