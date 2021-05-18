/********************************************************************************
** Form generated from reading UI file 'ImportPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTPAGE_H
#define UI_IMPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportPage
{
public:
    QGridLayout *gridLayout;
    QPushButton *modpackBtn;
    QLineEdit *modpackEdit;
    QLabel *modpackLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ImportPage)
    {
        if (ImportPage->objectName().isEmpty())
            ImportPage->setObjectName(QStringLiteral("ImportPage"));
        ImportPage->resize(546, 405);
        gridLayout = new QGridLayout(ImportPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        modpackBtn = new QPushButton(ImportPage);
        modpackBtn->setObjectName(QStringLiteral("modpackBtn"));

        gridLayout->addWidget(modpackBtn, 1, 1, 1, 1);

        modpackEdit = new QLineEdit(ImportPage);
        modpackEdit->setObjectName(QStringLiteral("modpackEdit"));
        modpackEdit->setPlaceholderText(QStringLiteral("http://"));

        gridLayout->addWidget(modpackEdit, 1, 0, 1, 1);

        modpackLabel = new QLabel(ImportPage);
        modpackLabel->setObjectName(QStringLiteral("modpackLabel"));

        gridLayout->addWidget(modpackLabel, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 2);


        retranslateUi(ImportPage);

        QMetaObject::connectSlotsByName(ImportPage);
    } // setupUi

    void retranslateUi(QWidget *ImportPage)
    {
        modpackBtn->setText(QApplication::translate("ImportPage", "Browse", Q_NULLPTR));
        modpackLabel->setText(QApplication::translate("ImportPage", "Local file or link to a direct download:", Q_NULLPTR));
        Q_UNUSED(ImportPage);
    } // retranslateUi

};

namespace Ui {
    class ImportPage: public Ui_ImportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTPAGE_H
