/********************************************************************************
** Form generated from reading UI file 'JavaPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAVAPAGE_H
#define UI_JAVAPAGE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JavaPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *memoryGroupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *maxMemSpinBox;
    QLabel *labelMinMem;
    QLabel *labelMaxMem;
    QSpinBox *minMemSpinBox;
    QLabel *labelPermGen;
    QSpinBox *permGenSpinBox;
    QGroupBox *javaSettingsGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *labelJavaPath;
    QHBoxLayout *horizontalLayout;
    QLineEdit *javaPathTextBox;
    QPushButton *javaBrowseBtn;
    QLineEdit *jvmArgsTextBox;
    QLabel *labelJVMArgs;
    QPushButton *javaDetectBtn;
    QPushButton *javaTestBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *JavaPage)
    {
        if (JavaPage->objectName().isEmpty())
            JavaPage->setObjectName(QStringLiteral("JavaPage"));
        JavaPage->resize(545, 580);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JavaPage->sizePolicy().hasHeightForWidth());
        JavaPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(JavaPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(JavaPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        memoryGroupBox = new QGroupBox(tab);
        memoryGroupBox->setObjectName(QStringLiteral("memoryGroupBox"));
        gridLayout_2 = new QGridLayout(memoryGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxMemSpinBox = new QSpinBox(memoryGroupBox);
        maxMemSpinBox->setObjectName(QStringLiteral("maxMemSpinBox"));
        maxMemSpinBox->setSuffix(QStringLiteral(" MB"));
        maxMemSpinBox->setMinimum(128);
        maxMemSpinBox->setMaximum(65536);
        maxMemSpinBox->setSingleStep(128);
        maxMemSpinBox->setValue(1024);

        gridLayout_2->addWidget(maxMemSpinBox, 1, 1, 1, 1);

        labelMinMem = new QLabel(memoryGroupBox);
        labelMinMem->setObjectName(QStringLiteral("labelMinMem"));

        gridLayout_2->addWidget(labelMinMem, 0, 0, 1, 1);

        labelMaxMem = new QLabel(memoryGroupBox);
        labelMaxMem->setObjectName(QStringLiteral("labelMaxMem"));

        gridLayout_2->addWidget(labelMaxMem, 1, 0, 1, 1);

        minMemSpinBox = new QSpinBox(memoryGroupBox);
        minMemSpinBox->setObjectName(QStringLiteral("minMemSpinBox"));
        minMemSpinBox->setSuffix(QStringLiteral(" MB"));
        minMemSpinBox->setMinimum(128);
        minMemSpinBox->setMaximum(65536);
        minMemSpinBox->setSingleStep(128);
        minMemSpinBox->setValue(256);

        gridLayout_2->addWidget(minMemSpinBox, 0, 1, 1, 1);

        labelPermGen = new QLabel(memoryGroupBox);
        labelPermGen->setObjectName(QStringLiteral("labelPermGen"));
        labelPermGen->setText(QStringLiteral("PermGen:"));

        gridLayout_2->addWidget(labelPermGen, 2, 0, 1, 1);

        permGenSpinBox = new QSpinBox(memoryGroupBox);
        permGenSpinBox->setObjectName(QStringLiteral("permGenSpinBox"));
        permGenSpinBox->setSuffix(QStringLiteral(" MB"));
        permGenSpinBox->setMinimum(64);
        permGenSpinBox->setMaximum(999999999);
        permGenSpinBox->setSingleStep(8);
        permGenSpinBox->setValue(64);

        gridLayout_2->addWidget(permGenSpinBox, 2, 1, 1, 1);


        verticalLayout_2->addWidget(memoryGroupBox);

        javaSettingsGroupBox = new QGroupBox(tab);
        javaSettingsGroupBox->setObjectName(QStringLiteral("javaSettingsGroupBox"));
        gridLayout_3 = new QGridLayout(javaSettingsGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelJavaPath = new QLabel(javaSettingsGroupBox);
        labelJavaPath->setObjectName(QStringLiteral("labelJavaPath"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelJavaPath->sizePolicy().hasHeightForWidth());
        labelJavaPath->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(labelJavaPath, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        javaPathTextBox = new QLineEdit(javaSettingsGroupBox);
        javaPathTextBox->setObjectName(QStringLiteral("javaPathTextBox"));

        horizontalLayout->addWidget(javaPathTextBox);

        javaBrowseBtn = new QPushButton(javaSettingsGroupBox);
        javaBrowseBtn->setObjectName(QStringLiteral("javaBrowseBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(javaBrowseBtn->sizePolicy().hasHeightForWidth());
        javaBrowseBtn->setSizePolicy(sizePolicy2);
        javaBrowseBtn->setMaximumSize(QSize(28, 16777215));
        javaBrowseBtn->setText(QStringLiteral("..."));

        horizontalLayout->addWidget(javaBrowseBtn);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 2);

        jvmArgsTextBox = new QLineEdit(javaSettingsGroupBox);
        jvmArgsTextBox->setObjectName(QStringLiteral("jvmArgsTextBox"));

        gridLayout_3->addWidget(jvmArgsTextBox, 2, 1, 1, 2);

        labelJVMArgs = new QLabel(javaSettingsGroupBox);
        labelJVMArgs->setObjectName(QStringLiteral("labelJVMArgs"));
        sizePolicy1.setHeightForWidth(labelJVMArgs->sizePolicy().hasHeightForWidth());
        labelJVMArgs->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(labelJVMArgs, 2, 0, 1, 1);

        javaDetectBtn = new QPushButton(javaSettingsGroupBox);
        javaDetectBtn->setObjectName(QStringLiteral("javaDetectBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(javaDetectBtn->sizePolicy().hasHeightForWidth());
        javaDetectBtn->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(javaDetectBtn, 3, 1, 1, 1);

        javaTestBtn = new QPushButton(javaSettingsGroupBox);
        javaTestBtn->setObjectName(QStringLiteral("javaTestBtn"));
        sizePolicy3.setHeightForWidth(javaTestBtn->sizePolicy().hasHeightForWidth());
        javaTestBtn->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(javaTestBtn, 3, 2, 1, 1);


        verticalLayout_2->addWidget(javaSettingsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("Tab 1"));

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(minMemSpinBox, maxMemSpinBox);
        QWidget::setTabOrder(maxMemSpinBox, permGenSpinBox);
        QWidget::setTabOrder(permGenSpinBox, javaBrowseBtn);
        QWidget::setTabOrder(javaBrowseBtn, javaPathTextBox);
        QWidget::setTabOrder(javaPathTextBox, jvmArgsTextBox);
        QWidget::setTabOrder(jvmArgsTextBox, javaDetectBtn);
        QWidget::setTabOrder(javaDetectBtn, javaTestBtn);
        QWidget::setTabOrder(javaTestBtn, tabWidget);

        retranslateUi(JavaPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JavaPage);
    } // setupUi

    void retranslateUi(QWidget *JavaPage)
    {
        memoryGroupBox->setTitle(QApplication::translate("JavaPage", "Memory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxMemSpinBox->setToolTip(QApplication::translate("JavaPage", "The maximum amount of memory Minecraft is allowed to use.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMinMem->setText(QApplication::translate("JavaPage", "Minimum memory allocation:", Q_NULLPTR));
        labelMaxMem->setText(QApplication::translate("JavaPage", "Maximum memory allocation:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minMemSpinBox->setToolTip(QApplication::translate("JavaPage", "The amount of memory Minecraft is started with.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        permGenSpinBox->setToolTip(QApplication::translate("JavaPage", "The amount of memory available to store loaded Java classes.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        javaSettingsGroupBox->setTitle(QApplication::translate("JavaPage", "Java Runtime", Q_NULLPTR));
        labelJavaPath->setText(QApplication::translate("JavaPage", "Java path:", Q_NULLPTR));
        labelJVMArgs->setText(QApplication::translate("JavaPage", "JVM arguments:", Q_NULLPTR));
        javaDetectBtn->setText(QApplication::translate("JavaPage", "Auto-detect...", Q_NULLPTR));
        javaTestBtn->setText(QApplication::translate("JavaPage", "Test", Q_NULLPTR));
        Q_UNUSED(JavaPage);
    } // retranslateUi

};

namespace Ui {
    class JavaPage: public Ui_JavaPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAVAPAGE_H
