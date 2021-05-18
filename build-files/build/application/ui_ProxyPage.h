/********************************************************************************
** Form generated from reading UI file 'ProxyPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYPAGE_H
#define UI_PROXYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxyPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout;
    QLabel *proxyPlainTextWarningLabel_2;
    QGroupBox *proxyTypeBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *proxyDefaultBtn;
    QRadioButton *proxyNoneBtn;
    QRadioButton *proxySOCKS5Btn;
    QRadioButton *proxyHTTPBtn;
    QGroupBox *proxyAddrBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *proxyAddrEdit;
    QSpinBox *proxyPortEdit;
    QGroupBox *proxyAuthBox;
    QGridLayout *gridLayout_5;
    QLineEdit *proxyUserEdit;
    QLabel *proxyUsernameLabel;
    QLabel *proxyPasswordLabel;
    QLineEdit *proxyPassEdit;
    QLabel *proxyPlainTextWarningLabel;
    QSpacerItem *verticalSpacer;
    QButtonGroup *proxyGroup;

    void setupUi(QWidget *ProxyPage)
    {
        if (ProxyPage->objectName().isEmpty())
            ProxyPage->setObjectName(QStringLiteral("ProxyPage"));
        ProxyPage->resize(598, 617);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProxyPage->sizePolicy().hasHeightForWidth());
        ProxyPage->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ProxyPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(ProxyPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        verticalLayout = new QVBoxLayout(tabWidgetPage1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        proxyPlainTextWarningLabel_2 = new QLabel(tabWidgetPage1);
        proxyPlainTextWarningLabel_2->setObjectName(QStringLiteral("proxyPlainTextWarningLabel_2"));
        proxyPlainTextWarningLabel_2->setAlignment(Qt::AlignCenter);
        proxyPlainTextWarningLabel_2->setWordWrap(true);

        verticalLayout->addWidget(proxyPlainTextWarningLabel_2);

        proxyTypeBox = new QGroupBox(tabWidgetPage1);
        proxyTypeBox->setObjectName(QStringLiteral("proxyTypeBox"));
        horizontalLayout_3 = new QHBoxLayout(proxyTypeBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        proxyDefaultBtn = new QRadioButton(proxyTypeBox);
        proxyGroup = new QButtonGroup(ProxyPage);
        proxyGroup->setObjectName(QStringLiteral("proxyGroup"));
        proxyGroup->addButton(proxyDefaultBtn);
        proxyDefaultBtn->setObjectName(QStringLiteral("proxyDefaultBtn"));

        horizontalLayout_3->addWidget(proxyDefaultBtn);

        proxyNoneBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyNoneBtn);
        proxyNoneBtn->setObjectName(QStringLiteral("proxyNoneBtn"));

        horizontalLayout_3->addWidget(proxyNoneBtn);

        proxySOCKS5Btn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxySOCKS5Btn);
        proxySOCKS5Btn->setObjectName(QStringLiteral("proxySOCKS5Btn"));

        horizontalLayout_3->addWidget(proxySOCKS5Btn);

        proxyHTTPBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyHTTPBtn);
        proxyHTTPBtn->setObjectName(QStringLiteral("proxyHTTPBtn"));

        horizontalLayout_3->addWidget(proxyHTTPBtn);


        verticalLayout->addWidget(proxyTypeBox);

        proxyAddrBox = new QGroupBox(tabWidgetPage1);
        proxyAddrBox->setObjectName(QStringLiteral("proxyAddrBox"));
        horizontalLayout_2 = new QHBoxLayout(proxyAddrBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        proxyAddrEdit = new QLineEdit(proxyAddrBox);
        proxyAddrEdit->setObjectName(QStringLiteral("proxyAddrEdit"));
        proxyAddrEdit->setPlaceholderText(QStringLiteral("127.0.0.1"));

        horizontalLayout_2->addWidget(proxyAddrEdit);

        proxyPortEdit = new QSpinBox(proxyAddrBox);
        proxyPortEdit->setObjectName(QStringLiteral("proxyPortEdit"));
        proxyPortEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        proxyPortEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        proxyPortEdit->setMaximum(65535);
        proxyPortEdit->setValue(8080);

        horizontalLayout_2->addWidget(proxyPortEdit);


        verticalLayout->addWidget(proxyAddrBox);

        proxyAuthBox = new QGroupBox(tabWidgetPage1);
        proxyAuthBox->setObjectName(QStringLiteral("proxyAuthBox"));
        gridLayout_5 = new QGridLayout(proxyAuthBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        proxyUserEdit = new QLineEdit(proxyAuthBox);
        proxyUserEdit->setObjectName(QStringLiteral("proxyUserEdit"));

        gridLayout_5->addWidget(proxyUserEdit, 0, 1, 1, 1);

        proxyUsernameLabel = new QLabel(proxyAuthBox);
        proxyUsernameLabel->setObjectName(QStringLiteral("proxyUsernameLabel"));

        gridLayout_5->addWidget(proxyUsernameLabel, 0, 0, 1, 1);

        proxyPasswordLabel = new QLabel(proxyAuthBox);
        proxyPasswordLabel->setObjectName(QStringLiteral("proxyPasswordLabel"));

        gridLayout_5->addWidget(proxyPasswordLabel, 1, 0, 1, 1);

        proxyPassEdit = new QLineEdit(proxyAuthBox);
        proxyPassEdit->setObjectName(QStringLiteral("proxyPassEdit"));
        proxyPassEdit->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(proxyPassEdit, 1, 1, 1, 1);

        proxyPlainTextWarningLabel = new QLabel(proxyAuthBox);
        proxyPlainTextWarningLabel->setObjectName(QStringLiteral("proxyPlainTextWarningLabel"));
        proxyPlainTextWarningLabel->setWordWrap(true);

        gridLayout_5->addWidget(proxyPlainTextWarningLabel, 2, 0, 1, 2);


        verticalLayout->addWidget(proxyAuthBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QStringLiteral(""));

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(ProxyPage);

        QMetaObject::connectSlotsByName(ProxyPage);
    } // setupUi

    void retranslateUi(QWidget *ProxyPage)
    {
        proxyPlainTextWarningLabel_2->setText(QApplication::translate("ProxyPage", "This only applies to MultiMC. Minecraft does not accept proxy settings.", Q_NULLPTR));
        proxyTypeBox->setTitle(QApplication::translate("ProxyPage", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyDefaultBtn->setToolTip(QApplication::translate("ProxyPage", "Uses your system's default proxy settings.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyDefaultBtn->setText(QApplication::translate("ProxyPage", "&Default", Q_NULLPTR));
        proxyNoneBtn->setText(QApplication::translate("ProxyPage", "&None", Q_NULLPTR));
        proxySOCKS5Btn->setText(QApplication::translate("ProxyPage", "SOC&KS5", Q_NULLPTR));
        proxyHTTPBtn->setText(QApplication::translate("ProxyPage", "H&TTP", Q_NULLPTR));
        proxyAddrBox->setTitle(QApplication::translate("ProxyPage", "Address and Port", Q_NULLPTR));
        proxyAuthBox->setTitle(QApplication::translate("ProxyPage", "Authentication", Q_NULLPTR));
        proxyUsernameLabel->setText(QApplication::translate("ProxyPage", "Username:", Q_NULLPTR));
        proxyPasswordLabel->setText(QApplication::translate("ProxyPage", "Password:", Q_NULLPTR));
        proxyPlainTextWarningLabel->setText(QApplication::translate("ProxyPage", "Note: Proxy username and password are stored in plain text inside MultiMC's configuration file!", Q_NULLPTR));
        Q_UNUSED(ProxyPage);
    } // retranslateUi

};

namespace Ui {
    class ProxyPage: public Ui_ProxyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYPAGE_H
