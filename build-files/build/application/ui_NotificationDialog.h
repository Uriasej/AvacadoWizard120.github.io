/********************************************************************************
** Form generated from reading UI file 'NotificationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONDIALOG_H
#define UI_NOTIFICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NotificationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *iconLabel;
    QLabel *messageLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *dontShowAgainBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *NotificationDialog)
    {
        if (NotificationDialog->objectName().isEmpty())
            NotificationDialog->setObjectName(QStringLiteral("NotificationDialog"));
        NotificationDialog->resize(320, 240);
        verticalLayout = new QVBoxLayout(NotificationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        iconLabel = new QLabel(NotificationDialog);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setText(QStringLiteral("TextLabel"));

        horizontalLayout_2->addWidget(iconLabel);

        messageLabel = new QLabel(NotificationDialog);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setText(QStringLiteral("TextLabel"));
        messageLabel->setWordWrap(true);
        messageLabel->setOpenExternalLinks(true);
        messageLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout_2->addWidget(messageLabel);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dontShowAgainBtn = new QPushButton(NotificationDialog);
        dontShowAgainBtn->setObjectName(QStringLiteral("dontShowAgainBtn"));
        dontShowAgainBtn->setEnabled(false);

        horizontalLayout->addWidget(dontShowAgainBtn);

        closeBtn = new QPushButton(NotificationDialog);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setEnabled(false);

        horizontalLayout->addWidget(closeBtn);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(NotificationDialog);

        QMetaObject::connectSlotsByName(NotificationDialog);
    } // setupUi

    void retranslateUi(QDialog *NotificationDialog)
    {
        NotificationDialog->setWindowTitle(QApplication::translate("NotificationDialog", "Notification", Q_NULLPTR));
        dontShowAgainBtn->setText(QApplication::translate("NotificationDialog", "Don't show again", Q_NULLPTR));
        closeBtn->setText(QApplication::translate("NotificationDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NotificationDialog: public Ui_NotificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONDIALOG_H
