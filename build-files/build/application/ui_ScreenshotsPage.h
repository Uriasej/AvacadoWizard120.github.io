/********************************************************************************
** Form generated from reading UI file 'ScreenshotsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTSPAGE_H
#define UI_SCREENSHOTSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ScreenshotsPage
{
public:
    QAction *actionUpload;
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionView_Folder;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    WideBar *toolBar;

    void setupUi(QMainWindow *ScreenshotsPage)
    {
        if (ScreenshotsPage->objectName().isEmpty())
            ScreenshotsPage->setObjectName(QStringLiteral("ScreenshotsPage"));
        ScreenshotsPage->resize(800, 600);
        actionUpload = new QAction(ScreenshotsPage);
        actionUpload->setObjectName(QStringLiteral("actionUpload"));
        actionDelete = new QAction(ScreenshotsPage);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionRename = new QAction(ScreenshotsPage);
        actionRename->setObjectName(QStringLiteral("actionRename"));
        actionView_Folder = new QAction(ScreenshotsPage);
        actionView_Folder->setObjectName(QStringLiteral("actionView_Folder"));
        centralwidget = new QWidget(ScreenshotsPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(listView);

        ScreenshotsPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(ScreenshotsPage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ScreenshotsPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionUpload);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionRename);
        toolBar->addAction(actionView_Folder);

        retranslateUi(ScreenshotsPage);

        QMetaObject::connectSlotsByName(ScreenshotsPage);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenshotsPage)
    {
        actionUpload->setText(QApplication::translate("ScreenshotsPage", "Upload", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("ScreenshotsPage", "Delete", Q_NULLPTR));
        actionRename->setText(QApplication::translate("ScreenshotsPage", "Rename", Q_NULLPTR));
        actionView_Folder->setText(QApplication::translate("ScreenshotsPage", "View Folder", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("ScreenshotsPage", "Actions", Q_NULLPTR));
        Q_UNUSED(ScreenshotsPage);
    } // retranslateUi

};

namespace Ui {
    class ScreenshotsPage: public Ui_ScreenshotsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTSPAGE_H
