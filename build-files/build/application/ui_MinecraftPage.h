/********************************************************************************
** Form generated from reading UI file 'MinecraftPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINECRAFTPAGE_H
#define UI_MINECRAFTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinecraftPage
{
public:
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *minecraftTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *windowSizeGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *maximizedCheckBox;
    QGridLayout *gridLayoutWindowSize;
    QLabel *labelWindowHeight;
    QLabel *labelWindowWidth;
    QSpinBox *windowWidthSpinBox;
    QSpinBox *windowHeightSpinBox;
    QGroupBox *nativeLibWorkaroundGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *useNativeGLFWCheck;
    QCheckBox *useNativeOpenALCheck;
    QGroupBox *gameTimeGroupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *showGameTime;
    QCheckBox *recordGameTime;
    QSpacerItem *verticalSpacerMinecraft;

    void setupUi(QWidget *MinecraftPage)
    {
        if (MinecraftPage->objectName().isEmpty())
            MinecraftPage->setObjectName(QStringLiteral("MinecraftPage"));
        MinecraftPage->resize(936, 1134);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MinecraftPage->sizePolicy().hasHeightForWidth());
        MinecraftPage->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(MinecraftPage);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(MinecraftPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        minecraftTab = new QWidget();
        minecraftTab->setObjectName(QStringLiteral("minecraftTab"));
        verticalLayout_3 = new QVBoxLayout(minecraftTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        windowSizeGroupBox = new QGroupBox(minecraftTab);
        windowSizeGroupBox->setObjectName(QStringLiteral("windowSizeGroupBox"));
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

        nativeLibWorkaroundGroupBox = new QGroupBox(minecraftTab);
        nativeLibWorkaroundGroupBox->setObjectName(QStringLiteral("nativeLibWorkaroundGroupBox"));
        verticalLayout_5 = new QVBoxLayout(nativeLibWorkaroundGroupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        useNativeGLFWCheck = new QCheckBox(nativeLibWorkaroundGroupBox);
        useNativeGLFWCheck->setObjectName(QStringLiteral("useNativeGLFWCheck"));

        verticalLayout_5->addWidget(useNativeGLFWCheck);

        useNativeOpenALCheck = new QCheckBox(nativeLibWorkaroundGroupBox);
        useNativeOpenALCheck->setObjectName(QStringLiteral("useNativeOpenALCheck"));

        verticalLayout_5->addWidget(useNativeOpenALCheck);


        verticalLayout_3->addWidget(nativeLibWorkaroundGroupBox);

        gameTimeGroupBox = new QGroupBox(minecraftTab);
        gameTimeGroupBox->setObjectName(QStringLiteral("gameTimeGroupBox"));
        verticalLayout_6 = new QVBoxLayout(gameTimeGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        showGameTime = new QCheckBox(gameTimeGroupBox);
        showGameTime->setObjectName(QStringLiteral("showGameTime"));

        verticalLayout_6->addWidget(showGameTime);

        recordGameTime = new QCheckBox(gameTimeGroupBox);
        recordGameTime->setObjectName(QStringLiteral("recordGameTime"));

        verticalLayout_6->addWidget(recordGameTime);


        verticalLayout_3->addWidget(gameTimeGroupBox);

        verticalSpacerMinecraft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerMinecraft);

        tabWidget->addTab(minecraftTab, QString());
        tabWidget->setTabText(tabWidget->indexOf(minecraftTab), QStringLiteral("Minecraft"));

        mainLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        labelWindowHeight->setBuddy(windowHeightSpinBox);
        labelWindowWidth->setBuddy(windowWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, maximizedCheckBox);
        QWidget::setTabOrder(maximizedCheckBox, windowWidthSpinBox);
        QWidget::setTabOrder(windowWidthSpinBox, windowHeightSpinBox);
        QWidget::setTabOrder(windowHeightSpinBox, useNativeGLFWCheck);
        QWidget::setTabOrder(useNativeGLFWCheck, useNativeOpenALCheck);

        retranslateUi(MinecraftPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MinecraftPage);
    } // setupUi

    void retranslateUi(QWidget *MinecraftPage)
    {
        windowSizeGroupBox->setTitle(QApplication::translate("MinecraftPage", "Window Size", Q_NULLPTR));
        maximizedCheckBox->setText(QApplication::translate("MinecraftPage", "Start Minecraft maximized?", Q_NULLPTR));
        labelWindowHeight->setText(QApplication::translate("MinecraftPage", "Window hei&ght:", Q_NULLPTR));
        labelWindowWidth->setText(QApplication::translate("MinecraftPage", "W&indow width:", Q_NULLPTR));
        nativeLibWorkaroundGroupBox->setTitle(QApplication::translate("MinecraftPage", "Native library workarounds", Q_NULLPTR));
        useNativeGLFWCheck->setText(QApplication::translate("MinecraftPage", "Use system installation of GLFW", Q_NULLPTR));
        useNativeOpenALCheck->setText(QApplication::translate("MinecraftPage", "Use system installation of OpenAL", Q_NULLPTR));
        gameTimeGroupBox->setTitle(QApplication::translate("MinecraftPage", "Game time", Q_NULLPTR));
        showGameTime->setText(QApplication::translate("MinecraftPage", "Show time spent playing instances", Q_NULLPTR));
        recordGameTime->setText(QApplication::translate("MinecraftPage", "Record time spent playing instances", Q_NULLPTR));
        Q_UNUSED(MinecraftPage);
    } // retranslateUi

};

namespace Ui {
    class MinecraftPage: public Ui_MinecraftPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINECRAFTPAGE_H
