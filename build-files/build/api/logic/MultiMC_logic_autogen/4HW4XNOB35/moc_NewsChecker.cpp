/****************************************************************************
** Meta object code from reading C++ file 'NewsChecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/news/NewsChecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewsChecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewsChecker_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewsChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewsChecker_t qt_meta_stringdata_NewsChecker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NewsChecker"
QT_MOC_LITERAL(1, 12, 10), // "newsLoaded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "newsLoadingFailed"
QT_MOC_LITERAL(4, 42, 8), // "errorMsg"
QT_MOC_LITERAL(5, 51, 19), // "rssDownloadFinished"
QT_MOC_LITERAL(6, 71, 17), // "rssDownloadFailed"
QT_MOC_LITERAL(7, 89, 6), // "reason"
QT_MOC_LITERAL(8, 96, 7), // "succeed"
QT_MOC_LITERAL(9, 104, 4) // "fail"

    },
    "NewsChecker\0newsLoaded\0\0newsLoadingFailed\0"
    "errorMsg\0rssDownloadFinished\0"
    "rssDownloadFailed\0reason\0succeed\0fail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewsChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    1,   49,    2, 0x09 /* Protected */,
       8,    0,   52,    2, 0x09 /* Protected */,
       9,    1,   53,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void NewsChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewsChecker *_t = static_cast<NewsChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newsLoaded(); break;
        case 1: _t->newsLoadingFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->rssDownloadFinished(); break;
        case 3: _t->rssDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->succeed(); break;
        case 5: _t->fail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewsChecker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewsChecker::newsLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NewsChecker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewsChecker::newsLoadingFailed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject NewsChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NewsChecker.data,
      qt_meta_data_NewsChecker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewsChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewsChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewsChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NewsChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NewsChecker::newsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NewsChecker::newsLoadingFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
