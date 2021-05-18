/****************************************************************************
** Meta object code from reading C++ file 'VersionSelectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/widgets/VersionSelectWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VersionSelectWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VersionSelectWidget_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VersionSelectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VersionSelectWidget_t qt_meta_stringdata_VersionSelectWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VersionSelectWidget"
QT_MOC_LITERAL(1, 20, 22), // "selectedVersionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "BaseVersionPtr"
QT_MOC_LITERAL(4, 59, 7), // "version"
QT_MOC_LITERAL(5, 67, 15), // "onTaskSucceeded"
QT_MOC_LITERAL(6, 83, 12), // "onTaskFailed"
QT_MOC_LITERAL(7, 96, 6), // "reason"
QT_MOC_LITERAL(8, 103, 14), // "changeProgress"
QT_MOC_LITERAL(9, 118, 7), // "current"
QT_MOC_LITERAL(10, 126, 5), // "total"
QT_MOC_LITERAL(11, 132, 17) // "currentRowChanged"

    },
    "VersionSelectWidget\0selectedVersionChanged\0"
    "\0BaseVersionPtr\0version\0onTaskSucceeded\0"
    "onTaskFailed\0reason\0changeProgress\0"
    "current\0total\0currentRowChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VersionSelectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       8,    2,   46,    2, 0x08 /* Private */,
      11,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    9,    2,

       0        // eod
};

void VersionSelectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VersionSelectWidget *_t = static_cast<VersionSelectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedVersionChanged((*reinterpret_cast< BaseVersionPtr(*)>(_a[1]))); break;
        case 1: _t->onTaskSucceeded(); break;
        case 2: _t->onTaskFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->changeProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->currentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BaseVersionPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VersionSelectWidget::*_t)(BaseVersionPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VersionSelectWidget::selectedVersionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VersionSelectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VersionSelectWidget.data,
      qt_meta_data_VersionSelectWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VersionSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VersionSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VersionSelectWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VersionSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VersionSelectWidget::selectedVersionChanged(BaseVersionPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
