/****************************************************************************
** Meta object code from reading C++ file 'AtlPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/modplatform/atlauncher/AtlPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AtlPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AtlPage_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AtlPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AtlPage_t qt_meta_stringdata_AtlPage = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AtlPage"
QT_MOC_LITERAL(1, 8, 13), // "triggerSearch"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "resetSearch"
QT_MOC_LITERAL(4, 35, 25), // "onSortingSelectionChanged"
QT_MOC_LITERAL(5, 61, 4), // "data"
QT_MOC_LITERAL(6, 66, 18), // "onSelectionChanged"
QT_MOC_LITERAL(7, 85, 5), // "first"
QT_MOC_LITERAL(8, 91, 6), // "second"
QT_MOC_LITERAL(9, 98, 25) // "onVersionSelectionChanged"

    },
    "AtlPage\0triggerSearch\0\0resetSearch\0"
    "onSortingSelectionChanged\0data\0"
    "onSelectionChanged\0first\0second\0"
    "onVersionSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AtlPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    2,   44,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,    8,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void AtlPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AtlPage *_t = static_cast<AtlPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggerSearch(); break;
        case 1: _t->resetSearch(); break;
        case 2: _t->onSortingSelectionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onSelectionChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 4: _t->onVersionSelectionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AtlPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AtlPage.data,
      qt_meta_data_AtlPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AtlPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtlPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AtlPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    if (!strcmp(_clname, "ATLauncher::UserInteractionSupport"))
        return static_cast< ATLauncher::UserInteractionSupport*>(this);
    return QWidget::qt_metacast(_clname);
}

int AtlPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
