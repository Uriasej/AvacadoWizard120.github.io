/****************************************************************************
** Meta object code from reading C++ file 'ProgressWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/widgets/ProgressWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProgressWidget_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgressWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgressWidget_t qt_meta_stringdata_ProgressWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProgressWidget"
QT_MOC_LITERAL(1, 15, 5), // "start"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 21), // "std::shared_ptr<Task>"
QT_MOC_LITERAL(4, 44, 4), // "task"
QT_MOC_LITERAL(5, 49, 4), // "exec"
QT_MOC_LITERAL(6, 54, 16), // "handleTaskFinish"
QT_MOC_LITERAL(7, 71, 16), // "handleTaskStatus"
QT_MOC_LITERAL(8, 88, 6), // "status"
QT_MOC_LITERAL(9, 95, 18), // "handleTaskProgress"
QT_MOC_LITERAL(10, 114, 7), // "current"
QT_MOC_LITERAL(11, 122, 5), // "total"
QT_MOC_LITERAL(12, 128, 13) // "taskDestroyed"

    },
    "ProgressWidget\0start\0\0std::shared_ptr<Task>\0"
    "task\0exec\0handleTaskFinish\0handleTaskStatus\0"
    "status\0handleTaskProgress\0current\0"
    "total\0taskDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressWidget[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       9,    2,   54,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   10,   11,
    QMetaType::Void,

       0        // eod
};

void ProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgressWidget *_t = static_cast<ProgressWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< std::shared_ptr<Task>(*)>(_a[1]))); break;
        case 1: { bool _r = _t->exec((*reinterpret_cast< std::shared_ptr<Task>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->handleTaskFinish(); break;
        case 3: _t->handleTaskStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleTaskProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->taskDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObject ProgressWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProgressWidget.data,
      qt_meta_data_ProgressWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
