/********************************************************************************
** Form generated from reading UI file 'EditAccountDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACCOUNTDIALOG_H
#define UI_EDITACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAccountDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userTextBox;
    QLineEdit *passTextBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAccountDialog)
    {
        if (EditAccountDialog->objectName().isEmpty())
            EditAccountDialog->setObjectName(QStringLiteral("EditAccountDialog"));
        EditAccountDialog->resize(400, 148);
        verticalLayout = new QVBoxLayout(EditAccountDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(EditAccountDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral("Message label placeholder."));
        label->setTextFormat(Qt::RichText);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        userTextBox = new QLineEdit(EditAccountDialog);
        userTextBox->setObjectName(QStringLiteral("userTextBox"));

        verticalLayout->addWidget(userTextBox);

        passTextBox = new QLineEdit(EditAccountDialog);
        passTextBox->setObjectName(QStringLiteral("passTextBox"));
        passTextBox->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passTextBox);

        buttonBox = new QDialogButtonBox(EditAccountDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditAccountDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAccountDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAccountDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAccountDialog)
    {
        EditAccountDialog->setWindowTitle(QApplication::translate("EditAccountDialog", "Login", Q_NULLPTR));
        userTextBox->setPlaceholderText(QApplication::translate("EditAccountDialog", "Email", Q_NULLPTR));
        passTextBox->setPlaceholderText(QApplication::translate("EditAccountDialog", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditAccountDialog: public Ui_EditAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACCOUNTDIALOG_H
