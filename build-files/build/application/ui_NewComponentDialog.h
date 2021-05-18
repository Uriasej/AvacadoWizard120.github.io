/********************************************************************************
** Form generated from reading UI file 'NewComponentDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOMPONENTDIALOG_H
#define UI_NEWCOMPONENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewComponentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *nameTextBox;
    QLineEdit *uidTextBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewComponentDialog)
    {
        if (NewComponentDialog->objectName().isEmpty())
            NewComponentDialog->setObjectName(QStringLiteral("NewComponentDialog"));
        NewComponentDialog->setWindowModality(Qt::ApplicationModal);
        NewComponentDialog->resize(345, 146);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/toolbar/copy"), QSize(), QIcon::Normal, QIcon::Off);
        NewComponentDialog->setWindowIcon(icon);
        NewComponentDialog->setModal(true);
        verticalLayout = new QVBoxLayout(NewComponentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameTextBox = new QLineEdit(NewComponentDialog);
        nameTextBox->setObjectName(QStringLiteral("nameTextBox"));

        verticalLayout->addWidget(nameTextBox);

        uidTextBox = new QLineEdit(NewComponentDialog);
        uidTextBox->setObjectName(QStringLiteral("uidTextBox"));

        verticalLayout->addWidget(uidTextBox);

        line = new QFrame(NewComponentDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(NewComponentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(nameTextBox, uidTextBox);

        retranslateUi(NewComponentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewComponentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewComponentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewComponentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewComponentDialog)
    {
        NewComponentDialog->setWindowTitle(QApplication::translate("NewComponentDialog", "Add Empty Component", Q_NULLPTR));
        nameTextBox->setPlaceholderText(QApplication::translate("NewComponentDialog", "Name", Q_NULLPTR));
        uidTextBox->setPlaceholderText(QApplication::translate("NewComponentDialog", "uid", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewComponentDialog: public Ui_NewComponentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOMPONENTDIALOG_H
