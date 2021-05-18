/****************************************************************************
** Meta object code from reading C++ file 'MultiMC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/MultiMC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiMC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiMC_t {
    QByteArrayData data[24];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiMC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiMC_t qt_meta_stringdata_MultiMC = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MultiMC"
QT_MOC_LITERAL(1, 8, 20), // "updateAllowedChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "status"
QT_MOC_LITERAL(4, 37, 25), // "globalSettingsAboutToOpen"
QT_MOC_LITERAL(5, 63, 20), // "globalSettingsClosed"
QT_MOC_LITERAL(6, 84, 6), // "launch"
QT_MOC_LITERAL(7, 91, 11), // "InstancePtr"
QT_MOC_LITERAL(8, 103, 8), // "instance"
QT_MOC_LITERAL(9, 112, 6), // "online"
QT_MOC_LITERAL(10, 119, 20), // "BaseProfilerFactory*"
QT_MOC_LITERAL(11, 140, 8), // "profiler"
QT_MOC_LITERAL(12, 149, 4), // "kill"
QT_MOC_LITERAL(13, 154, 14), // "on_windowClose"
QT_MOC_LITERAL(14, 169, 15), // "messageReceived"
QT_MOC_LITERAL(15, 185, 7), // "message"
QT_MOC_LITERAL(16, 193, 19), // "controllerSucceeded"
QT_MOC_LITERAL(17, 213, 16), // "controllerFailed"
QT_MOC_LITERAL(18, 230, 5), // "error"
QT_MOC_LITERAL(19, 236, 23), // "analyticsSettingChanged"
QT_MOC_LITERAL(20, 260, 7), // "Setting"
QT_MOC_LITERAL(21, 268, 7), // "setting"
QT_MOC_LITERAL(22, 276, 5), // "value"
QT_MOC_LITERAL(23, 282, 19) // "setupWizardFinished"

    },
    "MultiMC\0updateAllowedChanged\0\0status\0"
    "globalSettingsAboutToOpen\0"
    "globalSettingsClosed\0launch\0InstancePtr\0"
    "instance\0online\0BaseProfilerFactory*\0"
    "profiler\0kill\0on_windowClose\0"
    "messageReceived\0message\0controllerSucceeded\0"
    "controllerFailed\0error\0analyticsSettingChanged\0"
    "Setting\0setting\0value\0setupWizardFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiMC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   84,    2, 0x0a /* Public */,
       6,    2,   91,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   96,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   99,    2, 0x0a /* Public */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    1,  107,    2, 0x08 /* Private */,
      19,    2,  110,    2, 0x08 /* Private */,
      23,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QVariant,   21,   22,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MultiMC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiMC *_t = static_cast<MultiMC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAllowedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->globalSettingsAboutToOpen(); break;
        case 2: _t->globalSettingsClosed(); break;
        case 3: { bool _r = _t->launch((*reinterpret_cast< InstancePtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< BaseProfilerFactory*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->launch((*reinterpret_cast< InstancePtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->launch((*reinterpret_cast< InstancePtr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->kill((*reinterpret_cast< InstancePtr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_windowClose(); break;
        case 8: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->controllerSucceeded(); break;
        case 10: _t->controllerFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->analyticsSettingChanged((*reinterpret_cast< const Setting(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 12: _t->setupWizardFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MultiMC::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiMC::updateAllowedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MultiMC::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiMC::globalSettingsAboutToOpen)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MultiMC::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiMC::globalSettingsClosed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MultiMC::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_MultiMC.data,
      qt_meta_data_MultiMC,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiMC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiMC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiMC.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int MultiMC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MultiMC::updateAllowedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiMC::globalSettingsAboutToOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MultiMC::globalSettingsClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
