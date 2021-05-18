/********************************************************************************
** Form generated from reading UI file 'OtherLogsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERLOGSPAGE_H
#define UI_OTHERLOGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtherLogsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLineEdit *searchBar;
    QPushButton *findButton;
    QPlainTextEdit *text;
    QGridLayout *gridLayout;
    QPushButton *btnCopy;
    QPushButton *btnDelete;
    QPushButton *btnPaste;
    QPushButton *btnClean;
    QPushButton *btnReload;
    QComboBox *selectLogBox;
    QLabel *label;

    void setupUi(QWidget *OtherLogsPage)
    {
        if (OtherLogsPage->objectName().isEmpty())
            OtherLogsPage->setObjectName(QStringLiteral("OtherLogsPage"));
        OtherLogsPage->resize(657, 538);
        verticalLayout_2 = new QVBoxLayout(OtherLogsPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(OtherLogsPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        searchBar = new QLineEdit(tab);
        searchBar->setObjectName(QStringLiteral("searchBar"));

        gridLayout_2->addWidget(searchBar, 2, 1, 1, 1);

        findButton = new QPushButton(tab);
        findButton->setObjectName(QStringLiteral("findButton"));

        gridLayout_2->addWidget(findButton, 2, 2, 1, 1);

        text = new QPlainTextEdit(tab);
        text->setObjectName(QStringLiteral("text"));
        text->setEnabled(false);
        text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        text->setReadOnly(true);
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(text, 1, 0, 1, 4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnCopy = new QPushButton(tab);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));

        gridLayout->addWidget(btnCopy, 3, 1, 1, 1);

        btnDelete = new QPushButton(tab);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout->addWidget(btnDelete, 3, 3, 1, 1);

        btnPaste = new QPushButton(tab);
        btnPaste->setObjectName(QStringLiteral("btnPaste"));

        gridLayout->addWidget(btnPaste, 3, 2, 1, 1);

        btnClean = new QPushButton(tab);
        btnClean->setObjectName(QStringLiteral("btnClean"));

        gridLayout->addWidget(btnClean, 3, 4, 1, 1);

        btnReload = new QPushButton(tab);
        btnReload->setObjectName(QStringLiteral("btnReload"));

        gridLayout->addWidget(btnReload, 3, 0, 1, 1);

        selectLogBox = new QComboBox(tab);
        selectLogBox->setObjectName(QStringLiteral("selectLogBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectLogBox->sizePolicy().hasHeightForWidth());
        selectLogBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(selectLogBox, 0, 0, 1, 5);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("Tab 1"));

        verticalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, selectLogBox);
        QWidget::setTabOrder(selectLogBox, btnReload);
        QWidget::setTabOrder(btnReload, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnDelete);
        QWidget::setTabOrder(btnDelete, btnClean);
        QWidget::setTabOrder(btnClean, text);
        QWidget::setTabOrder(text, searchBar);
        QWidget::setTabOrder(searchBar, findButton);

        retranslateUi(OtherLogsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OtherLogsPage);
    } // setupUi

    void retranslateUi(QWidget *OtherLogsPage)
    {
        findButton->setText(QApplication::translate("OtherLogsPage", "Find", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnCopy->setToolTip(QApplication::translate("OtherLogsPage", "Copy the whole log into the clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCopy->setText(QApplication::translate("OtherLogsPage", "&Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("OtherLogsPage", "Clear the log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("OtherLogsPage", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPaste->setToolTip(QApplication::translate("OtherLogsPage", "Upload the log to paste.ee - it will stay online for a month", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPaste->setText(QApplication::translate("OtherLogsPage", "Upload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnClean->setToolTip(QApplication::translate("OtherLogsPage", "Clear the log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnClean->setText(QApplication::translate("OtherLogsPage", "Clean", Q_NULLPTR));
        btnReload->setText(QApplication::translate("OtherLogsPage", "Reload", Q_NULLPTR));
        label->setText(QApplication::translate("OtherLogsPage", "Search:", Q_NULLPTR));
        Q_UNUSED(OtherLogsPage);
    } // retranslateUi

};

namespace Ui {
    class OtherLogsPage: public Ui_OtherLogsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERLOGSPAGE_H
