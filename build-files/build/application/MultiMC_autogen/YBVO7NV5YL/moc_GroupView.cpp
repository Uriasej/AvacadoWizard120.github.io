/****************************************************************************
** Meta object code from reading C++ file 'GroupView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/groupview/GroupView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupView_t {
    QByteArrayData data[24];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupView_t qt_meta_stringdata_GroupView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GroupView"
QT_MOC_LITERAL(1, 10, 11), // "droppedURLs"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QList<QUrl>"
QT_MOC_LITERAL(4, 35, 4), // "urls"
QT_MOC_LITERAL(5, 40, 17), // "groupStateChanged"
QT_MOC_LITERAL(6, 58, 5), // "group"
QT_MOC_LITERAL(7, 64, 9), // "collapsed"
QT_MOC_LITERAL(8, 74, 16), // "updateGeometries"
QT_MOC_LITERAL(9, 91, 11), // "dataChanged"
QT_MOC_LITERAL(10, 103, 7), // "topLeft"
QT_MOC_LITERAL(11, 111, 11), // "bottomRight"
QT_MOC_LITERAL(12, 123, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 136, 5), // "roles"
QT_MOC_LITERAL(14, 142, 12), // "rowsInserted"
QT_MOC_LITERAL(15, 155, 6), // "parent"
QT_MOC_LITERAL(16, 162, 5), // "start"
QT_MOC_LITERAL(17, 168, 3), // "end"
QT_MOC_LITERAL(18, 172, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(19, 193, 10), // "modelReset"
QT_MOC_LITERAL(20, 204, 11), // "rowsRemoved"
QT_MOC_LITERAL(21, 216, 14), // "currentChanged"
QT_MOC_LITERAL(22, 231, 7), // "current"
QT_MOC_LITERAL(23, 239, 8) // "previous"

    },
    "GroupView\0droppedURLs\0\0QList<QUrl>\0"
    "urls\0groupStateChanged\0group\0collapsed\0"
    "updateGeometries\0dataChanged\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "rowsInserted\0parent\0start\0end\0"
    "rowsAboutToBeRemoved\0modelReset\0"
    "rowsRemoved\0currentChanged\0current\0"
    "previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   67,    2, 0x0a /* Public */,
       9,    3,   68,    2, 0x09 /* Protected */,
      14,    3,   75,    2, 0x09 /* Protected */,
      18,    3,   82,    2, 0x09 /* Protected */,
      19,    0,   89,    2, 0x09 /* Protected */,
      20,    0,   90,    2, 0x09 /* Protected */,
      21,    2,   91,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 12,   10,   11,   13,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   22,   23,

       0        // eod
};

void GroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupView *_t = static_cast<GroupView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->droppedURLs((*reinterpret_cast< QList<QUrl>(*)>(_a[1]))); break;
        case 1: _t->groupStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateGeometries(); break;
        case 3: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 4: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->modelReset(); break;
        case 7: _t->rowsRemoved(); break;
        case 8: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GroupView::*_t)(QList<QUrl> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupView::droppedURLs)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GroupView::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupView::groupStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GroupView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_GroupView.data,
      qt_meta_data_GroupView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int GroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
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
void GroupView::droppedURLs(QList<QUrl> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupView::groupStateChanged(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
