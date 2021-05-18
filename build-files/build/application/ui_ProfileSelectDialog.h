/********************************************************************************
** Form generated from reading UI file 'ProfileSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILESELECTDIALOG_H
#define UI_PROFILESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProfileSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *msgLabel;
    QTreeWidget *listView;
    QHBoxLayout *horizontalLayout;
    QCheckBox *globalDefaultCheck;
    QCheckBox *instDefaultCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProfileSelectDialog)
    {
        if (ProfileSelectDialog->objectName().isEmpty())
            ProfileSelectDialog->setObjectName(QStringLiteral("ProfileSelectDialog"));
        ProfileSelectDialog->resize(465, 300);
        verticalLayout = new QVBoxLayout(ProfileSelectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        msgLabel = new QLabel(ProfileSelectDialog);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));

        verticalLayout->addWidget(msgLabel);

        listView = new QTreeWidget(ProfileSelectDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        listView->setHeaderItem(__qtreewidgetitem);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        globalDefaultCheck = new QCheckBox(ProfileSelectDialog);
        globalDefaultCheck->setObjectName(QStringLiteral("globalDefaultCheck"));

        horizontalLayout->addWidget(globalDefaultCheck);

        instDefaultCheck = new QCheckBox(ProfileSelectDialog);
        instDefaultCheck->setObjectName(QStringLiteral("instDefaultCheck"));

        horizontalLayout->addWidget(instDefaultCheck);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ProfileSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProfileSelectDialog);

        QMetaObject::connectSlotsByName(ProfileSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileSelectDialog)
    {
        ProfileSelectDialog->setWindowTitle(QApplication::translate("ProfileSelectDialog", "Select an Account", Q_NULLPTR));
        msgLabel->setText(QApplication::translate("ProfileSelectDialog", "Select a profile.", Q_NULLPTR));
        globalDefaultCheck->setText(QApplication::translate("ProfileSelectDialog", "Use as default?", Q_NULLPTR));
        instDefaultCheck->setText(QApplication::translate("ProfileSelectDialog", "Use as default for this instance only?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProfileSelectDialog: public Ui_ProfileSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILESELECTDIALOG_H
