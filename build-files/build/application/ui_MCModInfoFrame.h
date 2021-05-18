/********************************************************************************
** Form generated from reading UI file 'MCModInfoFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MCMODINFOFRAME_H
#define UI_MCMODINFOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MCModInfoFrame
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ModText;
    QLabel *label_ModDescription;

    void setupUi(QFrame *MCModInfoFrame)
    {
        if (MCModInfoFrame->objectName().isEmpty())
            MCModInfoFrame->setObjectName(QStringLiteral("MCModInfoFrame"));
        MCModInfoFrame->resize(527, 113);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MCModInfoFrame->sizePolicy().hasHeightForWidth());
        MCModInfoFrame->setSizePolicy(sizePolicy);
        MCModInfoFrame->setMaximumSize(QSize(16777215, 120));
        verticalLayout_2 = new QVBoxLayout(MCModInfoFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ModText = new QLabel(MCModInfoFrame);
        label_ModText->setObjectName(QStringLiteral("label_ModText"));
        label_ModText->setText(QStringLiteral(""));
        label_ModText->setTextFormat(Qt::RichText);
        label_ModText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_ModText->setWordWrap(true);
        label_ModText->setOpenExternalLinks(true);
        label_ModText->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_ModText);

        label_ModDescription = new QLabel(MCModInfoFrame);
        label_ModDescription->setObjectName(QStringLiteral("label_ModDescription"));
#ifndef QT_NO_TOOLTIP
        label_ModDescription->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        label_ModDescription->setText(QStringLiteral(""));
        label_ModDescription->setTextFormat(Qt::RichText);
        label_ModDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_ModDescription->setWordWrap(true);
        label_ModDescription->setOpenExternalLinks(true);
        label_ModDescription->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_ModDescription);


        retranslateUi(MCModInfoFrame);

        QMetaObject::connectSlotsByName(MCModInfoFrame);
    } // setupUi

    void retranslateUi(QFrame *MCModInfoFrame)
    {
        Q_UNUSED(MCModInfoFrame);
    } // retranslateUi

};

namespace Ui {
    class MCModInfoFrame: public Ui_MCModInfoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MCMODINFOFRAME_H
