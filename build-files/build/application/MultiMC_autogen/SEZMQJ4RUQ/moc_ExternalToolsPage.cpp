/****************************************************************************
** Meta object code from reading C++ file 'ExternalToolsPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/global/ExternalToolsPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExternalToolsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExternalToolsPage_t {
    QByteArrayData data[9];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExternalToolsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExternalToolsPage_t qt_meta_stringdata_ExternalToolsPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ExternalToolsPage"
QT_MOC_LITERAL(1, 18, 27), // "on_jprofilerPathBtn_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 28), // "on_jprofilerCheckBtn_clicked"
QT_MOC_LITERAL(4, 76, 27), // "on_jvisualvmPathBtn_clicked"
QT_MOC_LITERAL(5, 104, 28), // "on_jvisualvmCheckBtn_clicked"
QT_MOC_LITERAL(6, 133, 24), // "on_mceditPathBtn_clicked"
QT_MOC_LITERAL(7, 158, 25), // "on_mceditCheckBtn_clicked"
QT_MOC_LITERAL(8, 184, 30) // "on_jsonEditorBrowseBtn_clicked"

    },
    "ExternalToolsPage\0on_jprofilerPathBtn_clicked\0"
    "\0on_jprofilerCheckBtn_clicked\0"
    "on_jvisualvmPathBtn_clicked\0"
    "on_jvisualvmCheckBtn_clicked\0"
    "on_mceditPathBtn_clicked\0"
    "on_mceditCheckBtn_clicked\0"
    "on_jsonEditorBrowseBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExternalToolsPage[] = {

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
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExternalToolsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExternalToolsPage *_t = static_cast<ExternalToolsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_jprofilerPathBtn_clicked(); break;
        case 1: _t->on_jprofilerCheckBtn_clicked(); break;
        case 2: _t->on_jvisualvmPathBtn_clicked(); break;
        case 3: _t->on_jvisualvmCheckBtn_clicked(); break;
        case 4: _t->on_mceditPathBtn_clicked(); break;
        case 5: _t->on_mceditCheckBtn_clicked(); break;
        case 6: _t->on_jsonEditorBrowseBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ExternalToolsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExternalToolsPage.data,
      qt_meta_data_ExternalToolsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExternalToolsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalToolsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExternalToolsPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExternalToolsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
