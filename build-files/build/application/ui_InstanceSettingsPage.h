/********************************************************************************
** Form generated from reading UI file 'InstanceSettingsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTANCESETTINGSPAGE_H
#define UI_INSTANCESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CustomCommands.h"

QT_BEGIN_NAMESPACE

class Ui_InstanceSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *openGlobalJavaSettingsButton;
    QTabWidget *settingsTabs;
    QWidget *minecraftTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *javaSettingsGroupBox;
    QGridLayout *gridLayout;
    QLineEdit *javaPathTextBox;
    QPushButton *javaDetectBtn;
    QPushButton *javaBrowseBtn;
    QPushButton *javaTestBtn;
    QGroupBox *memoryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelMinMem;
    QSpinBox *maxMemSpinBox;
    QSpinBox *minMemSpinBox;
    QSpinBox *permGenSpinBox;
    QLabel *labelPermGen;
    QLabel *labelMaxMem;
    QLabel *labelPermgenNote;
    QGroupBox *javaArgumentsGroupBox;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *jvmArgsTextBox;
    QWidget *javaTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *windowSizeGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *maximizedCheckBox;
    QGridLayout *gridLayoutWindowSize;
    QLabel *labelWindowHeight;
    QLabel *labelWindowWidth;
    QSpinBox *windowWidthSpinBox;
    QSpinBox *windowHeightSpinBox;
    QGroupBox *consoleSettingsBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showConsoleCheck;
    QCheckBox *autoCloseConsoleCheck;
    QCheckBox *showConsoleErrorCheck;
    QSpacerItem *verticalSpacerMinecraft_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    CustomCommands *customCommands;
    QWidget *workaroundsPage;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *nativeWorkaroundsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *useNativeGLFWCheck;
    QCheckBox *useNativeOpenALCheck;
    QSpacerItem *verticalSpacer;
    QWidget *miscellanousPage;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *gameTimeGroupBox;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *showGameTime;
    QCheckBox *recordGameTime;
    QSpacerItem *verticalSpacerMiscellanous;

    void setupUi(QWidget *InstanceSettingsPage)
    {
        if (InstanceSettingsPage->objectName().isEmpty())
            InstanceSettingsPage->setObjectName(QStringLiteral("InstanceSettingsPage"));
        InstanceSettingsPage->resize(691, 581);
        verticalLayout = new QVBoxLayout(InstanceSettingsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        openGlobalJavaSettingsButton = new QCommandLinkButton(InstanceSettingsPage);
        openGlobalJavaSettingsButton->setObjectName(QStringLiteral("openGlobalJavaSettingsButton"));

        verticalLayout->addWidget(openGlobalJavaSettingsButton);

        settingsTabs = new QTabWidget(InstanceSettingsPage);
        settingsTabs->setObjectName(QStringLiteral("settingsTabs"));
        settingsTabs->setTabShape(QTabWidget::Rounded);
        minecraftTab = new QWidget();
        minecraftTab->setObjectName(QStringLiteral("minecraftTab"));
        verticalLayout_5 = new QVBoxLayout(minecraftTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        javaSettingsGroupBox = new QGroupBox(minecraftTab);
        javaSettingsGroupBox->setObjectName(QStringLiteral("javaSettingsGroupBox"));
        javaSettingsGroupBox->setEnabled(true);
        javaSettingsGroupBox->setCheckable(true);
        javaSettingsGroupBox->setChecked(false);
        gridLayout = new QGridLayout(javaSettingsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        javaPathTextBox = new QLineEdit(javaSettingsGroupBox);
        javaPathTextBox->setObjectName(QStringLiteral("javaPathTextBox"));

        gridLayout->addWidget(javaPathTextBox, 0, 0, 1, 3);

        javaDetectBtn = new QPushButton(javaSettingsGroupBox);
        javaDetectBtn->setObjectName(QStringLiteral("javaDetectBtn"));

        gridLayout->addWidget(javaDetectBtn, 1, 0, 1, 1);

        javaBrowseBtn = new QPushButton(javaSettingsGroupBox);
        javaBrowseBtn->setObjectName(QStringLiteral("javaBrowseBtn"));

        gridLayout->addWidget(javaBrowseBtn, 1, 1, 1, 1);

        javaTestBtn = new QPushButton(javaSettingsGroupBox);
        javaTestBtn->setObjectName(QStringLiteral("javaTestBtn"));

        gridLayout->addWidget(javaTestBtn, 1, 2, 1, 1);


        verticalLayout_5->addWidget(javaSettingsGroupBox);

        memoryGroupBox = new QGroupBox(minecraftTab);
        memoryGroupBox->setObjectName(QStringLiteral("memoryGroupBox"));
        memoryGroupBox->setEnabled(true);
        memoryGroupBox->setCheckable(true);
        memoryGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(memoryGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelMinMem = new QLabel(memoryGroupBox);
        labelMinMem->setObjectName(QStringLiteral("labelMinMem"));

        gridLayout_2->addWidget(labelMinMem, 0, 0, 1, 1);

        maxMemSpinBox = new QSpinBox(memoryGroupBox);
        maxMemSpinBox->setObjectName(QStringLiteral("maxMemSpinBox"));
        maxMemSpinBox->setSuffix(QStringLiteral(" MB"));
        maxMemSpinBox->setMinimum(128);
        maxMemSpinBox->setMaximum(65536);
        maxMemSpinBox->setSingleStep(128);
        maxMemSpinBox->setValue(1024);

        gridLayout_2->addWidget(maxMemSpinBox, 1, 1, 1, 1);

        minMemSpinBox = new QSpinBox(memoryGroupBox);
        minMemSpinBox->setObjectName(QStringLiteral("minMemSpinBox"));
        minMemSpinBox->setSuffix(QStringLiteral(" MB"));
        minMemSpinBox->setMinimum(128);
        minMemSpinBox->setMaximum(65536);
        minMemSpinBox->setSingleStep(128);
        minMemSpinBox->setValue(256);

        gridLayout_2->addWidget(minMemSpinBox, 0, 1, 1, 1);

        permGenSpinBox = new QSpinBox(memoryGroupBox);
        permGenSpinBox->setObjectName(QStringLiteral("permGenSpinBox"));
        permGenSpinBox->setSuffix(QStringLiteral(" MB"));
        permGenSpinBox->setMinimum(64);
        permGenSpinBox->setMaximum(999999999);
        permGenSpinBox->setSingleStep(8);
        permGenSpinBox->setValue(64);

        gridLayout_2->addWidget(permGenSpinBox, 2, 1, 1, 1);

        labelPermGen = new QLabel(memoryGroupBox);
        labelPermGen->setObjectName(QStringLiteral("labelPermGen"));
        labelPermGen->setText(QStringLiteral("PermGen:"));

        gridLayout_2->addWidget(labelPermGen, 2, 0, 1, 1);

        labelMaxMem = new QLabel(memoryGroupBox);
        labelMaxMem->setObjectName(QStringLiteral("labelMaxMem"));

        gridLayout_2->addWidget(labelMaxMem, 1, 0, 1, 1);

        labelPermgenNote = new QLabel(memoryGroupBox);
        labelPermgenNote->setObjectName(QStringLiteral("labelPermgenNote"));

        gridLayout_2->addWidget(labelPermgenNote, 3, 0, 1, 2);


        verticalLayout_5->addWidget(memoryGroupBox);

        javaArgumentsGroupBox = new QGroupBox(minecraftTab);
        javaArgumentsGroupBox->setObjectName(QStringLiteral("javaArgumentsGroupBox"));
        javaArgumentsGroupBox->setEnabled(true);
        javaArgumentsGroupBox->setCheckable(true);
        javaArgumentsGroupBox->setChecked(false);
        gridLayout_5 = new QGridLayout(javaArgumentsGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        jvmArgsTextBox = new QPlainTextEdit(javaArgumentsGroupBox);
        jvmArgsTextBox->setObjectName(QStringLiteral("jvmArgsTextBox"));

        gridLayout_5->addWidget(jvmArgsTextBox, 1, 1, 1, 1);


        verticalLayout_5->addWidget(javaArgumentsGroupBox);

        settingsTabs->addTab(minecraftTab, QString());
        settingsTabs->setTabText(settingsTabs->indexOf(minecraftTab), QStringLiteral("Java"));
        javaTab = new QWidget();
        javaTab->setObjectName(QStringLiteral("javaTab"));
        verticalLayout_3 = new QVBoxLayout(javaTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        windowSizeGroupBox = new QGroupBox(javaTab);
        windowSizeGroupBox->setObjectName(QStringLiteral("windowSizeGroupBox"));
        windowSizeGroupBox->setEnabled(true);
        windowSizeGroupBox->setCheckable(true);
        windowSizeGroupBox->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(windowSizeGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        maximizedCheckBox = new QCheckBox(windowSizeGroupBox);
        maximizedCheckBox->setObjectName(QStringLiteral("maximizedCheckBox"));

        verticalLayout_4->addWidget(maximizedCheckBox);

        gridLayoutWindowSize = new QGridLayout();
        gridLayoutWindowSize->setObjectName(QStringLiteral("gridLayoutWindowSize"));
        labelWindowHeight = new QLabel(windowSizeGroupBox);
        labelWindowHeight->setObjectName(QStringLiteral("labelWindowHeight"));

        gridLayoutWindowSize->addWidget(labelWindowHeight, 1, 0, 1, 1);

        labelWindowWidth = new QLabel(windowSizeGroupBox);
        labelWindowWidth->setObjectName(QStringLiteral("labelWindowWidth"));

        gridLayoutWindowSize->addWidget(labelWindowWidth, 0, 0, 1, 1);

        windowWidthSpinBox = new QSpinBox(windowSizeGroupBox);
        windowWidthSpinBox->setObjectName(QStringLiteral("windowWidthSpinBox"));
        windowWidthSpinBox->setMinimum(1);
        windowWidthSpinBox->setMaximum(65536);
        windowWidthSpinBox->setSingleStep(1);
        windowWidthSpinBox->setValue(854);

        gridLayoutWindowSize->addWidget(windowWidthSpinBox, 0, 1, 1, 1);

        windowHeightSpinBox = new QSpinBox(windowSizeGroupBox);
        windowHeightSpinBox->setObjectName(QStringLiteral("windowHeightSpinBox"));
        windowHeightSpinBox->setMinimum(1);
        windowHeightSpinBox->setMaximum(65536);
        windowHeightSpinBox->setValue(480);

        gridLayoutWindowSize->addWidget(windowHeightSpinBox, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayoutWindowSize);


        verticalLayout_3->addWidget(windowSizeGroupBox);

        consoleSettingsBox = new QGroupBox(javaTab);
        consoleSettingsBox->setObjectName(QStringLiteral("consoleSettingsBox"));
        consoleSettingsBox->setEnabled(true);
        consoleSettingsBox->setCheckable(true);
        consoleSettingsBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(consoleSettingsBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        showConsoleCheck = new QCheckBox(consoleSettingsBox);
        showConsoleCheck->setObjectName(QStringLiteral("showConsoleCheck"));

        verticalLayout_2->addWidget(showConsoleCheck);

        autoCloseConsoleCheck = new QCheckBox(consoleSettingsBox);
        autoCloseConsoleCheck->setObjectName(QStringLiteral("autoCloseConsoleCheck"));

        verticalLayout_2->addWidget(autoCloseConsoleCheck);

        showConsoleErrorCheck = new QCheckBox(consoleSettingsBox);
        showConsoleErrorCheck->setObjectName(QStringLiteral("showConsoleErrorCheck"));

        verticalLayout_2->addWidget(showConsoleErrorCheck);


        verticalLayout_3->addWidget(consoleSettingsBox);

        verticalSpacerMinecraft_2 = new QSpacerItem(88, 125, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerMinecraft_2);

        settingsTabs->addTab(javaTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        customCommands = new CustomCommands(tab);
        customCommands->setObjectName(QStringLiteral("customCommands"));

        verticalLayout_6->addWidget(customCommands);

        settingsTabs->addTab(tab, QString());
        workaroundsPage = new QWidget();
        workaroundsPage->setObjectName(QStringLiteral("workaroundsPage"));
        verticalLayout_8 = new QVBoxLayout(workaroundsPage);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        nativeWorkaroundsGroupBox = new QGroupBox(workaroundsPage);
        nativeWorkaroundsGroupBox->setObjectName(QStringLiteral("nativeWorkaroundsGroupBox"));
        nativeWorkaroundsGroupBox->setEnabled(true);
        nativeWorkaroundsGroupBox->setCheckable(true);
        nativeWorkaroundsGroupBox->setChecked(false);
        verticalLayout_7 = new QVBoxLayout(nativeWorkaroundsGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        useNativeGLFWCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeGLFWCheck->setObjectName(QStringLiteral("useNativeGLFWCheck"));

        verticalLayout_7->addWidget(useNativeGLFWCheck);

        useNativeOpenALCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeOpenALCheck->setObjectName(QStringLiteral("useNativeOpenALCheck"));

        verticalLayout_7->addWidget(useNativeOpenALCheck);


        verticalLayout_8->addWidget(nativeWorkaroundsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        settingsTabs->addTab(workaroundsPage, QString());
        miscellanousPage = new QWidget();
        miscellanousPage->setObjectName(QStringLiteral("miscellanousPage"));
        verticalLayout_9 = new QVBoxLayout(miscellanousPage);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gameTimeGroupBox = new QGroupBox(miscellanousPage);
        gameTimeGroupBox->setObjectName(QStringLiteral("gameTimeGroupBox"));
        gameTimeGroupBox->setEnabled(true);
        gameTimeGroupBox->setCheckable(true);
        gameTimeGroupBox->setChecked(false);
        verticalLayout_10 = new QVBoxLayout(gameTimeGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        showGameTime = new QCheckBox(gameTimeGroupBox);
        showGameTime->setObjectName(QStringLiteral("showGameTime"));

        verticalLayout_10->addWidget(showGameTime);

        recordGameTime = new QCheckBox(gameTimeGroupBox);
        recordGameTime->setObjectName(QStringLiteral("recordGameTime"));

        verticalLayout_10->addWidget(recordGameTime);


        verticalLayout_9->addWidget(gameTimeGroupBox);

        verticalSpacerMiscellanous = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacerMiscellanous);

        settingsTabs->addTab(miscellanousPage, QString());

        verticalLayout->addWidget(settingsTabs);

        QWidget::setTabOrder(openGlobalJavaSettingsButton, settingsTabs);
        QWidget::setTabOrder(settingsTabs, javaSettingsGroupBox);
        QWidget::setTabOrder(javaSettingsGroupBox, javaPathTextBox);
        QWidget::setTabOrder(javaPathTextBox, javaDetectBtn);
        QWidget::setTabOrder(javaDetectBtn, javaBrowseBtn);
        QWidget::setTabOrder(javaBrowseBtn, javaTestBtn);
        QWidget::setTabOrder(javaTestBtn, memoryGroupBox);
        QWidget::setTabOrder(memoryGroupBox, minMemSpinBox);
        QWidget::setTabOrder(minMemSpinBox, maxMemSpinBox);
        QWidget::setTabOrder(maxMemSpinBox, permGenSpinBox);
        QWidget::setTabOrder(permGenSpinBox, javaArgumentsGroupBox);
        QWidget::setTabOrder(javaArgumentsGroupBox, jvmArgsTextBox);
        QWidget::setTabOrder(jvmArgsTextBox, windowSizeGroupBox);
        QWidget::setTabOrder(windowSizeGroupBox, maximizedCheckBox);
        QWidget::setTabOrder(maximizedCheckBox, windowWidthSpinBox);
        QWidget::setTabOrder(windowWidthSpinBox, windowHeightSpinBox);
        QWidget::setTabOrder(windowHeightSpinBox, consoleSettingsBox);
        QWidget::setTabOrder(consoleSettingsBox, showConsoleCheck);
        QWidget::setTabOrder(showConsoleCheck, autoCloseConsoleCheck);
        QWidget::setTabOrder(autoCloseConsoleCheck, showConsoleErrorCheck);
        QWidget::setTabOrder(showConsoleErrorCheck, nativeWorkaroundsGroupBox);
        QWidget::setTabOrder(nativeWorkaroundsGroupBox, useNativeGLFWCheck);
        QWidget::setTabOrder(useNativeGLFWCheck, useNativeOpenALCheck);
        QWidget::setTabOrder(useNativeOpenALCheck, showGameTime);
        QWidget::setTabOrder(showGameTime, recordGameTime);

        retranslateUi(InstanceSettingsPage);

        settingsTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InstanceSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *InstanceSettingsPage)
    {
        openGlobalJavaSettingsButton->setText(QApplication::translate("InstanceSettingsPage", "Open Global Settings", Q_NULLPTR));
        openGlobalJavaSettingsButton->setDescription(QApplication::translate("InstanceSettingsPage", "The settings here are overrides for global settings.", Q_NULLPTR));
        javaSettingsGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Java insta&llation", Q_NULLPTR));
        javaDetectBtn->setText(QApplication::translate("InstanceSettingsPage", "Auto-detect...", Q_NULLPTR));
        javaBrowseBtn->setText(QApplication::translate("InstanceSettingsPage", "Browse...", Q_NULLPTR));
        javaTestBtn->setText(QApplication::translate("InstanceSettingsPage", "Test", Q_NULLPTR));
        memoryGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Memor&y", Q_NULLPTR));
        labelMinMem->setText(QApplication::translate("InstanceSettingsPage", "Minimum memory allocation:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxMemSpinBox->setToolTip(QApplication::translate("InstanceSettingsPage", "The maximum amount of memory Minecraft is allowed to use.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        minMemSpinBox->setToolTip(QApplication::translate("InstanceSettingsPage", "The amount of memory Minecraft is started with.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        permGenSpinBox->setToolTip(QApplication::translate("InstanceSettingsPage", "The amount of memory available to store loaded Java classes.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMaxMem->setText(QApplication::translate("InstanceSettingsPage", "Maximum memory allocation:", Q_NULLPTR));
        labelPermgenNote->setText(QApplication::translate("InstanceSettingsPage", "Note: Permgen is set automatically by Java 8 and later", Q_NULLPTR));
        javaArgumentsGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Java argumen&ts", Q_NULLPTR));
        windowSizeGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Game Window", Q_NULLPTR));
        maximizedCheckBox->setText(QApplication::translate("InstanceSettingsPage", "Start Minecraft maximized?", Q_NULLPTR));
        labelWindowHeight->setText(QApplication::translate("InstanceSettingsPage", "Window height:", Q_NULLPTR));
        labelWindowWidth->setText(QApplication::translate("InstanceSettingsPage", "Window width:", Q_NULLPTR));
        consoleSettingsBox->setTitle(QApplication::translate("InstanceSettingsPage", "Conso&le Settings", Q_NULLPTR));
        showConsoleCheck->setText(QApplication::translate("InstanceSettingsPage", "Show console while the game is running?", Q_NULLPTR));
        autoCloseConsoleCheck->setText(QApplication::translate("InstanceSettingsPage", "Automatically close console when the game quits?", Q_NULLPTR));
        showConsoleErrorCheck->setText(QApplication::translate("InstanceSettingsPage", "Show console when the game crashes?", Q_NULLPTR));
        settingsTabs->setTabText(settingsTabs->indexOf(javaTab), QApplication::translate("InstanceSettingsPage", "Game windows", Q_NULLPTR));
        settingsTabs->setTabText(settingsTabs->indexOf(tab), QApplication::translate("InstanceSettingsPage", "Custom commands", Q_NULLPTR));
        nativeWorkaroundsGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Native libraries", Q_NULLPTR));
        useNativeGLFWCheck->setText(QApplication::translate("InstanceSettingsPage", "Use system installation of GLFW", Q_NULLPTR));
        useNativeOpenALCheck->setText(QApplication::translate("InstanceSettingsPage", "Use system installation of OpenAL", Q_NULLPTR));
        settingsTabs->setTabText(settingsTabs->indexOf(workaroundsPage), QApplication::translate("InstanceSettingsPage", "Workarounds", Q_NULLPTR));
        gameTimeGroupBox->setTitle(QApplication::translate("InstanceSettingsPage", "Override global game time settings", Q_NULLPTR));
        showGameTime->setText(QApplication::translate("InstanceSettingsPage", "Show time spent playing this instance", Q_NULLPTR));
        recordGameTime->setText(QApplication::translate("InstanceSettingsPage", "Record time spent playing this instance", Q_NULLPTR));
        settingsTabs->setTabText(settingsTabs->indexOf(miscellanousPage), QApplication::translate("InstanceSettingsPage", "Miscellanous", Q_NULLPTR));
        Q_UNUSED(InstanceSettingsPage);
    } // retranslateUi

};

namespace Ui {
    class InstanceSettingsPage: public Ui_InstanceSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTANCESETTINGSPAGE_H
