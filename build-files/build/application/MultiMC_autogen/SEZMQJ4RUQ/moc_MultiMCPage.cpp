/****************************************************************************
** Meta object code from reading C++ file 'MultiMCPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/pages/global/MultiMCPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiMCPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiMCPage_t {
    QByteArrayData data[10];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiMCPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiMCPage_t qt_meta_stringdata_MultiMCPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MultiMCPage"
QT_MOC_LITERAL(1, 12, 27), // "on_instDirBrowseBtn_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "on_modsDirBrowseBtn_clicked"
QT_MOC_LITERAL(4, 69, 28), // "on_iconsDirBrowseBtn_clicked"
QT_MOC_LITERAL(5, 98, 24), // "refreshUpdateChannelList"
QT_MOC_LITERAL(6, 123, 24), // "refreshUpdateChannelDesc"
QT_MOC_LITERAL(7, 148, 18), // "refreshFontPreview"
QT_MOC_LITERAL(8, 167, 29), // "updateChannelSelectionChanged"
QT_MOC_LITERAL(9, 197, 5) // "index"

    },
    "MultiMCPage\0on_instDirBrowseBtn_clicked\0"
    "\0on_modsDirBrowseBtn_clicked\0"
    "on_iconsDirBrowseBtn_clicked\0"
    "refreshUpdateChannelList\0"
    "refreshUpdateChannelDesc\0refreshFontPreview\0"
    "updateChannelSelectionChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiMCPage[] = {

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
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void MultiMCPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiMCPage *_t = static_cast<MultiMCPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_instDirBrowseBtn_clicked(); break;
        case 1: _t->on_modsDirBrowseBtn_clicked(); break;
        case 2: _t->on_iconsDirBrowseBtn_clicked(); break;
        case 3: _t->refreshUpdateChannelList(); break;
        case 4: _t->refreshUpdateChannelDesc(); break;
        case 5: _t->refreshFontPreview(); break;
        case 6: _t->updateChannelSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MultiMCPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MultiMCPage.data,
      qt_meta_data_MultiMCPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiMCPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiMCPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiMCPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int MultiMCPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
