/****************************************************************************
** Meta object code from reading C++ file 'ModFolderModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/minecraft/mod/ModFolderModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFolderModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModFolderModel_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModFolderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModFolderModel_t qt_meta_stringdata_ModFolderModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ModFolderModel"
QT_MOC_LITERAL(1, 15, 14), // "updateFinished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "disableInteraction"
QT_MOC_LITERAL(4, 50, 8), // "disabled"
QT_MOC_LITERAL(5, 59, 16), // "directoryChanged"
QT_MOC_LITERAL(6, 76, 4), // "path"
QT_MOC_LITERAL(7, 81, 12), // "finishUpdate"
QT_MOC_LITERAL(8, 94, 14), // "finishModParse"
QT_MOC_LITERAL(9, 109, 5) // "token"

    },
    "ModFolderModel\0updateFinished\0\0"
    "disableInteraction\0disabled\0"
    "directoryChanged\0path\0finishUpdate\0"
    "finishModParse\0token"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModFolderModel[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void ModFolderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModFolderModel *_t = static_cast<ModFolderModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateFinished(); break;
        case 1: _t->disableInteraction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->directoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->finishUpdate(); break;
        case 4: _t->finishModParse((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModFolderModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModFolderModel::updateFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ModFolderModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ModFolderModel.data,
      qt_meta_data_ModFolderModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModFolderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFolderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModFolderModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ModFolderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ModFolderModel::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
