/****************************************************************************
** Meta object code from reading C++ file 'TechnicPackProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/modplatform/technic/TechnicPackProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TechnicPackProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Technic__TechnicPackProcessor_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Technic__TechnicPackProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Technic__TechnicPackProcessor_t qt_meta_stringdata_Technic__TechnicPackProcessor = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Technic::TechnicPackProcessor"
QT_MOC_LITERAL(1, 30, 9), // "succeeded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "failed"
QT_MOC_LITERAL(4, 48, 6) // "reason"

    },
    "Technic::TechnicPackProcessor\0succeeded\0"
    "\0failed\0reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Technic__TechnicPackProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void Technic::TechnicPackProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TechnicPackProcessor *_t = static_cast<TechnicPackProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->succeeded(); break;
        case 1: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TechnicPackProcessor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TechnicPackProcessor::succeeded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TechnicPackProcessor::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TechnicPackProcessor::failed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Technic::TechnicPackProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Technic__TechnicPackProcessor.data,
      qt_meta_data_Technic__TechnicPackProcessor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Technic::TechnicPackProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Technic::TechnicPackProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Technic__TechnicPackProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Technic::TechnicPackProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Technic::TechnicPackProcessor::succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Technic::TechnicPackProcessor::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
