/****************************************************************************
** Meta object code from reading C++ file 'JavaInstallList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/java/JavaInstallList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaInstallList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JavaInstallList_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaInstallList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaInstallList_t qt_meta_stringdata_JavaInstallList = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JavaInstallList"
QT_MOC_LITERAL(1, 16, 14), // "updateListData"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "QList<BaseVersionPtr>"
QT_MOC_LITERAL(4, 54, 8) // "versions"

    },
    "JavaInstallList\0updateListData\0\0"
    "QList<BaseVersionPtr>\0versions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaInstallList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void JavaInstallList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaInstallList *_t = static_cast<JavaInstallList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateListData((*reinterpret_cast< QList<BaseVersionPtr>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<BaseVersionPtr> >(); break;
            }
            break;
        }
    }
}

const QMetaObject JavaInstallList::staticMetaObject = {
    { &BaseVersionList::staticMetaObject, qt_meta_stringdata_JavaInstallList.data,
      qt_meta_data_JavaInstallList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaInstallList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaInstallList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaInstallList.stringdata0))
        return static_cast<void*>(this);
    return BaseVersionList::qt_metacast(_clname);
}

int JavaInstallList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseVersionList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_JavaListLoadTask_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaListLoadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaListLoadTask_t qt_meta_stringdata_JavaListLoadTask = {
    {
QT_MOC_LITERAL(0, 0, 16), // "JavaListLoadTask"
QT_MOC_LITERAL(1, 17, 19), // "javaCheckerFinished"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "JavaListLoadTask\0javaCheckerFinished\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaListLoadTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void JavaListLoadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaListLoadTask *_t = static_cast<JavaListLoadTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->javaCheckerFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject JavaListLoadTask::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_JavaListLoadTask.data,
      qt_meta_data_JavaListLoadTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JavaListLoadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaListLoadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JavaListLoadTask.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int JavaListLoadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
