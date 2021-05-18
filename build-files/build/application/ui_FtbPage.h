/********************************************************************************
** Form generated from reading UI file 'FtbPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTBPAGE_H
#define UI_FTBPAGE_H

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

class Ui_FtbPage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QGridLayout *gridLayout_3;
    QTreeView *packView;
    QTextBrowser *packDescription;

    void setupUi(QWidget *FtbPage)
    {
        if (FtbPage->objectName().isEmpty())
            FtbPage->setObjectName(QStringLiteral("FtbPage"));
        FtbPage->resize(875, 745);
        gridLayout = new QGridLayout(FtbPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        versionSelectionBox = new QComboBox(FtbPage);
        versionSelectionBox->setObjectName(QStringLiteral("versionSelectionBox"));

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(FtbPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(FtbPage);
        sortByBox->setObjectName(QStringLiteral("sortByBox"));

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 2);

        searchEdit = new QLineEdit(FtbPage);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 0, 1, 1);

        searchButton = new QPushButton(FtbPage);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        gridLayout->addWidget(searchButton, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        packView = new QTreeView(FtbPage);
        packView->setObjectName(QStringLiteral("packView"));
        packView->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(packView, 0, 0, 1, 1);

        packDescription = new QTextBrowser(FtbPage);
        packDescription->setObjectName(QStringLiteral("packDescription"));
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        gridLayout_3->addWidget(packDescription, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 2);

        QWidget::setTabOrder(searchEdit, searchButton);
        QWidget::setTabOrder(searchButton, versionSelectionBox);

        retranslateUi(FtbPage);

        QMetaObject::connectSlotsByName(FtbPage);
    } // setupUi

    void retranslateUi(QWidget *FtbPage)
    {
        label->setText(QApplication::translate("FtbPage", "Version selected:", Q_NULLPTR));
        searchButton->setText(QApplication::translate("FtbPage", "Search", Q_NULLPTR));
        Q_UNUSED(FtbPage);
    } // retranslateUi

};

namespace Ui {
    class FtbPage: public Ui_FtbPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTBPAGE_H
