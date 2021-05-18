/****************************************************************************
** Meta object code from reading C++ file 'LogPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/instance/LogPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogPage_t {
    QByteArrayData data[16];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogPage_t qt_meta_stringdata_LogPage = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LogPage"
QT_MOC_LITERAL(1, 8, 19), // "on_btnPaste_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_btnCopy_clicked"
QT_MOC_LITERAL(4, 48, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(5, 68, 20), // "on_btnBottom_clicked"
QT_MOC_LITERAL(6, 89, 27), // "on_trackLogCheckbox_clicked"
QT_MOC_LITERAL(7, 117, 7), // "checked"
QT_MOC_LITERAL(8, 125, 23), // "on_wrapCheckbox_clicked"
QT_MOC_LITERAL(9, 149, 21), // "on_findButton_clicked"
QT_MOC_LITERAL(10, 171, 13), // "findActivated"
QT_MOC_LITERAL(11, 185, 17), // "findNextActivated"
QT_MOC_LITERAL(12, 203, 21), // "findPreviousActivated"
QT_MOC_LITERAL(13, 225, 27), // "onInstanceLaunchTaskChanged"
QT_MOC_LITERAL(14, 253, 30), // "shared_qobject_ptr<LaunchTask>"
QT_MOC_LITERAL(15, 284, 4) // "proc"

    },
    "LogPage\0on_btnPaste_clicked\0\0"
    "on_btnCopy_clicked\0on_btnClear_clicked\0"
    "on_btnBottom_clicked\0on_trackLogCheckbox_clicked\0"
    "checked\0on_wrapCheckbox_clicked\0"
    "on_findButton_clicked\0findActivated\0"
    "findNextActivated\0findPreviousActivated\0"
    "onInstanceLaunchTaskChanged\0"
    "shared_qobject_ptr<LaunchTask>\0proc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogPage[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void LogPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogPage *_t = static_cast<LogPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnPaste_clicked(); break;
        case 1: _t->on_btnCopy_clicked(); break;
        case 2: _t->on_btnClear_clicked(); break;
        case 3: _t->on_btnBottom_clicked(); break;
        case 4: _t->on_trackLogCheckbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_wrapCheckbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_findButton_clicked(); break;
        case 7: _t->findActivated(); break;
        case 8: _t->findNextActivated(); break;
        case 9: _t->findPreviousActivated(); break;
        case 10: _t->onInstanceLaunchTaskChanged((*reinterpret_cast< shared_qobject_ptr<LaunchTask>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LogPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogPage.data,
      qt_meta_data_LogPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
