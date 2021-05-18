/********************************************************************************
** Form generated from reading UI file 'ServersPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERSPAGE_H
#define UI_SERVERSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ServersPage
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionMove_Up;
    QAction *actionMove_Down;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTreeView *serversView;
    QGridLayout *gridLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QLabel *addressLabel;
    QLineEdit *addressLine;
    QLabel *resourcesLabel;
    QComboBox *resourceComboBox;
    WideBar *toolBar;

    void setupUi(QMainWindow *ServersPage)
    {
        if (ServersPage->objectName().isEmpty())
            ServersPage->setObjectName(QStringLiteral("ServersPage"));
        ServersPage->resize(1318, 879);
        actionAdd = new QAction(ServersPage);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(ServersPage);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionMove_Up = new QAction(ServersPage);
        actionMove_Up->setObjectName(QStringLiteral("actionMove_Up"));
        actionMove_Down = new QAction(ServersPage);
        actionMove_Down->setObjectName(QStringLiteral("actionMove_Down"));
        centralwidget = new QWidget(ServersPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        serversView = new QTreeView(centralwidget);
        serversView->setObjectName(QStringLiteral("serversView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serversView->sizePolicy().hasHeightForWidth());
        serversView->setSizePolicy(sizePolicy);
        serversView->setAcceptDrops(true);
        serversView->setAlternatingRowColors(true);
        serversView->setSelectionMode(QAbstractItemView::SingleSelection);
        serversView->setSelectionBehavior(QAbstractItemView::SelectRows);
        serversView->setIconSize(QSize(64, 64));
        serversView->setRootIsDecorated(false);
        serversView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(serversView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, -1, 6, -1);
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout_2->addWidget(nameLabel, 0, 0, 1, 1);

        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        gridLayout_2->addWidget(nameLine, 0, 1, 1, 1);

        addressLabel = new QLabel(centralwidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        gridLayout_2->addWidget(addressLabel, 1, 0, 1, 1);

        addressLine = new QLineEdit(centralwidget);
        addressLine->setObjectName(QStringLiteral("addressLine"));

        gridLayout_2->addWidget(addressLine, 1, 1, 1, 1);

        resourcesLabel = new QLabel(centralwidget);
        resourcesLabel->setObjectName(QStringLiteral("resourcesLabel"));

        gridLayout_2->addWidget(resourcesLabel, 2, 0, 1, 1);

        resourceComboBox = new QComboBox(centralwidget);
        resourceComboBox->setObjectName(QStringLiteral("resourceComboBox"));

        gridLayout_2->addWidget(resourceComboBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        ServersPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(ServersPage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        ServersPage->addToolBar(Qt::RightToolBarArea, toolBar);
#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLine);
        addressLabel->setBuddy(addressLine);
        resourcesLabel->setBuddy(resourceComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(serversView, nameLine);
        QWidget::setTabOrder(nameLine, addressLine);
        QWidget::setTabOrder(addressLine, resourceComboBox);

        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionMove_Up);
        toolBar->addAction(actionMove_Down);

        retranslateUi(ServersPage);

        QMetaObject::connectSlotsByName(ServersPage);
    } // setupUi

    void retranslateUi(QMainWindow *ServersPage)
    {
        actionAdd->setText(QApplication::translate("ServersPage", "Add", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("ServersPage", "Remove", Q_NULLPTR));
        actionMove_Up->setText(QApplication::translate("ServersPage", "Move Up", Q_NULLPTR));
        actionMove_Down->setText(QApplication::translate("ServersPage", "Move Down", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("ServersPage", "&Name", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("ServersPage", "Address", Q_NULLPTR));
        resourcesLabel->setText(QApplication::translate("ServersPage", "Reso&urces", Q_NULLPTR));
        resourceComboBox->clear();
        resourceComboBox->insertItems(0, QStringList()
         << QApplication::translate("ServersPage", "Ask to download", Q_NULLPTR)
         << QApplication::translate("ServersPage", "Always download", Q_NULLPTR)
         << QApplication::translate("ServersPage", "Never download", Q_NULLPTR)
        );
        toolBar->setWindowTitle(QApplication::translate("ServersPage", "Actions", Q_NULLPTR));
        Q_UNUSED(ServersPage);
    } // retranslateUi

};

namespace Ui {
    class ServersPage: public Ui_ServersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERSPAGE_H
