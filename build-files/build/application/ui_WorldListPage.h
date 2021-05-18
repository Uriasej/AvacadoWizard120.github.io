/********************************************************************************
** Form generated from reading UI file 'WorldListPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDLISTPAGE_H
#define UI_WORLDLISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_WorldListPage
{
public:
    QAction *actionAdd;
    QAction *actionRename;
    QAction *actionCopy;
    QAction *actionRemove;
    QAction *actionMCEdit;
    QAction *actionCopy_Seed;
    QAction *actionRefresh;
    QAction *actionView_Folder;
    QAction *actionReset_Icon;
    QAction *actionDatapacks;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *worldTreeView;
    WideBar *toolBar;

    void setupUi(QMainWindow *WorldListPage)
    {
        if (WorldListPage->objectName().isEmpty())
            WorldListPage->setObjectName(QStringLiteral("WorldListPage"));
        WorldListPage->resize(800, 600);
        actionAdd = new QAction(WorldListPage);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRename = new QAction(WorldListPage);
        actionRename->setObjectName(QStringLiteral("actionRename"));
        actionCopy = new QAction(WorldListPage);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionRemove = new QAction(WorldListPage);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionMCEdit = new QAction(WorldListPage);
        actionMCEdit->setObjectName(QStringLiteral("actionMCEdit"));
        actionCopy_Seed = new QAction(WorldListPage);
        actionCopy_Seed->setObjectName(QStringLiteral("actionCopy_Seed"));
        actionRefresh = new QAction(WorldListPage);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        actionView_Folder = new QAction(WorldListPage);
        actionView_Folder->setObjectName(QStringLiteral("actionView_Folder"));
        actionReset_Icon = new QAction(WorldListPage);
        actionReset_Icon->setObjectName(QStringLiteral("actionReset_Icon"));
        actionDatapacks = new QAction(WorldListPage);
        actionDatapacks->setObjectName(QStringLiteral("actionDatapacks"));
        centralwidget = new QWidget(WorldListPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        worldTreeView = new QTreeView(centralwidget);
        worldTreeView->setObjectName(QStringLiteral("worldTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(worldTreeView->sizePolicy().hasHeightForWidth());
        worldTreeView->setSizePolicy(sizePolicy);
        worldTreeView->setAcceptDrops(true);
        worldTreeView->setDragDropMode(QAbstractItemView::DragDrop);
        worldTreeView->setAlternatingRowColors(true);
        worldTreeView->setRootIsDecorated(false);
        worldTreeView->setItemsExpandable(false);
        worldTreeView->setSortingEnabled(true);
        worldTreeView->setAllColumnsShowFocus(true);
        worldTreeView->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(worldTreeView);

        WorldListPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(WorldListPage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        WorldListPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionAdd);
        toolBar->addSeparator();
        toolBar->addAction(actionRename);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionMCEdit);
        toolBar->addAction(actionDatapacks);
        toolBar->addAction(actionReset_Icon);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy_Seed);
        toolBar->addAction(actionRefresh);
        toolBar->addAction(actionView_Folder);

        retranslateUi(WorldListPage);

        QMetaObject::connectSlotsByName(WorldListPage);
    } // setupUi

    void retranslateUi(QMainWindow *WorldListPage)
    {
        actionAdd->setText(QApplication::translate("WorldListPage", "Add", Q_NULLPTR));
        actionRename->setText(QApplication::translate("WorldListPage", "Rename", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("WorldListPage", "Copy", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("WorldListPage", "Remove", Q_NULLPTR));
        actionMCEdit->setText(QApplication::translate("WorldListPage", "MCEdit", Q_NULLPTR));
        actionCopy_Seed->setText(QApplication::translate("WorldListPage", "Copy Seed", Q_NULLPTR));
        actionRefresh->setText(QApplication::translate("WorldListPage", "Refresh", Q_NULLPTR));
        actionView_Folder->setText(QApplication::translate("WorldListPage", "View Folder", Q_NULLPTR));
        actionReset_Icon->setText(QApplication::translate("WorldListPage", "Reset Icon", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReset_Icon->setToolTip(QApplication::translate("WorldListPage", "Remove world icon to make the game re-generate it on next load.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDatapacks->setText(QApplication::translate("WorldListPage", "Datapacks", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDatapacks->setToolTip(QApplication::translate("WorldListPage", "Manage datapacks inside the world.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("WorldListPage", "Actions", Q_NULLPTR));
        Q_UNUSED(WorldListPage);
    } // retranslateUi

};

namespace Ui {
    class WorldListPage: public Ui_WorldListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDLISTPAGE_H
