/****************************************************************************
** Meta object code from reading C++ file 'INISettingsObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/settings/INISettingsObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'INISettingsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_INISettingsObject_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_INISettingsObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_INISettingsObject_t qt_meta_stringdata_INISettingsObject = {
    {
QT_MOC_LITERAL(0, 0, 17), // "INISettingsObject"
QT_MOC_LITERAL(1, 18, 13), // "changeSetting"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "Setting"
QT_MOC_LITERAL(4, 41, 7), // "setting"
QT_MOC_LITERAL(5, 49, 5), // "value"
QT_MOC_LITERAL(6, 55, 12) // "resetSetting"

    },
    "INISettingsObject\0changeSetting\0\0"
    "Setting\0setting\0value\0resetSetting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_INISettingsObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x09 /* Protected */,
       6,    1,   29,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void INISettingsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        INISettingsObject *_t = static_cast<INISettingsObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeSetting((*reinterpret_cast< const Setting(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->resetSetting((*reinterpret_cast< const Setting(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject INISettingsObject::staticMetaObject = {
    { &SettingsObject::staticMetaObject, qt_meta_stringdata_INISettingsObject.data,
      qt_meta_data_INISettingsObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *INISettingsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *INISettingsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_INISettingsObject.stringdata0))
        return static_cast<void*>(this);
    return SettingsObject::qt_metacast(_clname);
}

int INISettingsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
