/********************************************************************************
** Form generated from reading UI file 'UpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextBrowser *changelogBrowser;
    QGridLayout *gridLayout;
    QPushButton *btnUpdateNow;
    QPushButton *btnUpdateLater;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QStringLiteral("UpdateDialog"));
        UpdateDialog->resize(657, 673);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/toolbar/checkupdate"), QSize(), QIcon::Normal, QIcon::Off);
        UpdateDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(UpdateDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(UpdateDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        changelogBrowser = new QTextBrowser(UpdateDialog);
        changelogBrowser->setObjectName(QStringLiteral("changelogBrowser"));
        changelogBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(changelogBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnUpdateNow = new QPushButton(UpdateDialog);
        btnUpdateNow->setObjectName(QStringLiteral("btnUpdateNow"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnUpdateNow->sizePolicy().hasHeightForWidth());
        btnUpdateNow->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnUpdateNow, 0, 0, 1, 1);

        btnUpdateLater = new QPushButton(UpdateDialog);
        btnUpdateLater->setObjectName(QStringLiteral("btnUpdateLater"));
        sizePolicy.setHeightForWidth(btnUpdateLater->sizePolicy().hasHeightForWidth());
        btnUpdateLater->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnUpdateLater, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(changelogBrowser);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(changelogBrowser, btnUpdateNow);
        QWidget::setTabOrder(btnUpdateNow, btnUpdateLater);

        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QApplication::translate("UpdateDialog", "MultiMC Update", Q_NULLPTR));
        label->setText(QString());
        btnUpdateNow->setText(QApplication::translate("UpdateDialog", "Update now", Q_NULLPTR));
        btnUpdateLater->setText(QApplication::translate("UpdateDialog", "Don't update yet", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
