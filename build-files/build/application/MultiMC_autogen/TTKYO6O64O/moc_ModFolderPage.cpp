/****************************************************************************
** Meta object code from reading C++ file 'ModFolderPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/instance/ModFolderPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFolderPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModFolderPage_t {
    QByteArrayData data[19];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModFolderPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModFolderPage_t qt_meta_stringdata_ModFolderPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ModFolderPage"
QT_MOC_LITERAL(1, 14, 10), // "modCurrent"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "current"
QT_MOC_LITERAL(4, 34, 8), // "previous"
QT_MOC_LITERAL(5, 43, 16), // "modItemActivated"
QT_MOC_LITERAL(6, 60, 5), // "index"
QT_MOC_LITERAL(7, 66, 20), // "on_filterTextChanged"
QT_MOC_LITERAL(8, 87, 11), // "newContents"
QT_MOC_LITERAL(9, 99, 23), // "on_RunningState_changed"
QT_MOC_LITERAL(10, 123, 7), // "running"
QT_MOC_LITERAL(11, 131, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(12, 154, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(13, 180, 25), // "on_actionEnable_triggered"
QT_MOC_LITERAL(14, 206, 26), // "on_actionDisable_triggered"
QT_MOC_LITERAL(15, 233, 30), // "on_actionView_Folder_triggered"
QT_MOC_LITERAL(16, 264, 31), // "on_actionView_configs_triggered"
QT_MOC_LITERAL(17, 296, 15), // "ShowContextMenu"
QT_MOC_LITERAL(18, 312, 3) // "pos"

    },
    "ModFolderPage\0modCurrent\0\0current\0"
    "previous\0modItemActivated\0index\0"
    "on_filterTextChanged\0newContents\0"
    "on_RunningState_changed\0running\0"
    "on_actionAdd_triggered\0on_actionRemove_triggered\0"
    "on_actionEnable_triggered\0"
    "on_actionDisable_triggered\0"
    "on_actionView_Folder_triggered\0"
    "on_actionView_configs_triggered\0"
    "ShowContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModFolderPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       5,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   18,

       0        // eod
};

void ModFolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModFolderPage *_t = static_cast<ModFolderPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modCurrent((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->modItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_filterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_RunningState_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actionAdd_triggered(); break;
        case 5: _t->on_actionRemove_triggered(); break;
        case 6: _t->on_actionEnable_triggered(); break;
        case 7: _t->on_actionDisable_triggered(); break;
        case 8: _t->on_actionView_Folder_triggered(); break;
        case 9: _t->on_actionView_configs_triggered(); break;
        case 10: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ModFolderPage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModFolderPage.data,
      qt_meta_data_ModFolderPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModFolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModFolderPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ModFolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
