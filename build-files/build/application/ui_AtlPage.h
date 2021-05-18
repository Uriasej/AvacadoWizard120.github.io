/********************************************************************************
** Form generated from reading UI file 'AtlPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATLPAGE_H
#define UI_ATLPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AtlPage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QTreeView *packView;
    QTextBrowser *packDescription;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QPushButton *resetButton;
    QLineEdit *searchEdit;

    void setupUi(QWidget *AtlPage)
    {
        if (AtlPage->objectName().isEmpty())
            AtlPage->setObjectName(QStringLiteral("AtlPage"));
        AtlPage->resize(837, 685);
        gridLayout = new QGridLayout(AtlPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        packView = new QTreeView(AtlPage);
        packView->setObjectName(QStringLiteral("packView"));
        packView->setIconSize(QSize(96, 48));

        gridLayout_3->addWidget(packView, 1, 0, 1, 1);

        packDescription = new QTextBrowser(AtlPage);
        packDescription->setObjectName(QStringLiteral("packDescription"));
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        gridLayout_3->addWidget(packDescription, 1, 1, 1, 1);

        label_2 = new QLabel(AtlPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        versionSelectionBox = new QComboBox(AtlPage);
        versionSelectionBox->setObjectName(QStringLiteral("versionSelectionBox"));

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(AtlPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(AtlPage);
        sortByBox->setObjectName(QStringLiteral("sortByBox"));

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 2);

        resetButton = new QPushButton(AtlPage);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        gridLayout->addWidget(resetButton, 0, 1, 1, 1);

        searchEdit = new QLineEdit(AtlPage);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        QWidget::setTabOrder(searchEdit, resetButton);
        QWidget::setTabOrder(resetButton, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(AtlPage);

        QMetaObject::connectSlotsByName(AtlPage);
    } // setupUi

    void retranslateUi(QWidget *AtlPage)
    {
        label_2->setText(QApplication::translate("AtlPage", "Warning: This is still a work in progress. If you run into issues with the imported modpack, it may be a bug.", Q_NULLPTR));
        label->setText(QApplication::translate("AtlPage", "Version selected:", Q_NULLPTR));
        resetButton->setText(QApplication::translate("AtlPage", "Reset", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("AtlPage", "Search and filter ...", Q_NULLPTR));
        Q_UNUSED(AtlPage);
    } // retranslateUi

};

namespace Ui {
    class AtlPage: public Ui_AtlPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATLPAGE_H
