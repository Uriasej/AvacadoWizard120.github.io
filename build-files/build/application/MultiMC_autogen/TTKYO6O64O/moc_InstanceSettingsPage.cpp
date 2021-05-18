/****************************************************************************
** Meta object code from reading C++ file 'InstanceSettingsPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/instance/InstanceSettingsPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstanceSettingsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstanceSettingsPage_t {
    QByteArrayData data[10];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstanceSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstanceSettingsPage_t qt_meta_stringdata_InstanceSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "InstanceSettingsPage"
QT_MOC_LITERAL(1, 21, 24), // "on_javaDetectBtn_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 22), // "on_javaTestBtn_clicked"
QT_MOC_LITERAL(4, 70, 24), // "on_javaBrowseBtn_clicked"
QT_MOC_LITERAL(5, 95, 13), // "applySettings"
QT_MOC_LITERAL(6, 109, 12), // "loadSettings"
QT_MOC_LITERAL(7, 122, 15), // "checkerFinished"
QT_MOC_LITERAL(8, 138, 27), // "globalSettingsButtonClicked"
QT_MOC_LITERAL(9, 166, 7) // "checked"

    },
    "InstanceSettingsPage\0on_javaDetectBtn_clicked\0"
    "\0on_javaTestBtn_clicked\0"
    "on_javaBrowseBtn_clicked\0applySettings\0"
    "loadSettings\0checkerFinished\0"
    "globalSettingsButtonClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstanceSettingsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void InstanceSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstanceSettingsPage *_t = static_cast<InstanceSettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_javaDetectBtn_clicked(); break;
        case 1: _t->on_javaTestBtn_clicked(); break;
        case 2: _t->on_javaBrowseBtn_clicked(); break;
        case 3: _t->applySettings(); break;
        case 4: _t->loadSettings(); break;
        case 5: _t->checkerFinished(); break;
        case 6: _t->globalSettingsButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject InstanceSettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InstanceSettingsPage.data,
      qt_meta_data_InstanceSettingsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InstanceSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstanceSettingsPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int InstanceSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
