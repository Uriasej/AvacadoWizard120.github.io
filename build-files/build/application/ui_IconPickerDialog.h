/********************************************************************************
** Form generated from reading UI file 'IconPickerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONPICKERDIALOG_H
#define UI_ICONPICKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IconPickerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListView *iconView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IconPickerDialog)
    {
        if (IconPickerDialog->objectName().isEmpty())
            IconPickerDialog->setObjectName(QStringLiteral("IconPickerDialog"));
        IconPickerDialog->resize(676, 555);
        verticalLayout = new QVBoxLayout(IconPickerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        iconView = new QListView(IconPickerDialog);
        iconView->setObjectName(QStringLiteral("iconView"));

        verticalLayout->addWidget(iconView);

        buttonBox = new QDialogButtonBox(IconPickerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IconPickerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), IconPickerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IconPickerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IconPickerDialog);
    } // setupUi

    void retranslateUi(QDialog *IconPickerDialog)
    {
        IconPickerDialog->setWindowTitle(QApplication::translate("IconPickerDialog", "Pick icon", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IconPickerDialog: public Ui_IconPickerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONPICKERDIALOG_H
