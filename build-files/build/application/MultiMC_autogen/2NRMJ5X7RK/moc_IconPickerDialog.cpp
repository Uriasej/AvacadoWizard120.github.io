/****************************************************************************
** Meta object code from reading C++ file 'IconPickerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/dialogs/IconPickerDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IconPickerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IconPickerDialog_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IconPickerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IconPickerDialog_t qt_meta_stringdata_IconPickerDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "IconPickerDialog"
QT_MOC_LITERAL(1, 17, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 50, 9), // "activated"
QT_MOC_LITERAL(5, 60, 14), // "delayed_scroll"
QT_MOC_LITERAL(6, 75, 10), // "addNewIcon"
QT_MOC_LITERAL(7, 86, 18), // "removeSelectedIcon"
QT_MOC_LITERAL(8, 105, 10) // "openFolder"

    },
    "IconPickerDialog\0selectionChanged\0\0"
    "QItemSelection\0activated\0delayed_scroll\0"
    "addNewIcon\0removeSelectedIcon\0openFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IconPickerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       4,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IconPickerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IconPickerDialog *_t = static_cast<IconPickerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelection(*)>(_a[2]))); break;
        case 1: _t->activated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->delayed_scroll((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->addNewIcon(); break;
        case 4: _t->removeSelectedIcon(); break;
        case 5: _t->openFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject IconPickerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IconPickerDialog.data,
      qt_meta_data_IconPickerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IconPickerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconPickerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IconPickerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int IconPickerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
