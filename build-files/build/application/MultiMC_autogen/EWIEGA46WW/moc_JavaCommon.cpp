/****************************************************************************
** Meta object code from reading C++ file 'JavaCommon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/JavaCommon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaCommon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JavaCommon__TestCheck_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaCommon__TestCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaCommon__TestCheck_t qt_meta_stringdata_JavaCommon__TestCheck = {
    {
QT_MOC_LITERAL(0, 0, 21), // "JavaCommon::TestCheck"
QT_MOC_LITERAL(1, 22, 8), // "finished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "checkFinished"
QT_MOC_LITERAL(4, 46, 15), // "JavaCheckResult"
QT_MOC_LITERAL(5, 62, 6), // "result"
QT_MOC_LITERAL(6, 69, 21) // "checkFinishedWithArgs"

    },
    "JavaCommon::TestCheck\0finished\0\0"
    "checkFinished\0JavaCheckResult\0result\0"
    "checkFinishedWithArgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaCommon__TestCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void JavaCommon::TestCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestCheck *_t = static_cast<TestCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->checkFinished((*reinterpret_cast< JavaCheckResult(*)>(_a[1]))); break;
        case 2: _t->checkFinishedWithArgs((*reinterpret_cast< JavaCheckResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCheck::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject JavaCommon::TestCheck::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JavaCommon__TestCheck.data,
      qt_meta_data_JavaCommon__TestCheck,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaCommon::TestCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaCommon::TestCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaCommon__TestCheck.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JavaCommon::TestCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void JavaCommon::TestCheck::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
