/********************************************************************************
** Form generated from reading UI file 'ProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDIALOG_H
#define UI_PROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProgressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *statusLabel;
    QProgressBar *taskProgressBar;
    QPushButton *skipButton;

    void setupUi(QDialog *ProgressDialog)
    {
        if (ProgressDialog->objectName().isEmpty())
            ProgressDialog->setObjectName(QStringLiteral("ProgressDialog"));
        ProgressDialog->resize(400, 100);
        ProgressDialog->setMinimumSize(QSize(400, 0));
        ProgressDialog->setMaximumSize(QSize(600, 16777215));
        gridLayout = new QGridLayout(ProgressDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        statusLabel = new QLabel(ProgressDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setWordWrap(true);

        gridLayout->addWidget(statusLabel, 0, 0, 1, 1);

        taskProgressBar = new QProgressBar(ProgressDialog);
        taskProgressBar->setObjectName(QStringLiteral("taskProgressBar"));
        taskProgressBar->setValue(24);
        taskProgressBar->setTextVisible(false);

        gridLayout->addWidget(taskProgressBar, 1, 0, 1, 1);

        skipButton = new QPushButton(ProgressDialog);
        skipButton->setObjectName(QStringLiteral("skipButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(skipButton->sizePolicy().hasHeightForWidth());
        skipButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(skipButton, 2, 0, 1, 1);


        retranslateUi(ProgressDialog);

        QMetaObject::connectSlotsByName(ProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgressDialog)
    {
        ProgressDialog->setWindowTitle(QApplication::translate("ProgressDialog", "Please wait...", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("ProgressDialog", "Task Status...", Q_NULLPTR));
        skipButton->setText(QApplication::translate("ProgressDialog", "Skip", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProgressDialog: public Ui_ProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDIALOG_H
