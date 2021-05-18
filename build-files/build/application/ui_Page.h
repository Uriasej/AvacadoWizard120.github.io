/********************************************************************************
** Form generated from reading UI file 'Page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_H
#define UI_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace LegacyFTB {

class Ui_Page
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTreeView *publicPackList;
    QTextBrowser *publicPackDescription;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTextBrowser *thirdPartyPackDescription;
    QTreeView *thirdPartyPackList;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QTreeView *privatePackList;
    QPushButton *addPackBtn;
    QPushButton *removePackBtn;
    QTextBrowser *privatePackDescription;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QComboBox *versionSelectionBox;
    QComboBox *sortByBox;

    void setupUi(QWidget *LegacyFTB__Page)
    {
        if (LegacyFTB__Page->objectName().isEmpty())
            LegacyFTB__Page->setObjectName(QStringLiteral("LegacyFTB__Page"));
        LegacyFTB__Page->resize(709, 602);
        verticalLayout = new QVBoxLayout(LegacyFTB__Page);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(LegacyFTB__Page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        publicPackList = new QTreeView(tab);
        publicPackList->setObjectName(QStringLiteral("publicPackList"));
        publicPackList->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(publicPackList, 0, 0, 1, 1);

        publicPackDescription = new QTextBrowser(tab);
        publicPackDescription->setObjectName(QStringLiteral("publicPackDescription"));

        gridLayout->addWidget(publicPackDescription, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        thirdPartyPackDescription = new QTextBrowser(tab_2);
        thirdPartyPackDescription->setObjectName(QStringLiteral("thirdPartyPackDescription"));

        gridLayout_3->addWidget(thirdPartyPackDescription, 0, 1, 1, 1);

        thirdPartyPackList = new QTreeView(tab_2);
        thirdPartyPackList->setObjectName(QStringLiteral("thirdPartyPackList"));
        thirdPartyPackList->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(thirdPartyPackList, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        privatePackList = new QTreeView(tab_3);
        privatePackList->setObjectName(QStringLiteral("privatePackList"));
        privatePackList->setMaximumSize(QSize(250, 16777215));

        gridLayout_2->addWidget(privatePackList, 0, 0, 1, 1);

        addPackBtn = new QPushButton(tab_3);
        addPackBtn->setObjectName(QStringLiteral("addPackBtn"));

        gridLayout_2->addWidget(addPackBtn, 1, 0, 1, 1);

        removePackBtn = new QPushButton(tab_3);
        removePackBtn->setObjectName(QStringLiteral("removePackBtn"));

        gridLayout_2->addWidget(removePackBtn, 2, 0, 1, 1);

        privatePackDescription = new QTextBrowser(tab_3);
        privatePackDescription->setObjectName(QStringLiteral("privatePackDescription"));

        gridLayout_2->addWidget(privatePackDescription, 0, 1, 3, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(LegacyFTB__Page);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        versionSelectionBox = new QComboBox(LegacyFTB__Page);
        versionSelectionBox->setObjectName(QStringLiteral("versionSelectionBox"));

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        sortByBox = new QComboBox(LegacyFTB__Page);
        sortByBox->setObjectName(QStringLiteral("sortByBox"));
        sortByBox->setMinimumSize(QSize(265, 0));

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        retranslateUi(LegacyFTB__Page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LegacyFTB__Page);
    } // setupUi

    void retranslateUi(QWidget *LegacyFTB__Page)
    {
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LegacyFTB::Page", "Public", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LegacyFTB::Page", "3rd Party", Q_NULLPTR));
        addPackBtn->setText(QApplication::translate("LegacyFTB::Page", "Add pack", Q_NULLPTR));
        removePackBtn->setText(QApplication::translate("LegacyFTB::Page", "Remove selected pack", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("LegacyFTB::Page", "Private", Q_NULLPTR));
        label->setText(QApplication::translate("LegacyFTB::Page", "Version selected:", Q_NULLPTR));
        Q_UNUSED(LegacyFTB__Page);
    } // retranslateUi

};

} // namespace LegacyFTB

namespace LegacyFTB {
namespace Ui {
    class Page: public Ui_Page {};
} // namespace Ui
} // namespace LegacyFTB

#endif // UI_PAGE_H
