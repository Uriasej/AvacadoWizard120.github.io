/********************************************************************************
** Form generated from reading UI file 'VersionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONPAGE_H
#define UI_VERSIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MCModInfoFrame.h"
#include "widgets/ModListView.h"
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_VersionPage
{
public:
    QAction *actionChange_version;
    QAction *actionMove_up;
    QAction *actionMove_down;
    QAction *actionRemove;
    QAction *actionCustomize;
    QAction *actionEdit;
    QAction *actionRevert;
    QAction *actionInstall_Forge;
    QAction *actionInstall_Fabric;
    QAction *actionInstall_LiteLoader;
    QAction *actionInstall_mods;
    QAction *actionAdd_to_Minecraft_jar;
    QAction *actionReplace_Minecraft_jar;
    QAction *actionAdd_Empty;
    QAction *actionReload;
    QAction *actionDownload_All;
    QAction *actionMinecraftFolder;
    QAction *actionLibrariesFolder;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    ModListView *packageView;
    MCModInfoFrame *frame;
    WideBar *toolBar;

    void setupUi(QMainWindow *VersionPage)
    {
        if (VersionPage->objectName().isEmpty())
            VersionPage->setObjectName(QStringLiteral("VersionPage"));
        VersionPage->resize(961, 1091);
        actionChange_version = new QAction(VersionPage);
        actionChange_version->setObjectName(QStringLiteral("actionChange_version"));
        actionMove_up = new QAction(VersionPage);
        actionMove_up->setObjectName(QStringLiteral("actionMove_up"));
        actionMove_down = new QAction(VersionPage);
        actionMove_down->setObjectName(QStringLiteral("actionMove_down"));
        actionRemove = new QAction(VersionPage);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionCustomize = new QAction(VersionPage);
        actionCustomize->setObjectName(QStringLiteral("actionCustomize"));
        actionEdit = new QAction(VersionPage);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionRevert = new QAction(VersionPage);
        actionRevert->setObjectName(QStringLiteral("actionRevert"));
        actionInstall_Forge = new QAction(VersionPage);
        actionInstall_Forge->setObjectName(QStringLiteral("actionInstall_Forge"));
        actionInstall_Fabric = new QAction(VersionPage);
        actionInstall_Fabric->setObjectName(QStringLiteral("actionInstall_Fabric"));
        actionInstall_LiteLoader = new QAction(VersionPage);
        actionInstall_LiteLoader->setObjectName(QStringLiteral("actionInstall_LiteLoader"));
        actionInstall_mods = new QAction(VersionPage);
        actionInstall_mods->setObjectName(QStringLiteral("actionInstall_mods"));
        actionAdd_to_Minecraft_jar = new QAction(VersionPage);
        actionAdd_to_Minecraft_jar->setObjectName(QStringLiteral("actionAdd_to_Minecraft_jar"));
        actionReplace_Minecraft_jar = new QAction(VersionPage);
        actionReplace_Minecraft_jar->setObjectName(QStringLiteral("actionReplace_Minecraft_jar"));
        actionAdd_Empty = new QAction(VersionPage);
        actionAdd_Empty->setObjectName(QStringLiteral("actionAdd_Empty"));
        actionReload = new QAction(VersionPage);
        actionReload->setObjectName(QStringLiteral("actionReload"));
        actionDownload_All = new QAction(VersionPage);
        actionDownload_All->setObjectName(QStringLiteral("actionDownload_All"));
        actionMinecraftFolder = new QAction(VersionPage);
        actionMinecraftFolder->setObjectName(QStringLiteral("actionMinecraftFolder"));
        actionLibrariesFolder = new QAction(VersionPage);
        actionLibrariesFolder->setObjectName(QStringLiteral("actionLibrariesFolder"));
        centralwidget = new QWidget(VersionPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        packageView = new ModListView(centralwidget);
        packageView->setObjectName(QStringLiteral("packageView"));
        packageView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        packageView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packageView->setSortingEnabled(false);
        packageView->setHeaderHidden(false);
        packageView->header()->setVisible(true);

        verticalLayout->addWidget(packageView);

        frame = new MCModInfoFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);

        VersionPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(VersionPage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        VersionPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionChange_version);
        toolBar->addAction(actionMove_up);
        toolBar->addAction(actionMove_down);
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addAction(actionCustomize);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionRevert);
        toolBar->addSeparator();
        toolBar->addAction(actionInstall_Forge);
        toolBar->addAction(actionInstall_Fabric);
        toolBar->addAction(actionInstall_LiteLoader);
        toolBar->addAction(actionInstall_mods);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd_to_Minecraft_jar);
        toolBar->addAction(actionReplace_Minecraft_jar);
        toolBar->addAction(actionAdd_Empty);
        toolBar->addSeparator();
        toolBar->addAction(actionMinecraftFolder);
        toolBar->addAction(actionLibrariesFolder);
        toolBar->addSeparator();
        toolBar->addAction(actionReload);
        toolBar->addAction(actionDownload_All);

        retranslateUi(VersionPage);

        QMetaObject::connectSlotsByName(VersionPage);
    } // setupUi

    void retranslateUi(QMainWindow *VersionPage)
    {
        actionChange_version->setText(QApplication::translate("VersionPage", "Change version", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionChange_version->setToolTip(QApplication::translate("VersionPage", "Change version of the selected package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMove_up->setText(QApplication::translate("VersionPage", "Move up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMove_up->setToolTip(QApplication::translate("VersionPage", "Make the selected package apply sooner.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMove_down->setText(QApplication::translate("VersionPage", "Move down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMove_down->setToolTip(QApplication::translate("VersionPage", "Make the selected package apply later.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRemove->setText(QApplication::translate("VersionPage", "Remove", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRemove->setToolTip(QApplication::translate("VersionPage", "Remove selected package from the instance.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCustomize->setText(QApplication::translate("VersionPage", "Customize", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCustomize->setToolTip(QApplication::translate("VersionPage", "Customize selected package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEdit->setText(QApplication::translate("VersionPage", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEdit->setToolTip(QApplication::translate("VersionPage", "Edit selected package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRevert->setText(QApplication::translate("VersionPage", "Revert", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRevert->setToolTip(QApplication::translate("VersionPage", "Revert the selected package to default.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInstall_Forge->setText(QApplication::translate("VersionPage", "Install Forge", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInstall_Forge->setToolTip(QApplication::translate("VersionPage", "Install the Minecraft Forge package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInstall_Fabric->setText(QApplication::translate("VersionPage", "Install Fabric", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInstall_Fabric->setToolTip(QApplication::translate("VersionPage", "Install the Fabric Loader package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInstall_LiteLoader->setText(QApplication::translate("VersionPage", "Install LiteLoader", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInstall_LiteLoader->setToolTip(QApplication::translate("VersionPage", "Install the LiteLoader package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInstall_mods->setText(QApplication::translate("VersionPage", "Install mods", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInstall_mods->setToolTip(QApplication::translate("VersionPage", "Install normal mods.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAdd_to_Minecraft_jar->setText(QApplication::translate("VersionPage", "Add to Minecraft.jar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd_to_Minecraft_jar->setToolTip(QApplication::translate("VersionPage", "Add a mod into the Minecraft jar file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReplace_Minecraft_jar->setText(QApplication::translate("VersionPage", "Replace Minecraft.jar", Q_NULLPTR));
        actionAdd_Empty->setText(QApplication::translate("VersionPage", "Add Empty", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd_Empty->setToolTip(QApplication::translate("VersionPage", "Add an empty custom package.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReload->setText(QApplication::translate("VersionPage", "Reload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("VersionPage", "Reload all packages.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDownload_All->setText(QApplication::translate("VersionPage", "Download All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDownload_All->setToolTip(QApplication::translate("VersionPage", "Download the files needed to launch the instance now.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMinecraftFolder->setText(QApplication::translate("VersionPage", "Open .minecraft", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMinecraftFolder->setToolTip(QApplication::translate("VersionPage", "Open the instance's .minecraft folder.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLibrariesFolder->setText(QApplication::translate("VersionPage", "Open libraries", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLibrariesFolder->setToolTip(QApplication::translate("VersionPage", "Open the instance's local libraries folder.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("VersionPage", "Actions", Q_NULLPTR));
        Q_UNUSED(VersionPage);
    } // retranslateUi

};

namespace Ui {
    class VersionPage: public Ui_VersionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONPAGE_H
