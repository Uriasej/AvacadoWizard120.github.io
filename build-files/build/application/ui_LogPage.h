/********************************************************************************
** Form generated from reading UI file 'LogPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGPAGE_H
#define UI_LOGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/LogView.h"

QT_BEGIN_NAMESPACE

class Ui_LogPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    LogView *text;
    QHBoxLayout *horizontalLayout;
    QCheckBox *trackLogCheckbox;
    QCheckBox *wrapCheckbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCopy;
    QPushButton *btnPaste;
    QPushButton *btnClear;
    QLabel *label;
    QPushButton *findButton;
    QLineEdit *searchBar;
    QPushButton *btnBottom;
    QFrame *line;

    void setupUi(QWidget *LogPage)
    {
        if (LogPage->objectName().isEmpty())
            LogPage->setObjectName(QStringLiteral("LogPage"));
        LogPage->resize(825, 782);
        verticalLayout = new QVBoxLayout(LogPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(LogPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        text = new LogView(tab);
        text->setObjectName(QStringLiteral("text"));
        text->setUndoRedoEnabled(false);
        text->setReadOnly(true);
        text->setPlainText(QStringLiteral(""));
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        text->setCenterOnScroll(false);

        gridLayout->addWidget(text, 1, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        trackLogCheckbox = new QCheckBox(tab);
        trackLogCheckbox->setObjectName(QStringLiteral("trackLogCheckbox"));
        trackLogCheckbox->setChecked(true);

        horizontalLayout->addWidget(trackLogCheckbox);

        wrapCheckbox = new QCheckBox(tab);
        wrapCheckbox->setObjectName(QStringLiteral("wrapCheckbox"));
        wrapCheckbox->setChecked(true);

        horizontalLayout->addWidget(wrapCheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCopy = new QPushButton(tab);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));

        horizontalLayout->addWidget(btnCopy);

        btnPaste = new QPushButton(tab);
        btnPaste->setObjectName(QStringLiteral("btnPaste"));

        horizontalLayout->addWidget(btnPaste);

        btnClear = new QPushButton(tab);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        findButton = new QPushButton(tab);
        findButton->setObjectName(QStringLiteral("findButton"));

        gridLayout->addWidget(findButton, 2, 2, 1, 1);

        searchBar = new QLineEdit(tab);
        searchBar->setObjectName(QStringLiteral("searchBar"));

        gridLayout->addWidget(searchBar, 2, 1, 1, 1);

        btnBottom = new QPushButton(tab);
        btnBottom->setObjectName(QStringLiteral("btnBottom"));

        gridLayout->addWidget(btnBottom, 2, 4, 1, 1);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("Tab 1"));

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, trackLogCheckbox);
        QWidget::setTabOrder(trackLogCheckbox, wrapCheckbox);
        QWidget::setTabOrder(wrapCheckbox, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnClear);
        QWidget::setTabOrder(btnClear, text);
        QWidget::setTabOrder(text, searchBar);
        QWidget::setTabOrder(searchBar, findButton);

        retranslateUi(LogPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogPage);
    } // setupUi

    void retranslateUi(QWidget *LogPage)
    {
        trackLogCheckbox->setText(QApplication::translate("LogPage", "Keep updating", Q_NULLPTR));
        wrapCheckbox->setText(QApplication::translate("LogPage", "Wrap lines", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnCopy->setToolTip(QApplication::translate("LogPage", "Copy the whole log into the clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCopy->setText(QApplication::translate("LogPage", "&Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPaste->setToolTip(QApplication::translate("LogPage", "Upload the log to paste.ee - it will stay online for a month", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPaste->setText(QApplication::translate("LogPage", "Upload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnClear->setToolTip(QApplication::translate("LogPage", "Clear the log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QApplication::translate("LogPage", "Clear", Q_NULLPTR));
        label->setText(QApplication::translate("LogPage", "Search:", Q_NULLPTR));
        findButton->setText(QApplication::translate("LogPage", "Find", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnBottom->setToolTip(QApplication::translate("LogPage", "Scroll all the way to bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnBottom->setText(QApplication::translate("LogPage", "Bottom", Q_NULLPTR));
        Q_UNUSED(LogPage);
    } // retranslateUi

};

namespace Ui {
    class LogPage: public Ui_LogPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGPAGE_H
