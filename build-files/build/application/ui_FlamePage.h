/********************************************************************************
** Form generated from reading UI file 'FlamePage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAMEPAGE_H
#define UI_FLAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlamePage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QListView *packView;
    QTextBrowser *packDescription;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QPushButton *searchButton;
    QLineEdit *searchEdit;

    void setupUi(QWidget *FlamePage)
    {
        if (FlamePage->objectName().isEmpty())
            FlamePage->setObjectName(QStringLiteral("FlamePage"));
        FlamePage->resize(837, 685);
        gridLayout = new QGridLayout(FlamePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        packView = new QListView(FlamePage);
        packView->setObjectName(QStringLiteral("packView"));
        packView->setIconSize(QSize(48, 48));
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);

        gridLayout_3->addWidget(packView, 1, 0, 1, 1);

        packDescription = new QTextBrowser(FlamePage);
        packDescription->setObjectName(QStringLiteral("packDescription"));
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        gridLayout_3->addWidget(packDescription, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        versionSelectionBox = new QComboBox(FlamePage);
        versionSelectionBox->setObjectName(QStringLiteral("versionSelectionBox"));

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(FlamePage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(FlamePage);
        sortByBox->setObjectName(QStringLiteral("sortByBox"));

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 2);

        searchButton = new QPushButton(FlamePage);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        gridLayout->addWidget(searchButton, 0, 1, 1, 1);

        searchEdit = new QLineEdit(FlamePage);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        QWidget::setTabOrder(searchEdit, searchButton);
        QWidget::setTabOrder(searchButton, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(FlamePage);

        QMetaObject::connectSlotsByName(FlamePage);
    } // setupUi

    void retranslateUi(QWidget *FlamePage)
    {
        label->setText(QApplication::translate("FlamePage", "Version selected:", Q_NULLPTR));
        searchButton->setText(QApplication::translate("FlamePage", "Search", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("FlamePage", "Search and filter ...", Q_NULLPTR));
        Q_UNUSED(FlamePage);
    } // retranslateUi

};

namespace Ui {
    class FlamePage: public Ui_FlamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAMEPAGE_H
