/****************************************************************************
** Meta object code from reading C++ file 'JavaPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/global/JavaPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JavaPage_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaPage_t qt_meta_stringdata_JavaPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "JavaPage"
QT_MOC_LITERAL(1, 9, 24), // "on_javaDetectBtn_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_javaTestBtn_clicked"
QT_MOC_LITERAL(4, 58, 24), // "on_javaBrowseBtn_clicked"
QT_MOC_LITERAL(5, 83, 15) // "checkerFinished"

    },
    "JavaPage\0on_javaDetectBtn_clicked\0\0"
    "on_javaTestBtn_clicked\0on_javaBrowseBtn_clicked\0"
    "checkerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JavaPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaPage *_t = static_cast<JavaPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_javaDetectBtn_clicked(); break;
        case 1: _t->on_javaTestBtn_clicked(); break;
        case 2: _t->on_javaBrowseBtn_clicked(); break;
        case 3: _t->checkerFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject JavaPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JavaPage.data,
      qt_meta_data_JavaPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int JavaPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
