/********************************************************************************
** Form generated from reading UI file 'ExternalToolsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALTOOLSPAGE_H
#define UI_EXTERNALTOOLSPAGE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExternalToolsPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *jprofilerPathEdit;
    QPushButton *jprofilerPathBtn;
    QPushButton *jprofilerCheckBtn;
    QLabel *jprofilerLink;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *jvisualvmPathEdit;
    QPushButton *jvisualvmPathBtn;
    QPushButton *jvisualvmCheckBtn;
    QLabel *jvisualvmLink;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mceditPathEdit;
    QPushButton *mceditPathBtn;
    QPushButton *mceditCheckBtn;
    QLabel *mceditLink;
    QGroupBox *editorsBox;
    QGridLayout *foldersBoxLayout_2;
    QLineEdit *jsonEditorTextBox;
    QLabel *labelJsonEditor;
    QToolButton *jsonEditorBrowseBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExternalToolsPage)
    {
        if (ExternalToolsPage->objectName().isEmpty())
            ExternalToolsPage->setObjectName(QStringLiteral("ExternalToolsPage"));
        ExternalToolsPage->resize(673, 751);
        verticalLayout = new QVBoxLayout(ExternalToolsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(ExternalToolsPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setTitle(QStringLiteral("JProfiler"));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        jprofilerPathEdit = new QLineEdit(groupBox_2);
        jprofilerPathEdit->setObjectName(QStringLiteral("jprofilerPathEdit"));

        horizontalLayout_4->addWidget(jprofilerPathEdit);

        jprofilerPathBtn = new QPushButton(groupBox_2);
        jprofilerPathBtn->setObjectName(QStringLiteral("jprofilerPathBtn"));
        jprofilerPathBtn->setText(QStringLiteral("..."));

        horizontalLayout_4->addWidget(jprofilerPathBtn);


        verticalLayout_10->addLayout(horizontalLayout_4);

        jprofilerCheckBtn = new QPushButton(groupBox_2);
        jprofilerCheckBtn->setObjectName(QStringLiteral("jprofilerCheckBtn"));

        verticalLayout_10->addWidget(jprofilerCheckBtn);

        jprofilerLink = new QLabel(groupBox_2);
        jprofilerLink->setObjectName(QStringLiteral("jprofilerLink"));
        jprofilerLink->setText(QStringLiteral("<html><head/><body><p><a href=\"https://www.ej-technologies.com/products/jprofiler/overview.html\">https://www.ej-technologies.com/products/jprofiler/overview.html</a></p></body></html>"));

        verticalLayout_10->addWidget(jprofilerLink);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setTitle(QStringLiteral("JVisualVM"));
        verticalLayout_11 = new QVBoxLayout(groupBox_3);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        jvisualvmPathEdit = new QLineEdit(groupBox_3);
        jvisualvmPathEdit->setObjectName(QStringLiteral("jvisualvmPathEdit"));

        horizontalLayout_5->addWidget(jvisualvmPathEdit);

        jvisualvmPathBtn = new QPushButton(groupBox_3);
        jvisualvmPathBtn->setObjectName(QStringLiteral("jvisualvmPathBtn"));
        jvisualvmPathBtn->setText(QStringLiteral("..."));

        horizontalLayout_5->addWidget(jvisualvmPathBtn);


        verticalLayout_11->addLayout(horizontalLayout_5);

        jvisualvmCheckBtn = new QPushButton(groupBox_3);
        jvisualvmCheckBtn->setObjectName(QStringLiteral("jvisualvmCheckBtn"));

        verticalLayout_11->addWidget(jvisualvmCheckBtn);

        jvisualvmLink = new QLabel(groupBox_3);
        jvisualvmLink->setObjectName(QStringLiteral("jvisualvmLink"));
        jvisualvmLink->setText(QStringLiteral("<html><head/><body><p><a href=\"https://visualvm.github.io/\">https://visualvm.github.io/</a></p></body></html>"));

        verticalLayout_11->addWidget(jvisualvmLink);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setTitle(QStringLiteral("MCEdit"));
        verticalLayout_12 = new QVBoxLayout(groupBox_4);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mceditPathEdit = new QLineEdit(groupBox_4);
        mceditPathEdit->setObjectName(QStringLiteral("mceditPathEdit"));

        horizontalLayout_6->addWidget(mceditPathEdit);

        mceditPathBtn = new QPushButton(groupBox_4);
        mceditPathBtn->setObjectName(QStringLiteral("mceditPathBtn"));
        mceditPathBtn->setText(QStringLiteral("..."));

        horizontalLayout_6->addWidget(mceditPathBtn);


        verticalLayout_12->addLayout(horizontalLayout_6);

        mceditCheckBtn = new QPushButton(groupBox_4);
        mceditCheckBtn->setObjectName(QStringLiteral("mceditCheckBtn"));

        verticalLayout_12->addWidget(mceditCheckBtn);

        mceditLink = new QLabel(groupBox_4);
        mceditLink->setObjectName(QStringLiteral("mceditLink"));
        mceditLink->setText(QStringLiteral("<html><head/><body><p><a href=\"https://www.mcedit.net/\">https://www.mcedit.net/</a></p></body></html>"));

        verticalLayout_12->addWidget(mceditLink);


        verticalLayout_2->addWidget(groupBox_4);

        editorsBox = new QGroupBox(tab);
        editorsBox->setObjectName(QStringLiteral("editorsBox"));
        foldersBoxLayout_2 = new QGridLayout(editorsBox);
        foldersBoxLayout_2->setObjectName(QStringLiteral("foldersBoxLayout_2"));
        jsonEditorTextBox = new QLineEdit(editorsBox);
        jsonEditorTextBox->setObjectName(QStringLiteral("jsonEditorTextBox"));

        foldersBoxLayout_2->addWidget(jsonEditorTextBox, 0, 1, 1, 1);

        labelJsonEditor = new QLabel(editorsBox);
        labelJsonEditor->setObjectName(QStringLiteral("labelJsonEditor"));

        foldersBoxLayout_2->addWidget(labelJsonEditor, 0, 0, 1, 1);

        jsonEditorBrowseBtn = new QToolButton(editorsBox);
        jsonEditorBrowseBtn->setObjectName(QStringLiteral("jsonEditorBrowseBtn"));
        jsonEditorBrowseBtn->setText(QStringLiteral("..."));

        foldersBoxLayout_2->addWidget(jsonEditorBrowseBtn, 0, 2, 1, 1);


        verticalLayout_2->addWidget(editorsBox);

        verticalSpacer = new QSpacerItem(20, 216, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("Tab 1"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ExternalToolsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExternalToolsPage);
    } // setupUi

    void retranslateUi(QWidget *ExternalToolsPage)
    {
        jprofilerCheckBtn->setText(QApplication::translate("ExternalToolsPage", "Check", Q_NULLPTR));
        jvisualvmCheckBtn->setText(QApplication::translate("ExternalToolsPage", "Check", Q_NULLPTR));
        mceditCheckBtn->setText(QApplication::translate("ExternalToolsPage", "Check", Q_NULLPTR));
        editorsBox->setTitle(QApplication::translate("ExternalToolsPage", "External Editors (leave empty for system default)", Q_NULLPTR));
        labelJsonEditor->setText(QApplication::translate("ExternalToolsPage", "Text Editor:", Q_NULLPTR));
        Q_UNUSED(ExternalToolsPage);
    } // retranslateUi

};

namespace Ui {
    class ExternalToolsPage: public Ui_ExternalToolsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALTOOLSPAGE_H
