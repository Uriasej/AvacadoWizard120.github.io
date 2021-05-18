/********************************************************************************
** Form generated from reading UI file 'ExportInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTINSTANCEDIALOG_H
#define UI_EXPORTINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportInstanceDialog)
    {
        if (ExportInstanceDialog->objectName().isEmpty())
            ExportInstanceDialog->setObjectName(QStringLiteral("ExportInstanceDialog"));
        ExportInstanceDialog->resize(720, 625);
        verticalLayout = new QVBoxLayout(ExportInstanceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeView = new QTreeView(ExportInstanceDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(treeView);

        buttonBox = new QDialogButtonBox(ExportInstanceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportInstanceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportInstanceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportInstanceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportInstanceDialog)
    {
        ExportInstanceDialog->setWindowTitle(QApplication::translate("ExportInstanceDialog", "Export Instance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportInstanceDialog: public Ui_ExportInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTINSTANCEDIALOG_H
