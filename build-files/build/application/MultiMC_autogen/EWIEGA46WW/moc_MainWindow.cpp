/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/application/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[67];
    char stringdata0[1474];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "isClosing"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "onCatToggled"
QT_MOC_LITERAL(4, 35, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(5, 60, 30), // "on_actionAddInstance_triggered"
QT_MOC_LITERAL(6, 91, 25), // "on_actionREDDIT_triggered"
QT_MOC_LITERAL(7, 117, 26), // "on_actionDISCORD_triggered"
QT_MOC_LITERAL(8, 144, 31), // "on_actionCopyInstance_triggered"
QT_MOC_LITERAL(9, 176, 34), // "on_actionChangeInstGroup_trig..."
QT_MOC_LITERAL(10, 211, 33), // "on_actionChangeInstIcon_trigg..."
QT_MOC_LITERAL(11, 245, 27), // "on_changeIconButton_clicked"
QT_MOC_LITERAL(12, 273, 37), // "on_actionViewInstanceFolder_t..."
QT_MOC_LITERAL(13, 311, 32), // "on_actionConfig_Folder_triggered"
QT_MOC_LITERAL(14, 344, 41), // "on_actionViewSelectedInstFold..."
QT_MOC_LITERAL(15, 386, 39), // "on_actionViewSelectedMCFolder..."
QT_MOC_LITERAL(16, 426, 16), // "refreshInstances"
QT_MOC_LITERAL(17, 443, 40), // "on_actionViewCentralModsFolde..."
QT_MOC_LITERAL(18, 484, 15), // "checkForUpdates"
QT_MOC_LITERAL(19, 500, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(20, 528, 35), // "on_actionInstanceSettings_tri..."
QT_MOC_LITERAL(21, 564, 33), // "on_actionManageAccounts_trigg..."
QT_MOC_LITERAL(22, 598, 28), // "on_actionReportBug_triggered"
QT_MOC_LITERAL(23, 627, 26), // "on_actionPatreon_triggered"
QT_MOC_LITERAL(24, 654, 27), // "on_actionMoreNews_triggered"
QT_MOC_LITERAL(25, 682, 17), // "newsButtonClicked"
QT_MOC_LITERAL(26, 700, 33), // "on_actionLaunchInstance_trigg..."
QT_MOC_LITERAL(27, 734, 40), // "on_actionLaunchInstanceOfflin..."
QT_MOC_LITERAL(28, 775, 33), // "on_actionDeleteInstance_trigg..."
QT_MOC_LITERAL(29, 809, 11), // "deleteGroup"
QT_MOC_LITERAL(30, 821, 33), // "on_actionExportInstance_trigg..."
QT_MOC_LITERAL(31, 855, 33), // "on_actionRenameInstance_trigg..."
QT_MOC_LITERAL(32, 889, 23), // "on_renameButton_clicked"
QT_MOC_LITERAL(33, 913, 31), // "on_actionEditInstance_triggered"
QT_MOC_LITERAL(34, 945, 32), // "on_actionEditInstNotes_triggered"
QT_MOC_LITERAL(35, 978, 25), // "on_actionWorlds_triggered"
QT_MOC_LITERAL(36, 1004, 30), // "on_actionScreenshots_triggered"
QT_MOC_LITERAL(37, 1035, 7), // "taskEnd"
QT_MOC_LITERAL(38, 1043, 11), // "iconUpdated"
QT_MOC_LITERAL(39, 1055, 23), // "showInstanceContextMenu"
QT_MOC_LITERAL(40, 1079, 15), // "updateToolsMenu"
QT_MOC_LITERAL(41, 1095, 15), // "skinJobFinished"
QT_MOC_LITERAL(42, 1111, 17), // "instanceActivated"
QT_MOC_LITERAL(43, 1129, 15), // "instanceChanged"
QT_MOC_LITERAL(44, 1145, 7), // "current"
QT_MOC_LITERAL(45, 1153, 8), // "previous"
QT_MOC_LITERAL(46, 1162, 21), // "instanceSelectRequest"
QT_MOC_LITERAL(47, 1184, 2), // "id"
QT_MOC_LITERAL(48, 1187, 19), // "instanceDataChanged"
QT_MOC_LITERAL(49, 1207, 7), // "topLeft"
QT_MOC_LITERAL(50, 1215, 11), // "bottomRight"
QT_MOC_LITERAL(51, 1227, 12), // "selectionBad"
QT_MOC_LITERAL(52, 1240, 9), // "startTask"
QT_MOC_LITERAL(53, 1250, 5), // "Task*"
QT_MOC_LITERAL(54, 1256, 4), // "task"
QT_MOC_LITERAL(55, 1261, 15), // "updateAvailable"
QT_MOC_LITERAL(56, 1277, 16), // "GoUpdate::Status"
QT_MOC_LITERAL(57, 1294, 6), // "status"
QT_MOC_LITERAL(58, 1301, 18), // "updateNotAvailable"
QT_MOC_LITERAL(59, 1320, 20), // "notificationsChanged"
QT_MOC_LITERAL(60, 1341, 20), // "activeAccountChanged"
QT_MOC_LITERAL(61, 1362, 19), // "changeActiveAccount"
QT_MOC_LITERAL(62, 1382, 22), // "repopulateAccountsMenu"
QT_MOC_LITERAL(63, 1405, 15), // "updateNewsLabel"
QT_MOC_LITERAL(64, 1421, 15), // "downloadUpdates"
QT_MOC_LITERAL(65, 1437, 15), // "konamiTriggered"
QT_MOC_LITERAL(66, 1453, 20) // "globalSettingsClosed"

    },
    "MainWindow\0isClosing\0\0onCatToggled\0"
    "on_actionAbout_triggered\0"
    "on_actionAddInstance_triggered\0"
    "on_actionREDDIT_triggered\0"
    "on_actionDISCORD_triggered\0"
    "on_actionCopyInstance_triggered\0"
    "on_actionChangeInstGroup_triggered\0"
    "on_actionChangeInstIcon_triggered\0"
    "on_changeIconButton_clicked\0"
    "on_actionViewInstanceFolder_triggered\0"
    "on_actionConfig_Folder_triggered\0"
    "on_actionViewSelectedInstFolder_triggered\0"
    "on_actionViewSelectedMCFolder_triggered\0"
    "refreshInstances\0"
    "on_actionViewCentralModsFolder_triggered\0"
    "checkForUpdates\0on_actionSettings_triggered\0"
    "on_actionInstanceSettings_triggered\0"
    "on_actionManageAccounts_triggered\0"
    "on_actionReportBug_triggered\0"
    "on_actionPatreon_triggered\0"
    "on_actionMoreNews_triggered\0"
    "newsButtonClicked\0on_actionLaunchInstance_triggered\0"
    "on_actionLaunchInstanceOffline_triggered\0"
    "on_actionDeleteInstance_triggered\0"
    "deleteGroup\0on_actionExportInstance_triggered\0"
    "on_actionRenameInstance_triggered\0"
    "on_renameButton_clicked\0"
    "on_actionEditInstance_triggered\0"
    "on_actionEditInstNotes_triggered\0"
    "on_actionWorlds_triggered\0"
    "on_actionScreenshots_triggered\0taskEnd\0"
    "iconUpdated\0showInstanceContextMenu\0"
    "updateToolsMenu\0skinJobFinished\0"
    "instanceActivated\0instanceChanged\0"
    "current\0previous\0instanceSelectRequest\0"
    "id\0instanceDataChanged\0topLeft\0"
    "bottomRight\0selectionBad\0startTask\0"
    "Task*\0task\0updateAvailable\0GoUpdate::Status\0"
    "status\0updateNotAvailable\0"
    "notificationsChanged\0activeAccountChanged\0"
    "changeActiveAccount\0repopulateAccountsMenu\0"
    "updateNewsLabel\0downloadUpdates\0"
    "konamiTriggered\0globalSettingsClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  294,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  295,    2, 0x08 /* Private */,
       4,    0,  298,    2, 0x08 /* Private */,
       5,    0,  299,    2, 0x08 /* Private */,
       6,    0,  300,    2, 0x08 /* Private */,
       7,    0,  301,    2, 0x08 /* Private */,
       8,    0,  302,    2, 0x08 /* Private */,
       9,    0,  303,    2, 0x08 /* Private */,
      10,    0,  304,    2, 0x08 /* Private */,
      11,    1,  305,    2, 0x08 /* Private */,
      12,    0,  308,    2, 0x08 /* Private */,
      13,    0,  309,    2, 0x08 /* Private */,
      14,    0,  310,    2, 0x08 /* Private */,
      15,    0,  311,    2, 0x08 /* Private */,
      16,    0,  312,    2, 0x08 /* Private */,
      17,    0,  313,    2, 0x08 /* Private */,
      18,    0,  314,    2, 0x08 /* Private */,
      19,    0,  315,    2, 0x08 /* Private */,
      20,    0,  316,    2, 0x08 /* Private */,
      21,    0,  317,    2, 0x08 /* Private */,
      22,    0,  318,    2, 0x08 /* Private */,
      23,    0,  319,    2, 0x08 /* Private */,
      24,    0,  320,    2, 0x08 /* Private */,
      25,    0,  321,    2, 0x08 /* Private */,
      26,    0,  322,    2, 0x08 /* Private */,
      27,    0,  323,    2, 0x08 /* Private */,
      28,    0,  324,    2, 0x08 /* Private */,
      29,    0,  325,    2, 0x08 /* Private */,
      30,    0,  326,    2, 0x08 /* Private */,
      31,    0,  327,    2, 0x08 /* Private */,
      32,    1,  328,    2, 0x08 /* Private */,
      33,    0,  331,    2, 0x08 /* Private */,
      34,    0,  332,    2, 0x08 /* Private */,
      35,    0,  333,    2, 0x08 /* Private */,
      36,    0,  334,    2, 0x08 /* Private */,
      37,    0,  335,    2, 0x08 /* Private */,
      38,    1,  336,    2, 0x08 /* Private */,
      39,    1,  339,    2, 0x08 /* Private */,
      40,    0,  342,    2, 0x08 /* Private */,
      41,    0,  343,    2, 0x08 /* Private */,
      42,    1,  344,    2, 0x08 /* Private */,
      43,    2,  347,    2, 0x08 /* Private */,
      46,    1,  352,    2, 0x08 /* Private */,
      48,    2,  355,    2, 0x08 /* Private */,
      51,    0,  360,    2, 0x08 /* Private */,
      52,    1,  361,    2, 0x08 /* Private */,
      55,    1,  364,    2, 0x08 /* Private */,
      58,    0,  367,    2, 0x08 /* Private */,
      59,    0,  368,    2, 0x08 /* Private */,
      60,    0,  369,    2, 0x08 /* Private */,
      61,    0,  370,    2, 0x08 /* Private */,
      62,    0,  371,    2, 0x08 /* Private */,
      63,    0,  372,    2, 0x08 /* Private */,
      64,    1,  373,    2, 0x08 /* Private */,
      65,    0,  376,    2, 0x08 /* Private */,
      66,    0,  377,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   44,   45,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   49,   50,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isClosing(); break;
        case 1: _t->onCatToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actionAbout_triggered(); break;
        case 3: _t->on_actionAddInstance_triggered(); break;
        case 4: _t->on_actionREDDIT_triggered(); break;
        case 5: _t->on_actionDISCORD_triggered(); break;
        case 6: _t->on_actionCopyInstance_triggered(); break;
        case 7: _t->on_actionChangeInstGroup_triggered(); break;
        case 8: _t->on_actionChangeInstIcon_triggered(); break;
        case 9: _t->on_changeIconButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_actionViewInstanceFolder_triggered(); break;
        case 11: _t->on_actionConfig_Folder_triggered(); break;
        case 12: _t->on_actionViewSelectedInstFolder_triggered(); break;
        case 13: _t->on_actionViewSelectedMCFolder_triggered(); break;
        case 14: _t->refreshInstances(); break;
        case 15: _t->on_actionViewCentralModsFolder_triggered(); break;
        case 16: _t->checkForUpdates(); break;
        case 17: _t->on_actionSettings_triggered(); break;
        case 18: _t->on_actionInstanceSettings_triggered(); break;
        case 19: _t->on_actionManageAccounts_triggered(); break;
        case 20: _t->on_actionReportBug_triggered(); break;
        case 21: _t->on_actionPatreon_triggered(); break;
        case 22: _t->on_actionMoreNews_triggered(); break;
        case 23: _t->newsButtonClicked(); break;
        case 24: _t->on_actionLaunchInstance_triggered(); break;
        case 25: _t->on_actionLaunchInstanceOffline_triggered(); break;
        case 26: _t->on_actionDeleteInstance_triggered(); break;
        case 27: _t->deleteGroup(); break;
        case 28: _t->on_actionExportInstance_triggered(); break;
        case 29: _t->on_actionRenameInstance_triggered(); break;
        case 30: _t->on_renameButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_actionEditInstance_triggered(); break;
        case 32: _t->on_actionEditInstNotes_triggered(); break;
        case 33: _t->on_actionWorlds_triggered(); break;
        case 34: _t->on_actionScreenshots_triggered(); break;
        case 35: _t->taskEnd(); break;
        case 36: _t->iconUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->showInstanceContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 38: _t->updateToolsMenu(); break;
        case 39: _t->skinJobFinished(); break;
        case 40: _t->instanceActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 41: _t->instanceChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 42: _t->instanceSelectRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->instanceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 44: _t->selectionBad(); break;
        case 45: _t->startTask((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        case 46: _t->updateAvailable((*reinterpret_cast< GoUpdate::Status(*)>(_a[1]))); break;
        case 47: _t->updateNotAvailable(); break;
        case 48: _t->notificationsChanged(); break;
        case 49: _t->activeAccountChanged(); break;
        case 50: _t->changeActiveAccount(); break;
        case 51: _t->repopulateAccountsMenu(); break;
        case 52: _t->updateNewsLabel(); break;
        case 53: _t->downloadUpdates((*reinterpret_cast< GoUpdate::Status(*)>(_a[1]))); break;
        case 54: _t->konamiTriggered(); break;
        case 55: _t->globalSettingsClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Task* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GoUpdate::Status >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GoUpdate::Status >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::isClosing)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::isClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
