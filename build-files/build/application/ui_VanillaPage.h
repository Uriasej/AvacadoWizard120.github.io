/********************************************************************************
** Form generated from reading UI file 'VanillaPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VANILLAPAGE_H
#define UI_VANILLAPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/VersionSelectWidget.h"

QT_BEGIN_NAMESPACE

class Ui_VanillaPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *releaseFilter;
    QCheckBox *snapshotFilter;
    QCheckBox *oldSnapshotFilter;
    QCheckBox *betaFilter;
    QCheckBox *alphaFilter;
    QCheckBox *experimentsFilter;
    QSpacerItem *verticalSpacer;
    QPushButton *refreshBtn;
    VersionSelectWidget *versionList;

    void setupUi(QWidget *VanillaPage)
    {
        if (VanillaPage->objectName().isEmpty())
            VanillaPage->setObjectName(QStringLiteral("VanillaPage"));
        VanillaPage->resize(815, 607);
        verticalLayout_5 = new QVBoxLayout(VanillaPage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(VanillaPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        releaseFilter = new QCheckBox(tab);
        releaseFilter->setObjectName(QStringLiteral("releaseFilter"));
        releaseFilter->setCheckable(true);
        releaseFilter->setChecked(true);

        verticalLayout->addWidget(releaseFilter);

        snapshotFilter = new QCheckBox(tab);
        snapshotFilter->setObjectName(QStringLiteral("snapshotFilter"));
        snapshotFilter->setCheckable(true);

        verticalLayout->addWidget(snapshotFilter);

        oldSnapshotFilter = new QCheckBox(tab);
        oldSnapshotFilter->setObjectName(QStringLiteral("oldSnapshotFilter"));
        oldSnapshotFilter->setCheckable(true);

        verticalLayout->addWidget(oldSnapshotFilter);

        betaFilter = new QCheckBox(tab);
        betaFilter->setObjectName(QStringLiteral("betaFilter"));
        betaFilter->setCheckable(true);

        verticalLayout->addWidget(betaFilter);

        alphaFilter = new QCheckBox(tab);
        alphaFilter->setObjectName(QStringLiteral("alphaFilter"));
        alphaFilter->setCheckable(true);

        verticalLayout->addWidget(alphaFilter);

        experimentsFilter = new QCheckBox(tab);
        experimentsFilter->setObjectName(QStringLiteral("experimentsFilter"));
        experimentsFilter->setCheckable(true);

        verticalLayout->addWidget(experimentsFilter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        refreshBtn = new QPushButton(tab);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));

        verticalLayout->addWidget(refreshBtn);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        versionList = new VersionSelectWidget(tab);
        versionList->setObjectName(QStringLiteral("versionList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(versionList->sizePolicy().hasHeightForWidth());
        versionList->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(versionList, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral(""));

        verticalLayout_5->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, releaseFilter);
        QWidget::setTabOrder(releaseFilter, snapshotFilter);
        QWidget::setTabOrder(snapshotFilter, oldSnapshotFilter);
        QWidget::setTabOrder(oldSnapshotFilter, betaFilter);
        QWidget::setTabOrder(betaFilter, alphaFilter);
        QWidget::setTabOrder(alphaFilter, experimentsFilter);
        QWidget::setTabOrder(experimentsFilter, refreshBtn);

        retranslateUi(VanillaPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VanillaPage);
    } // setupUi

    void retranslateUi(QWidget *VanillaPage)
    {
        label->setText(QApplication::translate("VanillaPage", "Filter", Q_NULLPTR));
        releaseFilter->setText(QApplication::translate("VanillaPage", "Releases", Q_NULLPTR));
        snapshotFilter->setText(QApplication::translate("VanillaPage", "Snapshots", Q_NULLPTR));
        oldSnapshotFilter->setText(QApplication::translate("VanillaPage", "Old Snapshots", Q_NULLPTR));
        betaFilter->setText(QApplication::translate("VanillaPage", "Betas", Q_NULLPTR));
        alphaFilter->setText(QApplication::translate("VanillaPage", "Alphas", Q_NULLPTR));
        experimentsFilter->setText(QApplication::translate("VanillaPage", "Experiments", Q_NULLPTR));
        refreshBtn->setText(QApplication::translate("VanillaPage", "Refresh", Q_NULLPTR));
        Q_UNUSED(VanillaPage);
    } // retranslateUi

};

namespace Ui {
    class VanillaPage: public Ui_VanillaPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VANILLAPAGE_H
