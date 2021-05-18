/****************************************************************************
** Meta object code from reading C++ file 'PageContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/widgets/PageContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PageContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageContainer_t {
    QByteArrayData data[7];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageContainer_t qt_meta_stringdata_PageContainer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PageContainer"
QT_MOC_LITERAL(1, 14, 4), // "help"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "currentChanged"
QT_MOC_LITERAL(4, 35, 7), // "current"
QT_MOC_LITERAL(5, 43, 8), // "showPage"
QT_MOC_LITERAL(6, 52, 3) // "row"

    },
    "PageContainer\0help\0\0currentChanged\0"
    "current\0showPage\0row"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void PageContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageContainer *_t = static_cast<PageContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->help(); break;
        case 1: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->showPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PageContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageContainer.data,
      qt_meta_data_PageContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageContainer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePageContainer"))
        return static_cast< BasePageContainer*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
