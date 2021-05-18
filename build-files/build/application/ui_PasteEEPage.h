/********************************************************************************
** Form generated from reading UI file 'PasteEEPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTEEEPAGE_H
#define UI_PASTEEEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasteEEPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *multimcButton;
    QRadioButton *customButton;
    QLineEdit *customAPIkeyEdit;
    QFrame *line;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QButtonGroup *pasteButtonGroup;

    void setupUi(QWidget *PasteEEPage)
    {
        if (PasteEEPage->objectName().isEmpty())
            PasteEEPage->setObjectName(QStringLiteral("PasteEEPage"));
        PasteEEPage->resize(491, 474);
        verticalLayout = new QVBoxLayout(PasteEEPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(PasteEEPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        multimcButton = new QRadioButton(groupBox_2);
        pasteButtonGroup = new QButtonGroup(PasteEEPage);
        pasteButtonGroup->setObjectName(QStringLiteral("pasteButtonGroup"));
        pasteButtonGroup->addButton(multimcButton);
        multimcButton->setObjectName(QStringLiteral("multimcButton"));

        verticalLayout_10->addWidget(multimcButton);

        customButton = new QRadioButton(groupBox_2);
        pasteButtonGroup->addButton(customButton);
        customButton->setObjectName(QStringLiteral("customButton"));

        verticalLayout_10->addWidget(customButton);

        customAPIkeyEdit = new QLineEdit(groupBox_2);
        customAPIkeyEdit->setObjectName(QStringLiteral("customAPIkeyEdit"));
        customAPIkeyEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_10->addWidget(customAPIkeyEdit);

        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout_10->addWidget(label);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 216, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("Tab 1"));

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, multimcButton);
        QWidget::setTabOrder(multimcButton, customButton);
        QWidget::setTabOrder(customButton, customAPIkeyEdit);

        retranslateUi(PasteEEPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PasteEEPage);
    } // setupUi

    void retranslateUi(QWidget *PasteEEPage)
    {
        groupBox_2->setTitle(QApplication::translate("PasteEEPage", "paste.ee API key", Q_NULLPTR));
        multimcButton->setText(QApplication::translate("PasteEEPage", "MultiMC key - 12MB &upload limit", Q_NULLPTR));
        customButton->setText(QApplication::translate("PasteEEPage", "&Your own key - 12MB upload limit:", Q_NULLPTR));
        customAPIkeyEdit->setPlaceholderText(QApplication::translate("PasteEEPage", "Paste your API key here!", Q_NULLPTR));
        label->setText(QApplication::translate("PasteEEPage", "<html><head/><body><p><a href=\"https://paste.ee\">paste.ee</a> is used by MultiMC for log uploads. If you have a <a href=\"https://paste.ee\">paste.ee</a> account, you can add your API key here and have your uploaded logs paired with your account.</p></body></html>", Q_NULLPTR));
        Q_UNUSED(PasteEEPage);
    } // retranslateUi

};

namespace Ui {
    class PasteEEPage: public Ui_PasteEEPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTEEEPAGE_H
