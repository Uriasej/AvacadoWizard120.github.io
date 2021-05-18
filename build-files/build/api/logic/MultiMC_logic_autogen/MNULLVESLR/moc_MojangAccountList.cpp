/****************************************************************************
** Meta object code from reading C++ file 'MojangAccountList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/minecraft/auth/MojangAccountList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MojangAccountList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MojangAccountList_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MojangAccountList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MojangAccountList_t qt_meta_stringdata_MojangAccountList = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MojangAccountList"
QT_MOC_LITERAL(1, 18, 11), // "listChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "activeAccountChanged"
QT_MOC_LITERAL(4, 52, 14), // "accountChanged"
QT_MOC_LITERAL(5, 67, 14), // "updateListData"
QT_MOC_LITERAL(6, 82, 23), // "QList<MojangAccountPtr>"
QT_MOC_LITERAL(7, 106, 8) // "versions"

    },
    "MojangAccountList\0listChanged\0\0"
    "activeAccountChanged\0accountChanged\0"
    "updateListData\0QList<MojangAccountPtr>\0"
    "versions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MojangAccountList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void MojangAccountList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MojangAccountList *_t = static_cast<MojangAccountList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listChanged(); break;
        case 1: _t->activeAccountChanged(); break;
        case 2: _t->accountChanged(); break;
        case 3: _t->updateListData((*reinterpret_cast< QList<MojangAccountPtr>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MojangAccountPtr> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MojangAccountList::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MojangAccountList::listChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MojangAccountList::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MojangAccountList::activeAccountChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MojangAccountList::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_MojangAccountList.data,
      qt_meta_data_MojangAccountList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MojangAccountList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MojangAccountList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MojangAccountList.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MojangAccountList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MojangAccountList::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MojangAccountList::activeAccountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
