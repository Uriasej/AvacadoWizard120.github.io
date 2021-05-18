/********************************************************************************
** Form generated from reading UI file 'SkinUploadDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINUPLOADDIALOG_H
#define UI_SKINUPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SkinUploadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *fileBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *skinPathTextBox;
    QPushButton *skinBrowseBtn;
    QGroupBox *modelBox;
    QVBoxLayout *verticalLayout_1;
    QRadioButton *steveBtn;
    QRadioButton *alexBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SkinUploadDialog)
    {
        if (SkinUploadDialog->objectName().isEmpty())
            SkinUploadDialog->setObjectName(QStringLiteral("SkinUploadDialog"));
        SkinUploadDialog->resize(413, 300);
        verticalLayout = new QVBoxLayout(SkinUploadDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fileBox = new QGroupBox(SkinUploadDialog);
        fileBox->setObjectName(QStringLiteral("fileBox"));
        horizontalLayout = new QHBoxLayout(fileBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        skinPathTextBox = new QLineEdit(fileBox);
        skinPathTextBox->setObjectName(QStringLiteral("skinPathTextBox"));

        horizontalLayout->addWidget(skinPathTextBox);

        skinBrowseBtn = new QPushButton(fileBox);
        skinBrowseBtn->setObjectName(QStringLiteral("skinBrowseBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(skinBrowseBtn->sizePolicy().hasHeightForWidth());
        skinBrowseBtn->setSizePolicy(sizePolicy);
        skinBrowseBtn->setMaximumSize(QSize(28, 16777215));
        skinBrowseBtn->setText(QStringLiteral("..."));

        horizontalLayout->addWidget(skinBrowseBtn);


        verticalLayout->addWidget(fileBox);

        modelBox = new QGroupBox(SkinUploadDialog);
        modelBox->setObjectName(QStringLiteral("modelBox"));
        verticalLayout_1 = new QVBoxLayout(modelBox);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        steveBtn = new QRadioButton(modelBox);
        steveBtn->setObjectName(QStringLiteral("steveBtn"));
        steveBtn->setChecked(true);

        verticalLayout_1->addWidget(steveBtn);

        alexBtn = new QRadioButton(modelBox);
        alexBtn->setObjectName(QStringLiteral("alexBtn"));

        verticalLayout_1->addWidget(alexBtn);


        verticalLayout->addWidget(modelBox);

        buttonBox = new QDialogButtonBox(SkinUploadDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SkinUploadDialog);

        QMetaObject::connectSlotsByName(SkinUploadDialog);
    } // setupUi

    void retranslateUi(QDialog *SkinUploadDialog)
    {
        SkinUploadDialog->setWindowTitle(QApplication::translate("SkinUploadDialog", "Skin Upload", Q_NULLPTR));
        fileBox->setTitle(QApplication::translate("SkinUploadDialog", "Skin File", Q_NULLPTR));
        modelBox->setTitle(QApplication::translate("SkinUploadDialog", "Player Model", Q_NULLPTR));
        steveBtn->setText(QApplication::translate("SkinUploadDialog", "Steve Model", Q_NULLPTR));
        alexBtn->setText(QApplication::translate("SkinUploadDialog", "Alex Model", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SkinUploadDialog: public Ui_SkinUploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINUPLOADDIALOG_H
