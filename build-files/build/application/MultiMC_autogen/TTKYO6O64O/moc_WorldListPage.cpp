/****************************************************************************
** Meta object code from reading C++ file 'WorldListPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/instance/WorldListPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WorldListPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorldListPage_t {
    QByteArrayData data[20];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldListPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldListPage_t qt_meta_stringdata_WorldListPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WorldListPage"
QT_MOC_LITERAL(1, 14, 28), // "on_actionCopy_Seed_triggered"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "on_actionMCEdit_triggered"
QT_MOC_LITERAL(4, 70, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(5, 96, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(6, 119, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(7, 143, 25), // "on_actionRename_triggered"
QT_MOC_LITERAL(8, 169, 26), // "on_actionRefresh_triggered"
QT_MOC_LITERAL(9, 196, 30), // "on_actionView_Folder_triggered"
QT_MOC_LITERAL(10, 227, 28), // "on_actionDatapacks_triggered"
QT_MOC_LITERAL(11, 256, 29), // "on_actionReset_Icon_triggered"
QT_MOC_LITERAL(12, 286, 12), // "worldChanged"
QT_MOC_LITERAL(13, 299, 7), // "current"
QT_MOC_LITERAL(14, 307, 8), // "previous"
QT_MOC_LITERAL(15, 316, 11), // "mceditState"
QT_MOC_LITERAL(16, 328, 20), // "LoggedProcess::State"
QT_MOC_LITERAL(17, 349, 5), // "state"
QT_MOC_LITERAL(18, 355, 15), // "ShowContextMenu"
QT_MOC_LITERAL(19, 371, 3) // "pos"

    },
    "WorldListPage\0on_actionCopy_Seed_triggered\0"
    "\0on_actionMCEdit_triggered\0"
    "on_actionRemove_triggered\0"
    "on_actionAdd_triggered\0on_actionCopy_triggered\0"
    "on_actionRename_triggered\0"
    "on_actionRefresh_triggered\0"
    "on_actionView_Folder_triggered\0"
    "on_actionDatapacks_triggered\0"
    "on_actionReset_Icon_triggered\0"
    "worldChanged\0current\0previous\0mceditState\0"
    "LoggedProcess::State\0state\0ShowContextMenu\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldListPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    2,   89,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      18,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QPoint,   19,

       0        // eod
};

void WorldListPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WorldListPage *_t = static_cast<WorldListPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionCopy_Seed_triggered(); break;
        case 1: _t->on_actionMCEdit_triggered(); break;
        case 2: _t->on_actionRemove_triggered(); break;
        case 3: _t->on_actionAdd_triggered(); break;
        case 4: _t->on_actionCopy_triggered(); break;
        case 5: _t->on_actionRename_triggered(); break;
        case 6: _t->on_actionRefresh_triggered(); break;
        case 7: _t->on_actionView_Folder_triggered(); break;
        case 8: _t->on_actionDatapacks_triggered(); break;
        case 9: _t->on_actionReset_Icon_triggered(); break;
        case 10: _t->worldChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->mceditState((*reinterpret_cast< LoggedProcess::State(*)>(_a[1]))); break;
        case 12: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WorldListPage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WorldListPage.data,
      qt_meta_data_WorldListPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WorldListPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldListPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorldListPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WorldListPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
