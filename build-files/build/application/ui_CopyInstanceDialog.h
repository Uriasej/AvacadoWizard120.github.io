/********************************************************************************
** Form generated from reading UI file 'CopyInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYINSTANCEDIALOG_H
#define UI_COPYINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *iconBtnLayout;
    QSpacerItem *iconBtnLeftSpacer;
    QToolButton *iconButton;
    QSpacerItem *iconBtnRightSpacer;
    QLineEdit *instNameTextBox;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *labelVersion_3;
    QComboBox *groupBox;
    QCheckBox *copySavesCheckbox;
    QCheckBox *keepPlaytimeCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyInstanceDialog)
    {
        if (CopyInstanceDialog->objectName().isEmpty())
            CopyInstanceDialog->setObjectName(QStringLiteral("CopyInstanceDialog"));
        CopyInstanceDialog->setWindowModality(Qt::ApplicationModal);
        CopyInstanceDialog->resize(345, 323);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/toolbar/copy"), QSize(), QIcon::Normal, QIcon::Off);
        CopyInstanceDialog->setWindowIcon(icon);
        CopyInstanceDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CopyInstanceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        iconBtnLayout = new QHBoxLayout();
        iconBtnLayout->setObjectName(QStringLiteral("iconBtnLayout"));
        iconBtnLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iconBtnLayout->addItem(iconBtnLeftSpacer);

        iconButton = new QToolButton(CopyInstanceDialog);
        iconButton->setObjectName(QStringLiteral("iconButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/instances/infinity"), QSize(), QIcon::Normal, QIcon::Off);
        iconButton->setIcon(icon1);
        iconButton->setIconSize(QSize(80, 80));

        iconBtnLayout->addWidget(iconButton);

        iconBtnRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iconBtnLayout->addItem(iconBtnRightSpacer);


        verticalLayout->addLayout(iconBtnLayout);

        instNameTextBox = new QLineEdit(CopyInstanceDialog);
        instNameTextBox->setObjectName(QStringLiteral("instNameTextBox"));

        verticalLayout->addWidget(instNameTextBox);

        line = new QFrame(CopyInstanceDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelVersion_3 = new QLabel(CopyInstanceDialog);
        labelVersion_3->setObjectName(QStringLiteral("labelVersion_3"));

        gridLayout->addWidget(labelVersion_3, 0, 0, 1, 1);

        groupBox = new QComboBox(CopyInstanceDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setEditable(true);

        gridLayout->addWidget(groupBox, 0, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        copySavesCheckbox = new QCheckBox(CopyInstanceDialog);
        copySavesCheckbox->setObjectName(QStringLiteral("copySavesCheckbox"));

        verticalLayout->addWidget(copySavesCheckbox);

        keepPlaytimeCheckbox = new QCheckBox(CopyInstanceDialog);
        keepPlaytimeCheckbox->setObjectName(QStringLiteral("keepPlaytimeCheckbox"));

        verticalLayout->addWidget(keepPlaytimeCheckbox);

        buttonBox = new QDialogButtonBox(CopyInstanceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelVersion_3->setBuddy(groupBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(iconButton, instNameTextBox);
        QWidget::setTabOrder(instNameTextBox, groupBox);
        QWidget::setTabOrder(groupBox, copySavesCheckbox);
        QWidget::setTabOrder(copySavesCheckbox, keepPlaytimeCheckbox);

        retranslateUi(CopyInstanceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyInstanceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyInstanceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyInstanceDialog)
    {
        CopyInstanceDialog->setWindowTitle(QApplication::translate("CopyInstanceDialog", "Copy Instance", Q_NULLPTR));
        instNameTextBox->setPlaceholderText(QApplication::translate("CopyInstanceDialog", "Name", Q_NULLPTR));
        labelVersion_3->setText(QApplication::translate("CopyInstanceDialog", "&Group", Q_NULLPTR));
        copySavesCheckbox->setText(QApplication::translate("CopyInstanceDialog", "Copy saves", Q_NULLPTR));
        keepPlaytimeCheckbox->setText(QApplication::translate("CopyInstanceDialog", "Keep play time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CopyInstanceDialog: public Ui_CopyInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYINSTANCEDIALOG_H
