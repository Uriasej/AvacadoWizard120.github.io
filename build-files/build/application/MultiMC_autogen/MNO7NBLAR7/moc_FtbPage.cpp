/****************************************************************************
** Meta object code from reading C++ file 'FtbPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/modplatform/ftb/FtbPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FtbPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FtbPage_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FtbPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FtbPage_t qt_meta_stringdata_FtbPage = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FtbPage"
QT_MOC_LITERAL(1, 8, 13), // "triggerSearch"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 25), // "onSortingSelectionChanged"
QT_MOC_LITERAL(4, 49, 4), // "data"
QT_MOC_LITERAL(5, 54, 18), // "onSelectionChanged"
QT_MOC_LITERAL(6, 73, 5), // "first"
QT_MOC_LITERAL(7, 79, 6), // "second"
QT_MOC_LITERAL(8, 86, 25) // "onVersionSelectionChanged"

    },
    "FtbPage\0triggerSearch\0\0onSortingSelectionChanged\0"
    "data\0onSelectionChanged\0first\0second\0"
    "onVersionSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FtbPage[] = {

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
       5,    2,   38,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    6,    7,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void FtbPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FtbPage *_t = static_cast<FtbPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggerSearch(); break;
        case 1: _t->onSortingSelectionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onSelectionChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 3: _t->onVersionSelectionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FtbPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FtbPage.data,
      qt_meta_data_FtbPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FtbPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FtbPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FtbPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int FtbPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
