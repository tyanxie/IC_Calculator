/********************************************************************************
** Form generated from reading UI file 'prompt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPT_H
#define UI_PROMPT_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Prompt
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *message;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Prompt)
    {
        if (Prompt->objectName().isEmpty())
            Prompt->setObjectName(QStringLiteral("Prompt"));
        Prompt->resize(321, 169);
        verticalLayout = new QVBoxLayout(Prompt);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        message = new QLabel(Prompt);
        message->setObjectName(QStringLiteral("message"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        message->setFont(font);

        verticalLayout->addWidget(message);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Prompt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(113, 66));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 2);

        retranslateUi(Prompt);

        QMetaObject::connectSlotsByName(Prompt);
    } // setupUi

    void retranslateUi(QDialog *Prompt)
    {
        Prompt->setWindowTitle(QApplication::translate("Prompt", "Dialog", Q_NULLPTR));
        message->setText(QString());
        pushButton->setText(QApplication::translate("Prompt", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Prompt: public Ui_Prompt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPT_H
