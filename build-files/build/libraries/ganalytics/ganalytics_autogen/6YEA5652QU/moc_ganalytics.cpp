/****************************************************************************
** Meta object code from reading C++ file 'ganalytics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libraries/ganalytics/include/ganalytics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ganalytics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GAnalytics_t {
    QByteArrayData data[19];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GAnalytics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GAnalytics_t qt_meta_stringdata_GAnalytics = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GAnalytics"
QT_MOC_LITERAL(1, 11, 14), // "sendScreenView"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "screenName"
QT_MOC_LITERAL(4, 38, 12), // "customValues"
QT_MOC_LITERAL(5, 51, 9), // "sendEvent"
QT_MOC_LITERAL(6, 61, 8), // "category"
QT_MOC_LITERAL(7, 70, 6), // "action"
QT_MOC_LITERAL(8, 77, 5), // "label"
QT_MOC_LITERAL(9, 83, 5), // "value"
QT_MOC_LITERAL(10, 89, 13), // "sendException"
QT_MOC_LITERAL(11, 103, 20), // "exceptionDescription"
QT_MOC_LITERAL(12, 124, 14), // "exceptionFatal"
QT_MOC_LITERAL(13, 139, 12), // "startSession"
QT_MOC_LITERAL(14, 152, 10), // "endSession"
QT_MOC_LITERAL(15, 163, 8), // "LogLevel"
QT_MOC_LITERAL(16, 172, 5), // "Debug"
QT_MOC_LITERAL(17, 178, 4), // "Info"
QT_MOC_LITERAL(18, 183, 5) // "Error"

    },
    "GAnalytics\0sendScreenView\0\0screenName\0"
    "customValues\0sendEvent\0category\0action\0"
    "label\0value\0sendException\0"
    "exceptionDescription\0exceptionFatal\0"
    "startSession\0endSession\0LogLevel\0Debug\0"
    "Info\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GAnalytics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       1,    1,   74,    2, 0x2a /* Public | MethodCloned */,
       5,    5,   77,    2, 0x0a /* Public */,
       5,    4,   88,    2, 0x2a /* Public | MethodCloned */,
       5,    3,   97,    2, 0x2a /* Public | MethodCloned */,
       5,    2,  104,    2, 0x2a /* Public | MethodCloned */,
      10,    3,  109,    2, 0x0a /* Public */,
      10,    2,  116,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  121,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  124,    2, 0x0a /* Public */,
      14,    0,  125,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariantMap,    6,    7,    8,    9,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QVariantMap,   11,   12,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      15, 0x0,    3,  130,

 // enum data: key, value
      16, uint(GAnalytics::Debug),
      17, uint(GAnalytics::Info),
      18, uint(GAnalytics::Error),

       0        // eod
};

void GAnalytics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GAnalytics *_t = static_cast<GAnalytics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendScreenView((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 1: _t->sendScreenView((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sendEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5]))); break;
        case 3: _t->sendEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 4: _t->sendEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->sendEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->sendException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3]))); break;
        case 7: _t->sendException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->sendException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->startSession(); break;
        case 10: _t->endSession(); break;
        default: ;
        }
    }
}

const QMetaObject GAnalytics::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GAnalytics.data,
      qt_meta_data_GAnalytics,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GAnalytics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GAnalytics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GAnalytics.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GAnalytics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
