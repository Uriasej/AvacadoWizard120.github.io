/********************************************************************************
** Form generated from reading UI file 'NewInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWINSTANCEDIALOG_H
#define UI_NEWINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QComboBox *groupBox;
    QLabel *groupLabel;
    QLineEdit *instNameTextBox;
    QLabel *nameLabel;
    QToolButton *iconButton;
    QFrame *line;

    void setupUi(QDialog *NewInstanceDialog)
    {
        if (NewInstanceDialog->objectName().isEmpty())
            NewInstanceDialog->setObjectName(QStringLiteral("NewInstanceDialog"));
        NewInstanceDialog->setWindowModality(Qt::ApplicationModal);
        NewInstanceDialog->resize(730, 127);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/toolbar/new"), QSize(), QIcon::Normal, QIcon::Off);
        NewInstanceDialog->setWindowIcon(icon);
        NewInstanceDialog->setModal(true);
        verticalLayout = new QVBoxLayout(NewInstanceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QComboBox(NewInstanceDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEditable(true);

        gridLayout_2->addWidget(groupBox, 1, 2, 1, 1);

        groupLabel = new QLabel(NewInstanceDialog);
        groupLabel->setObjectName(QStringLiteral("groupLabel"));

        gridLayout_2->addWidget(groupLabel, 1, 1, 1, 1);

        instNameTextBox = new QLineEdit(NewInstanceDialog);
        instNameTextBox->setObjectName(QStringLiteral("instNameTextBox"));

        gridLayout_2->addWidget(instNameTextBox, 0, 2, 1, 1);

        nameLabel = new QLabel(NewInstanceDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        iconButton = new QToolButton(NewInstanceDialog);
        iconButton->setObjectName(QStringLiteral("iconButton"));
        iconButton->setIconSize(QSize(80, 80));

        gridLayout_2->addWidget(iconButton, 0, 0, 2, 1);


        verticalLayout->addLayout(gridLayout_2);

        line = new QFrame(NewInstanceDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

#ifndef QT_NO_SHORTCUT
        groupLabel->setBuddy(groupBox);
        nameLabel->setBuddy(instNameTextBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(iconButton, instNameTextBox);
        QWidget::setTabOrder(instNameTextBox, groupBox);

        retranslateUi(NewInstanceDialog);

        QMetaObject::connectSlotsByName(NewInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *NewInstanceDialog)
    {
        NewInstanceDialog->setWindowTitle(QApplication::translate("NewInstanceDialog", "New Instance", Q_NULLPTR));
        groupLabel->setText(QApplication::translate("NewInstanceDialog", "&Group:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("NewInstanceDialog", "&Name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewInstanceDialog: public Ui_NewInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWINSTANCEDIALOG_H
