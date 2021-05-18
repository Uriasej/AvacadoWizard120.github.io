/********************************************************************************
** Form generated from reading UI file 'MultiMCPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIMCPAGE_H
#define UI_MULTIMCPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiMCPage
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *featuresTab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *updateSettingsBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *autoUpdateCheckBox;
    QLabel *updateChannelLabel;
    QComboBox *updateChannelComboBox;
    QLabel *updateChannelDescLabel;
    QGroupBox *foldersBox;
    QGridLayout *foldersBoxLayout;
    QLabel *labelInstDir;
    QLineEdit *instDirTextBox;
    QToolButton *instDirBrowseBtn;
    QLabel *labelModsDir;
    QLineEdit *modsDirTextBox;
    QToolButton *modsDirBrowseBtn;
    QLineEdit *iconsDirTextBox;
    QLabel *labelIconsDir;
    QToolButton *iconsDirBrowseBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *resetNotificationsBtn;
    QGroupBox *sortingModeBox;
    QHBoxLayout *sortingModeBoxLayout;
    QRadioButton *sortLastLaunchedBtn;
    QRadioButton *sortByNameBtn;
    QGroupBox *themeBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *themeComboBox;
    QComboBox *themeComboBoxColors;
    QLabel *label_4;
    QSpacerItem *generalTabSpacer;
    QWidget *consoleTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *consoleSettingsBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *showConsoleCheck;
    QCheckBox *autoCloseConsoleCheck;
    QCheckBox *showConsoleErrorCheck;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QCheckBox *checkStopLogging;
    QSpinBox *lineLimitSpinBox;
    QGroupBox *themeBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *fontPreview;
    QFontComboBox *consoleFont;
    QSpinBox *fontSizeBox;
    QWidget *analyticsTab;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *consoleSettingsBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *analyticsCheck;
    QFrame *line;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QButtonGroup *sortingModeGroup;

    void setupUi(QWidget *MultiMCPage)
    {
        if (MultiMCPage->objectName().isEmpty())
            MultiMCPage->setObjectName(QStringLiteral("MultiMCPage"));
        MultiMCPage->resize(514, 629);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MultiMCPage->sizePolicy().hasHeightForWidth());
        MultiMCPage->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(MultiMCPage);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(MultiMCPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabShape(QTabWidget::Rounded);
        featuresTab = new QWidget();
        featuresTab->setObjectName(QStringLiteral("featuresTab"));
        verticalLayout_9 = new QVBoxLayout(featuresTab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        updateSettingsBox = new QGroupBox(featuresTab);
        updateSettingsBox->setObjectName(QStringLiteral("updateSettingsBox"));
        verticalLayout_7 = new QVBoxLayout(updateSettingsBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        autoUpdateCheckBox = new QCheckBox(updateSettingsBox);
        autoUpdateCheckBox->setObjectName(QStringLiteral("autoUpdateCheckBox"));

        verticalLayout_7->addWidget(autoUpdateCheckBox);

        updateChannelLabel = new QLabel(updateSettingsBox);
        updateChannelLabel->setObjectName(QStringLiteral("updateChannelLabel"));

        verticalLayout_7->addWidget(updateChannelLabel);

        updateChannelComboBox = new QComboBox(updateSettingsBox);
        updateChannelComboBox->setObjectName(QStringLiteral("updateChannelComboBox"));
        updateChannelComboBox->setEnabled(false);

        verticalLayout_7->addWidget(updateChannelComboBox);

        updateChannelDescLabel = new QLabel(updateSettingsBox);
        updateChannelDescLabel->setObjectName(QStringLiteral("updateChannelDescLabel"));
        updateChannelDescLabel->setWordWrap(true);

        verticalLayout_7->addWidget(updateChannelDescLabel);


        verticalLayout_9->addWidget(updateSettingsBox);

        foldersBox = new QGroupBox(featuresTab);
        foldersBox->setObjectName(QStringLiteral("foldersBox"));
        foldersBoxLayout = new QGridLayout(foldersBox);
        foldersBoxLayout->setObjectName(QStringLiteral("foldersBoxLayout"));
        labelInstDir = new QLabel(foldersBox);
        labelInstDir->setObjectName(QStringLiteral("labelInstDir"));

        foldersBoxLayout->addWidget(labelInstDir, 0, 0, 1, 1);

        instDirTextBox = new QLineEdit(foldersBox);
        instDirTextBox->setObjectName(QStringLiteral("instDirTextBox"));

        foldersBoxLayout->addWidget(instDirTextBox, 0, 1, 1, 1);

        instDirBrowseBtn = new QToolButton(foldersBox);
        instDirBrowseBtn->setObjectName(QStringLiteral("instDirBrowseBtn"));
        instDirBrowseBtn->setText(QStringLiteral("..."));

        foldersBoxLayout->addWidget(instDirBrowseBtn, 0, 2, 1, 1);

        labelModsDir = new QLabel(foldersBox);
        labelModsDir->setObjectName(QStringLiteral("labelModsDir"));

        foldersBoxLayout->addWidget(labelModsDir, 1, 0, 1, 1);

        modsDirTextBox = new QLineEdit(foldersBox);
        modsDirTextBox->setObjectName(QStringLiteral("modsDirTextBox"));

        foldersBoxLayout->addWidget(modsDirTextBox, 1, 1, 1, 1);

        modsDirBrowseBtn = new QToolButton(foldersBox);
        modsDirBrowseBtn->setObjectName(QStringLiteral("modsDirBrowseBtn"));
        modsDirBrowseBtn->setText(QStringLiteral("..."));

        foldersBoxLayout->addWidget(modsDirBrowseBtn, 1, 2, 1, 1);

        iconsDirTextBox = new QLineEdit(foldersBox);
        iconsDirTextBox->setObjectName(QStringLiteral("iconsDirTextBox"));

        foldersBoxLayout->addWidget(iconsDirTextBox, 2, 1, 1, 1);

        labelIconsDir = new QLabel(foldersBox);
        labelIconsDir->setObjectName(QStringLiteral("labelIconsDir"));

        foldersBoxLayout->addWidget(labelIconsDir, 2, 0, 1, 1);

        iconsDirBrowseBtn = new QToolButton(foldersBox);
        iconsDirBrowseBtn->setObjectName(QStringLiteral("iconsDirBrowseBtn"));
        iconsDirBrowseBtn->setText(QStringLiteral("..."));

        foldersBoxLayout->addWidget(iconsDirBrowseBtn, 2, 2, 1, 1);


        verticalLayout_9->addWidget(foldersBox);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        tabWidget->addTab(featuresTab, QString());
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        verticalLayout_6 = new QVBoxLayout(generalTab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_3 = new QGroupBox(generalTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        resetNotificationsBtn = new QPushButton(groupBox_3);
        resetNotificationsBtn->setObjectName(QStringLiteral("resetNotificationsBtn"));
        resetNotificationsBtn->setCheckable(true);

        verticalLayout_5->addWidget(resetNotificationsBtn);


        verticalLayout_6->addWidget(groupBox_3);

        sortingModeBox = new QGroupBox(generalTab);
        sortingModeBox->setObjectName(QStringLiteral("sortingModeBox"));
        sortingModeBox->setEnabled(true);
        sortingModeBoxLayout = new QHBoxLayout(sortingModeBox);
        sortingModeBoxLayout->setObjectName(QStringLiteral("sortingModeBoxLayout"));
        sortLastLaunchedBtn = new QRadioButton(sortingModeBox);
        sortingModeGroup = new QButtonGroup(MultiMCPage);
        sortingModeGroup->setObjectName(QStringLiteral("sortingModeGroup"));
        sortingModeGroup->addButton(sortLastLaunchedBtn);
        sortLastLaunchedBtn->setObjectName(QStringLiteral("sortLastLaunchedBtn"));

        sortingModeBoxLayout->addWidget(sortLastLaunchedBtn);

        sortByNameBtn = new QRadioButton(sortingModeBox);
        sortingModeGroup->addButton(sortByNameBtn);
        sortByNameBtn->setObjectName(QStringLiteral("sortByNameBtn"));

        sortingModeBoxLayout->addWidget(sortByNameBtn);


        verticalLayout_6->addWidget(sortingModeBox);

        themeBox = new QGroupBox(generalTab);
        themeBox->setObjectName(QStringLiteral("themeBox"));
        formLayout = new QFormLayout(themeBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(themeBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        themeComboBox = new QComboBox(themeBox);
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QStringLiteral("OSX"));
        themeComboBox->addItem(QStringLiteral("iOS"));
        themeComboBox->addItem(QStringLiteral("Flat"));
        themeComboBox->addItem(QString());
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(themeComboBox->sizePolicy().hasHeightForWidth());
        themeComboBox->setSizePolicy(sizePolicy1);
        themeComboBox->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::FieldRole, themeComboBox);

        themeComboBoxColors = new QComboBox(themeBox);
        themeComboBoxColors->setObjectName(QStringLiteral("themeComboBoxColors"));
        sizePolicy1.setHeightForWidth(themeComboBoxColors->sizePolicy().hasHeightForWidth());
        themeComboBoxColors->setSizePolicy(sizePolicy1);
        themeComboBoxColors->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(1, QFormLayout::FieldRole, themeComboBoxColors);

        label_4 = new QLabel(themeBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);


        verticalLayout_6->addWidget(themeBox);

        generalTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(generalTabSpacer);

        tabWidget->addTab(generalTab, QString());
        consoleTab = new QWidget();
        consoleTab->setObjectName(QStringLiteral("consoleTab"));
        verticalLayout_2 = new QVBoxLayout(consoleTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        consoleSettingsBox = new QGroupBox(consoleTab);
        consoleSettingsBox->setObjectName(QStringLiteral("consoleSettingsBox"));
        verticalLayout_3 = new QVBoxLayout(consoleSettingsBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        showConsoleCheck = new QCheckBox(consoleSettingsBox);
        showConsoleCheck->setObjectName(QStringLiteral("showConsoleCheck"));

        verticalLayout_3->addWidget(showConsoleCheck);

        autoCloseConsoleCheck = new QCheckBox(consoleSettingsBox);
        autoCloseConsoleCheck->setObjectName(QStringLiteral("autoCloseConsoleCheck"));

        verticalLayout_3->addWidget(autoCloseConsoleCheck);

        showConsoleErrorCheck = new QCheckBox(consoleSettingsBox);
        showConsoleErrorCheck->setObjectName(QStringLiteral("showConsoleErrorCheck"));

        verticalLayout_3->addWidget(showConsoleErrorCheck);


        verticalLayout_2->addWidget(consoleSettingsBox);

        groupBox_4 = new QGroupBox(consoleTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkStopLogging = new QCheckBox(groupBox_4);
        checkStopLogging->setObjectName(QStringLiteral("checkStopLogging"));

        gridLayout_3->addWidget(checkStopLogging, 1, 0, 1, 1);

        lineLimitSpinBox = new QSpinBox(groupBox_4);
        lineLimitSpinBox->setObjectName(QStringLiteral("lineLimitSpinBox"));
        sizePolicy1.setHeightForWidth(lineLimitSpinBox->sizePolicy().hasHeightForWidth());
        lineLimitSpinBox->setSizePolicy(sizePolicy1);
        lineLimitSpinBox->setMinimum(10000);
        lineLimitSpinBox->setMaximum(1000000);
        lineLimitSpinBox->setSingleStep(10000);
        lineLimitSpinBox->setValue(100000);

        gridLayout_3->addWidget(lineLimitSpinBox, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        themeBox_2 = new QGroupBox(consoleTab);
        themeBox_2->setObjectName(QStringLiteral("themeBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(themeBox_2->sizePolicy().hasHeightForWidth());
        themeBox_2->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(themeBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        fontPreview = new QTextEdit(themeBox_2);
        fontPreview->setObjectName(QStringLiteral("fontPreview"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fontPreview->sizePolicy().hasHeightForWidth());
        fontPreview->setSizePolicy(sizePolicy3);
        fontPreview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fontPreview->setUndoRedoEnabled(false);
        fontPreview->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(fontPreview, 1, 0, 1, 2);

        consoleFont = new QFontComboBox(themeBox_2);
        consoleFont->setObjectName(QStringLiteral("consoleFont"));
        sizePolicy1.setHeightForWidth(consoleFont->sizePolicy().hasHeightForWidth());
        consoleFont->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(consoleFont, 0, 0, 1, 1);

        fontSizeBox = new QSpinBox(themeBox_2);
        fontSizeBox->setObjectName(QStringLiteral("fontSizeBox"));
        fontSizeBox->setMinimum(5);
        fontSizeBox->setMaximum(16);
        fontSizeBox->setValue(11);

        gridLayout_2->addWidget(fontSizeBox, 0, 1, 1, 1);


        verticalLayout_2->addWidget(themeBox_2);

        tabWidget->addTab(consoleTab, QString());
        analyticsTab = new QWidget();
        analyticsTab->setObjectName(QStringLiteral("analyticsTab"));
        verticalLayout_8 = new QVBoxLayout(analyticsTab);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        consoleSettingsBox_2 = new QGroupBox(analyticsTab);
        consoleSettingsBox_2->setObjectName(QStringLiteral("consoleSettingsBox_2"));
        verticalLayout_4 = new QVBoxLayout(consoleSettingsBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        analyticsCheck = new QCheckBox(consoleSettingsBox_2);
        analyticsCheck->setObjectName(QStringLiteral("analyticsCheck"));

        verticalLayout_4->addWidget(analyticsCheck);

        line = new QFrame(consoleSettingsBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        label_5 = new QLabel(consoleSettingsBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_4->addWidget(label_5);


        verticalLayout_8->addWidget(consoleSettingsBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        tabWidget->addTab(analyticsTab, QString());

        mainLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        updateChannelLabel->setBuddy(updateChannelComboBox);
        labelInstDir->setBuddy(instDirTextBox);
        labelModsDir->setBuddy(modsDirTextBox);
        labelIconsDir->setBuddy(iconsDirTextBox);
        label_3->setBuddy(themeComboBox);
        label_4->setBuddy(themeComboBoxColors);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, autoUpdateCheckBox);
        QWidget::setTabOrder(autoUpdateCheckBox, updateChannelComboBox);
        QWidget::setTabOrder(updateChannelComboBox, instDirTextBox);
        QWidget::setTabOrder(instDirTextBox, instDirBrowseBtn);
        QWidget::setTabOrder(instDirBrowseBtn, modsDirTextBox);
        QWidget::setTabOrder(modsDirTextBox, modsDirBrowseBtn);
        QWidget::setTabOrder(modsDirBrowseBtn, iconsDirTextBox);
        QWidget::setTabOrder(iconsDirTextBox, iconsDirBrowseBtn);
        QWidget::setTabOrder(iconsDirBrowseBtn, resetNotificationsBtn);
        QWidget::setTabOrder(resetNotificationsBtn, sortLastLaunchedBtn);
        QWidget::setTabOrder(sortLastLaunchedBtn, sortByNameBtn);
        QWidget::setTabOrder(sortByNameBtn, themeComboBox);
        QWidget::setTabOrder(themeComboBox, themeComboBoxColors);
        QWidget::setTabOrder(themeComboBoxColors, showConsoleCheck);
        QWidget::setTabOrder(showConsoleCheck, autoCloseConsoleCheck);
        QWidget::setTabOrder(autoCloseConsoleCheck, showConsoleErrorCheck);
        QWidget::setTabOrder(showConsoleErrorCheck, lineLimitSpinBox);
        QWidget::setTabOrder(lineLimitSpinBox, checkStopLogging);
        QWidget::setTabOrder(checkStopLogging, consoleFont);
        QWidget::setTabOrder(consoleFont, fontSizeBox);
        QWidget::setTabOrder(fontSizeBox, fontPreview);

        retranslateUi(MultiMCPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MultiMCPage);
    } // setupUi

    void retranslateUi(QWidget *MultiMCPage)
    {
        updateSettingsBox->setTitle(QApplication::translate("MultiMCPage", "Update Settings", Q_NULLPTR));
        autoUpdateCheckBox->setText(QApplication::translate("MultiMCPage", "Check for updates when MultiMC starts?", Q_NULLPTR));
        updateChannelLabel->setText(QApplication::translate("MultiMCPage", "Up&date Channel:", Q_NULLPTR));
        updateChannelDescLabel->setText(QApplication::translate("MultiMCPage", "No channel selected.", Q_NULLPTR));
        foldersBox->setTitle(QApplication::translate("MultiMCPage", "Folders", Q_NULLPTR));
        labelInstDir->setText(QApplication::translate("MultiMCPage", "I&nstances:", Q_NULLPTR));
        labelModsDir->setText(QApplication::translate("MultiMCPage", "&Mods:", Q_NULLPTR));
        labelIconsDir->setText(QApplication::translate("MultiMCPage", "&Icons:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(featuresTab), QApplication::translate("MultiMCPage", "Features", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MultiMCPage", "MultiMC notifications", Q_NULLPTR));
        resetNotificationsBtn->setText(QApplication::translate("MultiMCPage", "Reset hidden notifications", Q_NULLPTR));
        sortingModeBox->setTitle(QApplication::translate("MultiMCPage", "Instance view sorting mode", Q_NULLPTR));
        sortLastLaunchedBtn->setText(QApplication::translate("MultiMCPage", "By &last launched", Q_NULLPTR));
        sortByNameBtn->setText(QApplication::translate("MultiMCPage", "By &name", Q_NULLPTR));
        themeBox->setTitle(QApplication::translate("MultiMCPage", "Theme", Q_NULLPTR));
        label_3->setText(QApplication::translate("MultiMCPage", "&Icons", Q_NULLPTR));
        themeComboBox->setItemText(0, QApplication::translate("MultiMCPage", "Default", Q_NULLPTR));
        themeComboBox->setItemText(1, QApplication::translate("MultiMCPage", "Simple (Dark Icons)", Q_NULLPTR));
        themeComboBox->setItemText(2, QApplication::translate("MultiMCPage", "Simple (Light Icons)", Q_NULLPTR));
        themeComboBox->setItemText(3, QApplication::translate("MultiMCPage", "Simple (Blue Icons)", Q_NULLPTR));
        themeComboBox->setItemText(4, QApplication::translate("MultiMCPage", "Simple (Colored Icons)", Q_NULLPTR));
        themeComboBox->setItemText(8, QApplication::translate("MultiMCPage", "Custom", Q_NULLPTR));

        label_4->setText(QApplication::translate("MultiMCPage", "Colors", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QApplication::translate("MultiMCPage", "User Interface", Q_NULLPTR));
        consoleSettingsBox->setTitle(QApplication::translate("MultiMCPage", "Console Settings", Q_NULLPTR));
        showConsoleCheck->setText(QApplication::translate("MultiMCPage", "Show console while the game is running?", Q_NULLPTR));
        autoCloseConsoleCheck->setText(QApplication::translate("MultiMCPage", "Automatically close console when the game quits?", Q_NULLPTR));
        showConsoleErrorCheck->setText(QApplication::translate("MultiMCPage", "Show console when the game crashes?", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MultiMCPage", "History limit", Q_NULLPTR));
        checkStopLogging->setText(QApplication::translate("MultiMCPage", "Stop logging when log overflows", Q_NULLPTR));
        lineLimitSpinBox->setSuffix(QApplication::translate("MultiMCPage", " lines", Q_NULLPTR));
        themeBox_2->setTitle(QApplication::translate("MultiMCPage", "Console font", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(consoleTab), QApplication::translate("MultiMCPage", "Console", Q_NULLPTR));
        consoleSettingsBox_2->setTitle(QApplication::translate("MultiMCPage", "Analytics Settings", Q_NULLPTR));
        analyticsCheck->setText(QApplication::translate("MultiMCPage", "Send anonymous usage statistics?", Q_NULLPTR));
        label_5->setText(QApplication::translate("MultiMCPage", "<html><head/>\n"
"<body>\n"
"<p>MultiMC sends anonymous usage statistics on every start of the application.</p><p>The following data is collected:</p>\n"
"<ul>\n"
"<li>MultiMC version.</li>\n"
"<li>Operating system name, version and architecture.</li>\n"
"<li>CPU architecture (kernel architecture on linux).</li>\n"
"<li>Size of system memory.</li>\n"
"<li>Java version, architecture and memory settings.</li>\n"
"</ul>\n"
"</body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(analyticsTab), QApplication::translate("MultiMCPage", "Analytics", Q_NULLPTR));
        Q_UNUSED(MultiMCPage);
    } // retranslateUi

};

namespace Ui {
    class MultiMCPage: public Ui_MultiMCPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIMCPAGE_H
