/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *icon;
    QSpacerItem *horizontalSpacer_2;
    QLabel *title;
    QTabWidget *tabWidget;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *versionLabel;
    QLabel *platformLabel;
    QLabel *buildNumLabel;
    QLabel *channelLabel;
    QLabel *aboutLabel;
    QLabel *copyLabel;
    QLabel *urlLabel;
    QSpacerItem *verticalSpacer;
    QWidget *creditsTab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *creditsText;
    QWidget *licenseTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *licenseText;
    QWidget *forkingTab;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *redistributionText;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *aboutQt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(783, 843);
        AboutDialog->setMinimumSize(QSize(450, 400));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        icon = new QLabel(AboutDialog);
        icon->setObjectName(QStringLiteral("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(64, 64));
        icon->setBaseSize(QSize(64, 64));

        horizontalLayout->addWidget(icon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        title = new QLabel(AboutDialog);
        title->setObjectName(QStringLiteral("title"));
        QFont font;
        font.setPointSize(15);
        title->setFont(font);
        title->setText(QStringLiteral("MultiMC 5"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_5 = new QVBoxLayout(aboutTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        versionLabel = new QLabel(aboutTab);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(versionLabel);

        platformLabel = new QLabel(aboutTab);
        platformLabel->setObjectName(QStringLiteral("platformLabel"));
        platformLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(platformLabel);

        buildNumLabel = new QLabel(aboutTab);
        buildNumLabel->setObjectName(QStringLiteral("buildNumLabel"));
        buildNumLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(buildNumLabel);

        channelLabel = new QLabel(aboutTab);
        channelLabel->setObjectName(QStringLiteral("channelLabel"));
        channelLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(channelLabel);

        aboutLabel = new QLabel(aboutTab);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        aboutLabel->setEnabled(true);
        aboutLabel->setAlignment(Qt::AlignCenter);
        aboutLabel->setWordWrap(true);

        verticalLayout_5->addWidget(aboutLabel);

        copyLabel = new QLabel(aboutTab);
        copyLabel->setObjectName(QStringLiteral("copyLabel"));
        QFont font1;
        font1.setPointSize(8);
        font1.setKerning(true);
        copyLabel->setFont(font1);
        copyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(copyLabel);

        urlLabel = new QLabel(aboutTab);
        urlLabel->setObjectName(QStringLiteral("urlLabel"));
        QFont font2;
        font2.setPointSize(10);
        urlLabel->setFont(font2);
        urlLabel->setText(QStringLiteral("<html><head/><body><p><a href=\"https://github.com/MultiMC/MultiMC5\">https://github.com/MultiMC/MultiMC5</a></p></body></html>"));
        urlLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(urlLabel);

        verticalSpacer = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget->addTab(aboutTab, QString());
        creditsTab = new QWidget();
        creditsTab->setObjectName(QStringLiteral("creditsTab"));
        verticalLayout_2 = new QVBoxLayout(creditsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        creditsText = new QTextEdit(creditsTab);
        creditsText->setObjectName(QStringLiteral("creditsText"));
        creditsText->setReadOnly(true);
        creditsText->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(creditsText);

        tabWidget->addTab(creditsTab, QString());
        licenseTab = new QWidget();
        licenseTab->setObjectName(QStringLiteral("licenseTab"));
        verticalLayout_3 = new QVBoxLayout(licenseTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        licenseText = new QTextEdit(licenseTab);
        licenseText->setObjectName(QStringLiteral("licenseText"));
        licenseText->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans Mono"));
        licenseText->setFont(font3);
        licenseText->setReadOnly(true);
        licenseText->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_3->addWidget(licenseText);

        tabWidget->addTab(licenseTab, QString());
        forkingTab = new QWidget();
        forkingTab->setObjectName(QStringLiteral("forkingTab"));
        verticalLayout_4 = new QVBoxLayout(forkingTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        redistributionText = new QTextEdit(forkingTab);
        redistributionText->setObjectName(QStringLiteral("redistributionText"));
        redistributionText->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(redistributionText);

        tabWidget->addTab(forkingTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        aboutQt = new QPushButton(AboutDialog);
        aboutQt->setObjectName(QStringLiteral("aboutQt"));
        aboutQt->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(aboutQt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(AboutDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(tabWidget, creditsText);
        QWidget::setTabOrder(creditsText, licenseText);
        QWidget::setTabOrder(licenseText, redistributionText);
        QWidget::setTabOrder(redistributionText, aboutQt);
        QWidget::setTabOrder(aboutQt, closeButton);

        retranslateUi(AboutDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About MultiMC", Q_NULLPTR));
        icon->setText(QString());
        versionLabel->setText(QApplication::translate("AboutDialog", "Version:", Q_NULLPTR));
        platformLabel->setText(QApplication::translate("AboutDialog", "Platform:", Q_NULLPTR));
        buildNumLabel->setText(QApplication::translate("AboutDialog", "Build Number:", Q_NULLPTR));
        channelLabel->setText(QApplication::translate("AboutDialog", "Channel:", Q_NULLPTR));
        aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>MultiMC is a custom launcher that makes managing Minecraft easier by allowing you to have multiple instances of Minecraft at once.</p></body></html>", Q_NULLPTR));
        copyLabel->setText(QApplication::translate("AboutDialog", "\302\251 2012-2021 MultiMC Contributors", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QApplication::translate("AboutDialog", "About", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(creditsTab), QApplication::translate("AboutDialog", "Credits", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(licenseTab), QApplication::translate("AboutDialog", "License", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(forkingTab), QApplication::translate("AboutDialog", "Forking/Redistribution", Q_NULLPTR));
        aboutQt->setText(QApplication::translate("AboutDialog", "About Qt", Q_NULLPTR));
        closeButton->setText(QApplication::translate("AboutDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
