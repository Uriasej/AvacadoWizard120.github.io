/********************************************************************************
** Form generated from reading UI file 'ModFolderPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODFOLDERPAGE_H
#define UI_MODFOLDERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "widgets/MCModInfoFrame.h"
#include "widgets/ModListView.h"
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ModFolderPage
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionEnable;
    QAction *actionDisable;
    QAction *actionView_configs;
    QAction *actionView_Folder;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *filterEdit;
    QLabel *filterLabel;
    MCModInfoFrame *frame;
    ModListView *modTreeView;
    WideBar *actionsToolbar;

    void setupUi(QMainWindow *ModFolderPage)
    {
        if (ModFolderPage->objectName().isEmpty())
            ModFolderPage->setObjectName(QStringLiteral("ModFolderPage"));
        ModFolderPage->resize(1042, 501);
        actionAdd = new QAction(ModFolderPage);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(ModFolderPage);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionEnable = new QAction(ModFolderPage);
        actionEnable->setObjectName(QStringLiteral("actionEnable"));
        actionDisable = new QAction(ModFolderPage);
        actionDisable->setObjectName(QStringLiteral("actionDisable"));
        actionView_configs = new QAction(ModFolderPage);
        actionView_configs->setObjectName(QStringLiteral("actionView_configs"));
        actionView_Folder = new QAction(ModFolderPage);
        actionView_Folder->setObjectName(QStringLiteral("actionView_Folder"));
        centralwidget = new QWidget(ModFolderPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterEdit = new QLineEdit(centralwidget);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));
        filterEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(filterEdit, 0, 1, 1, 1);

        filterLabel = new QLabel(centralwidget);
        filterLabel->setObjectName(QStringLiteral("filterLabel"));

        gridLayout_2->addWidget(filterLabel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 1, 3);

        frame = new MCModInfoFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);

        gridLayout->addWidget(frame, 2, 1, 1, 3);

        modTreeView = new ModListView(centralwidget);
        modTreeView->setObjectName(QStringLiteral("modTreeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modTreeView->sizePolicy().hasHeightForWidth());
        modTreeView->setSizePolicy(sizePolicy1);
        modTreeView->setAcceptDrops(true);
        modTreeView->setDragDropMode(QAbstractItemView::DropOnly);

        gridLayout->addWidget(modTreeView, 1, 1, 1, 3);

        ModFolderPage->setCentralWidget(centralwidget);
        actionsToolbar = new WideBar(ModFolderPage);
        actionsToolbar->setObjectName(QStringLiteral("actionsToolbar"));
        actionsToolbar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ModFolderPage->addToolBar(Qt::RightToolBarArea, actionsToolbar);
        QWidget::setTabOrder(modTreeView, filterEdit);

        actionsToolbar->addAction(actionAdd);
        actionsToolbar->addSeparator();
        actionsToolbar->addAction(actionRemove);
        actionsToolbar->addAction(actionEnable);
        actionsToolbar->addAction(actionDisable);
        actionsToolbar->addAction(actionView_configs);
        actionsToolbar->addAction(actionView_Folder);

        retranslateUi(ModFolderPage);

        QMetaObject::connectSlotsByName(ModFolderPage);
    } // setupUi

    void retranslateUi(QMainWindow *ModFolderPage)
    {
        actionAdd->setText(QApplication::translate("ModFolderPage", "&Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("ModFolderPage", "Add mods", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRemove->setText(QApplication::translate("ModFolderPage", "&Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRemove->setToolTip(QApplication::translate("ModFolderPage", "Remove selected mods", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEnable->setText(QApplication::translate("ModFolderPage", "&Enable", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEnable->setToolTip(QApplication::translate("ModFolderPage", "Enable selected mods", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDisable->setText(QApplication::translate("ModFolderPage", "&Disable", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisable->setToolTip(QApplication::translate("ModFolderPage", "Disable selected mods", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionView_configs->setText(QApplication::translate("ModFolderPage", "View &Configs", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionView_configs->setToolTip(QApplication::translate("ModFolderPage", "Open the 'config' folder in the system file manager.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionView_Folder->setText(QApplication::translate("ModFolderPage", "View &Folder", Q_NULLPTR));
        filterLabel->setText(QApplication::translate("ModFolderPage", "Filter:", Q_NULLPTR));
        actionsToolbar->setWindowTitle(QApplication::translate("ModFolderPage", "Actions", Q_NULLPTR));
        Q_UNUSED(ModFolderPage);
    } // retranslateUi

};

namespace Ui {
    class ModFolderPage: public Ui_ModFolderPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFOLDERPAGE_H
