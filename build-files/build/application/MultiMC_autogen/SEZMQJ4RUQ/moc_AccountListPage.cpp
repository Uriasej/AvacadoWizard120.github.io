/****************************************************************************
** Meta object code from reading C++ file 'AccountListPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/global/AccountListPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountListPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountListPage_t {
    QByteArrayData data[14];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountListPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountListPage_t qt_meta_stringdata_AccountListPage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AccountListPage"
QT_MOC_LITERAL(1, 16, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "on_actionRemove_triggered"
QT_MOC_LITERAL(4, 66, 29), // "on_actionSetDefault_triggered"
QT_MOC_LITERAL(5, 96, 28), // "on_actionNoDefault_triggered"
QT_MOC_LITERAL(6, 125, 29), // "on_actionUploadSkin_triggered"
QT_MOC_LITERAL(7, 155, 29), // "on_actionDeleteSkin_triggered"
QT_MOC_LITERAL(8, 185, 11), // "listChanged"
QT_MOC_LITERAL(9, 197, 18), // "updateButtonStates"
QT_MOC_LITERAL(10, 216, 15), // "ShowContextMenu"
QT_MOC_LITERAL(11, 232, 3), // "pos"
QT_MOC_LITERAL(12, 236, 10), // "addAccount"
QT_MOC_LITERAL(13, 247, 6) // "errMsg"

    },
    "AccountListPage\0on_actionAdd_triggered\0"
    "\0on_actionRemove_triggered\0"
    "on_actionSetDefault_triggered\0"
    "on_actionNoDefault_triggered\0"
    "on_actionUploadSkin_triggered\0"
    "on_actionDeleteSkin_triggered\0listChanged\0"
    "updateButtonStates\0ShowContextMenu\0"
    "pos\0addAccount\0errMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountListPage[] = {

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
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x09 /* Protected */,
      12,    1,   80,    2, 0x09 /* Protected */,
      12,    0,   83,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void AccountListPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountListPage *_t = static_cast<AccountListPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAdd_triggered(); break;
        case 1: _t->on_actionRemove_triggered(); break;
        case 2: _t->on_actionSetDefault_triggered(); break;
        case 3: _t->on_actionNoDefault_triggered(); break;
        case 4: _t->on_actionUploadSkin_triggered(); break;
        case 5: _t->on_actionDeleteSkin_triggered(); break;
        case 6: _t->listChanged(); break;
        case 7: _t->updateButtonStates(); break;
        case 8: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->addAccount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->addAccount(); break;
        default: ;
        }
    }
}

const QMetaObject AccountListPage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AccountListPage.data,
      qt_meta_data_AccountListPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccountListPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountListPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountListPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AccountListPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
