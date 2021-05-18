/****************************************************************************
** Meta object code from reading C++ file 'PackFetchTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/api/logic/modplatform/legacy_ftb/PackFetchTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PackFetchTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LegacyFTB__PackFetchTask_t {
    QByteArrayData data[15];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LegacyFTB__PackFetchTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LegacyFTB__PackFetchTask_t qt_meta_stringdata_LegacyFTB__PackFetchTask = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LegacyFTB::PackFetchTask"
QT_MOC_LITERAL(1, 25, 8), // "finished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "ModpackList"
QT_MOC_LITERAL(4, 47, 11), // "publicPacks"
QT_MOC_LITERAL(5, 59, 15), // "thirdPartyPacks"
QT_MOC_LITERAL(6, 75, 6), // "failed"
QT_MOC_LITERAL(7, 82, 6), // "reason"
QT_MOC_LITERAL(8, 89, 27), // "privateFileDownloadFinished"
QT_MOC_LITERAL(9, 117, 7), // "Modpack"
QT_MOC_LITERAL(10, 125, 7), // "modpack"
QT_MOC_LITERAL(11, 133, 25), // "privateFileDownloadFailed"
QT_MOC_LITERAL(12, 159, 8), // "packCode"
QT_MOC_LITERAL(13, 168, 20), // "fileDownloadFinished"
QT_MOC_LITERAL(14, 189, 18) // "fileDownloadFailed"

    },
    "LegacyFTB::PackFetchTask\0finished\0\0"
    "ModpackList\0publicPacks\0thirdPartyPacks\0"
    "failed\0reason\0privateFileDownloadFinished\0"
    "Modpack\0modpack\0privateFileDownloadFailed\0"
    "packCode\0fileDownloadFinished\0"
    "fileDownloadFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LegacyFTB__PackFetchTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,
      11,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   60,    2, 0x09 /* Protected */,
      14,    1,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void LegacyFTB::PackFetchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PackFetchTask *_t = static_cast<PackFetchTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< ModpackList(*)>(_a[1])),(*reinterpret_cast< ModpackList(*)>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->privateFileDownloadFinished((*reinterpret_cast< Modpack(*)>(_a[1]))); break;
        case 3: _t->privateFileDownloadFailed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->fileDownloadFinished(); break;
        case 5: _t->fileDownloadFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PackFetchTask::*_t)(ModpackList , ModpackList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackFetchTask::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PackFetchTask::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackFetchTask::failed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PackFetchTask::*_t)(Modpack );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackFetchTask::privateFileDownloadFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PackFetchTask::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackFetchTask::privateFileDownloadFailed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject LegacyFTB::PackFetchTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LegacyFTB__PackFetchTask.data,
      qt_meta_data_LegacyFTB__PackFetchTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LegacyFTB::PackFetchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegacyFTB::PackFetchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LegacyFTB__PackFetchTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LegacyFTB::PackFetchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LegacyFTB::PackFetchTask::finished(ModpackList _t1, ModpackList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LegacyFTB::PackFetchTask::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LegacyFTB::PackFetchTask::privateFileDownloadFinished(Modpack _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LegacyFTB::PackFetchTask::privateFileDownloadFailed(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
