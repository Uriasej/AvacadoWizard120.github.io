/****************************************************************************
** Meta object code from reading C++ file 'Download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/net/Download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Net__Download_t {
    QByteArrayData data[14];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Net__Download_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Net__Download_t qt_meta_stringdata_Net__Download = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Net::Download"
QT_MOC_LITERAL(1, 14, 16), // "downloadProgress"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "bytesReceived"
QT_MOC_LITERAL(4, 46, 10), // "bytesTotal"
QT_MOC_LITERAL(5, 57, 13), // "downloadError"
QT_MOC_LITERAL(6, 71, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(7, 99, 5), // "error"
QT_MOC_LITERAL(8, 105, 9), // "sslErrors"
QT_MOC_LITERAL(9, 115, 16), // "QList<QSslError>"
QT_MOC_LITERAL(10, 132, 6), // "errors"
QT_MOC_LITERAL(11, 139, 16), // "downloadFinished"
QT_MOC_LITERAL(12, 156, 17), // "downloadReadyRead"
QT_MOC_LITERAL(13, 174, 5) // "start"

    },
    "Net::Download\0downloadProgress\0\0"
    "bytesReceived\0bytesTotal\0downloadError\0"
    "QNetworkReply::NetworkError\0error\0"
    "sslErrors\0QList<QSslError>\0errors\0"
    "downloadFinished\0downloadReadyRead\0"
    "start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Net__Download[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x09 /* Protected */,
       5,    1,   49,    2, 0x09 /* Protected */,
       8,    1,   52,    2, 0x09 /* Protected */,
      11,    0,   55,    2, 0x09 /* Protected */,
      12,    0,   56,    2, 0x09 /* Protected */,
      13,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Net::Download::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Download *_t = static_cast<Download *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->downloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 3: _t->downloadFinished(); break;
        case 4: _t->downloadReadyRead(); break;
        case 5: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Net::Download::staticMetaObject = {
    { &NetAction::staticMetaObject, qt_meta_stringdata_Net__Download.data,
      qt_meta_data_Net__Download,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Net::Download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Net::Download::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Net__Download.stringdata0))
        return static_cast<void*>(this);
    return NetAction::qt_metacast(_clname);
}

int Net::Download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
