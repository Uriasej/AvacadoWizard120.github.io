/********************************************************************************
** Form generated from reading UI file 'AccountListPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTLISTPAGE_H
#define UI_ACCOUNTLISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "widgets/VersionListView.h"
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_AccountListPage
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionSetDefault;
    QAction *actionNoDefault;
    QAction *actionUploadSkin;
    QAction *actionDeleteSkin;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    VersionListView *listView;
    WideBar *toolBar;

    void setupUi(QMainWindow *AccountListPage)
    {
        if (AccountListPage->objectName().isEmpty())
            AccountListPage->setObjectName(QStringLiteral("AccountListPage"));
        AccountListPage->resize(800, 600);
        actionAdd = new QAction(AccountListPage);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(AccountListPage);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionSetDefault = new QAction(AccountListPage);
        actionSetDefault->setObjectName(QStringLiteral("actionSetDefault"));
        actionNoDefault = new QAction(AccountListPage);
        actionNoDefault->setObjectName(QStringLiteral("actionNoDefault"));
        actionNoDefault->setCheckable(true);
        actionUploadSkin = new QAction(AccountListPage);
        actionUploadSkin->setObjectName(QStringLiteral("actionUploadSkin"));
        actionDeleteSkin = new QAction(AccountListPage);
        actionDeleteSkin->setObjectName(QStringLiteral("actionDeleteSkin"));
        centralwidget = new QWidget(AccountListPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new VersionListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout->addWidget(listView);

        AccountListPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(AccountListPage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        AccountListPage->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionSetDefault);
        toolBar->addAction(actionNoDefault);
        toolBar->addSeparator();
        toolBar->addAction(actionUploadSkin);
        toolBar->addAction(actionDeleteSkin);

        retranslateUi(AccountListPage);

        QMetaObject::connectSlotsByName(AccountListPage);
    } // setupUi

    void retranslateUi(QMainWindow *AccountListPage)
    {
        actionAdd->setText(QApplication::translate("AccountListPage", "Add", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("AccountListPage", "Remove", Q_NULLPTR));
        actionSetDefault->setText(QApplication::translate("AccountListPage", "Set Default", Q_NULLPTR));
        actionNoDefault->setText(QApplication::translate("AccountListPage", "No Default", Q_NULLPTR));
        actionUploadSkin->setText(QApplication::translate("AccountListPage", "Upload Skin", Q_NULLPTR));
        actionDeleteSkin->setText(QApplication::translate("AccountListPage", "Delete Skin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDeleteSkin->setToolTip(QApplication::translate("AccountListPage", "Delete the currently active skin and go back to the default one", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(AccountListPage);
    } // retranslateUi

};

namespace Ui {
    class AccountListPage: public Ui_AccountListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTLISTPAGE_H
