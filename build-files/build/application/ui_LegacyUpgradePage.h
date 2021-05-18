/********************************************************************************
** Form generated from reading UI file 'LegacyUpgradePage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGACYUPGRADEPAGE_H
#define UI_LEGACYUPGRADEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LegacyUpgradePage
{
public:
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QCommandLinkButton *upgradeButton;

    void setupUi(QWidget *LegacyUpgradePage)
    {
        if (LegacyUpgradePage->objectName().isEmpty())
            LegacyUpgradePage->setObjectName(QStringLiteral("LegacyUpgradePage"));
        LegacyUpgradePage->resize(546, 405);
        verticalLayout_5 = new QVBoxLayout(LegacyUpgradePage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(LegacyUpgradePage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(textBrowser);

        upgradeButton = new QCommandLinkButton(LegacyUpgradePage);
        upgradeButton->setObjectName(QStringLiteral("upgradeButton"));

        verticalLayout_5->addWidget(upgradeButton);


        retranslateUi(LegacyUpgradePage);

        QMetaObject::connectSlotsByName(LegacyUpgradePage);
    } // setupUi

    void retranslateUi(QWidget *LegacyUpgradePage)
    {
        textBrowser->setHtml(QApplication::translate("LegacyUpgradePage", "<html><body><h1>Upgrade is required</h1><p>MultiMC now supports old Minecraft versions and all the required features in the new (OneSix) instance format. As a consequence, the old (Legacy) format has been entirely disabled and old instances need to be upgraded.</p><p>The upgrade will create a new instance with the same contents as the current one, in the new format. The original instance will remain untouched, in case anything goes wrong in the process.</p><p>Please report any issues on our <a href=\"https://github.com/MultiMC/MultiMC5/issues\">github issues page</a>.</p><p>There is also a <a href=\"https://discord.gg/GtPmv93\">discord channel for testing here</a>.</p></body></html>", Q_NULLPTR));
        upgradeButton->setText(QApplication::translate("LegacyUpgradePage", "Upgrade the instance", Q_NULLPTR));
        Q_UNUSED(LegacyUpgradePage);
    } // retranslateUi

};

namespace Ui {
    class LegacyUpgradePage: public Ui_LegacyUpgradePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGACYUPGRADEPAGE_H
