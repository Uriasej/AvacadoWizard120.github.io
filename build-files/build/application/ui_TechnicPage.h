/********************************************************************************
** Form generated from reading UI file 'TechnicPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNICPAGE_H
#define UI_TECHNICPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MCModInfoFrame.h"

QT_BEGIN_NAMESPACE

class Ui_TechnicPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QListView *packView;
    MCModInfoFrame *frame;

    void setupUi(QWidget *TechnicPage)
    {
        if (TechnicPage->objectName().isEmpty())
            TechnicPage->setObjectName(QStringLiteral("TechnicPage"));
        TechnicPage->resize(546, 405);
        verticalLayout = new QVBoxLayout(TechnicPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(TechnicPage);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchEdit = new QLineEdit(widget);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        horizontalLayout->addWidget(searchEdit);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addWidget(widget);

        packView = new QListView(TechnicPage);
        packView->setObjectName(QStringLiteral("packView"));
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));

        verticalLayout->addWidget(packView);

        frame = new MCModInfoFrame(TechnicPage);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        QWidget::setTabOrder(searchEdit, searchButton);
        QWidget::setTabOrder(searchButton, packView);

        retranslateUi(TechnicPage);

        QMetaObject::connectSlotsByName(TechnicPage);
    } // setupUi

    void retranslateUi(QWidget *TechnicPage)
    {
        searchButton->setText(QApplication::translate("TechnicPage", "Search", Q_NULLPTR));
        Q_UNUSED(TechnicPage);
    } // retranslateUi

};

namespace Ui {
    class TechnicPage: public Ui_TechnicPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNICPAGE_H
