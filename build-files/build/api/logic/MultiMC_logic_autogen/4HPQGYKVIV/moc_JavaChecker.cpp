/****************************************************************************
** Meta object code from reading C++ file 'JavaChecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/java/JavaChecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaChecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JavaChecker_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaChecker_t qt_meta_stringdata_JavaChecker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "JavaChecker"
QT_MOC_LITERAL(1, 12, 13), // "checkFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "JavaCheckResult"
QT_MOC_LITERAL(4, 43, 6), // "result"
QT_MOC_LITERAL(5, 50, 7), // "timeout"
QT_MOC_LITERAL(6, 58, 8), // "finished"
QT_MOC_LITERAL(7, 67, 8), // "exitcode"
QT_MOC_LITERAL(8, 76, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 97, 5), // "error"
QT_MOC_LITERAL(10, 103, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(11, 126, 11), // "stdoutReady"
QT_MOC_LITERAL(12, 138, 11) // "stderrReady"

    },
    "JavaChecker\0checkFinished\0\0JavaCheckResult\0"
    "result\0timeout\0finished\0exitcode\0"
    "QProcess::ExitStatus\0error\0"
    "QProcess::ProcessError\0stdoutReady\0"
    "stderrReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    2,   48,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,
      11,    0,   56,    2, 0x0a /* Public */,
      12,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JavaChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaChecker *_t = static_cast<JavaChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkFinished((*reinterpret_cast< JavaCheckResult(*)>(_a[1]))); break;
        case 1: _t->timeout(); break;
        case 2: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->stdoutReady(); break;
        case 5: _t->stderrReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (JavaChecker::*_t)(JavaCheckResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JavaChecker::checkFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject JavaChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JavaChecker.data,
      qt_meta_data_JavaChecker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JavaChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void JavaChecker::checkFinished(JavaCheckResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
