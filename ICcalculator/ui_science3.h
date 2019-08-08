/********************************************************************************
** Form generated from reading UI file 'science3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENCE3_H
#define UI_SCIENCE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_science
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *Add;
    QPushButton *Leftbracket;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Subtract;
    QPushButton *Rightbracket;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Multiple;
    QPushButton *Backspace;
    QTextEdit *textEditIN;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Zero;
    QPushButton *Point;
    QPushButton *Equal;
    QPushButton *Divide;
    QPushButton *Clear;
    QTextEdit *textEditOUT;

    void setupUi(QWidget *science)
    {
        if (science->objectName().isEmpty())
            science->setObjectName(QStringLiteral("science"));
        science->resize(1000, 1000);
        science->setMinimumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(9);
        science->setFont(font);
        widget = new QWidget(science);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 420, 530));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Seven = new QPushButton(widget);
        Seven->setObjectName(QStringLiteral("Seven"));
        Seven->setMinimumSize(QSize(0, 70));
        QFont font1;
        font1.setPointSize(23);
        Seven->setFont(font1);

        horizontalLayout->addWidget(Seven);

        Eight = new QPushButton(widget);
        Eight->setObjectName(QStringLiteral("Eight"));
        Eight->setMinimumSize(QSize(0, 70));
        Eight->setFont(font1);

        horizontalLayout->addWidget(Eight);

        Nine = new QPushButton(widget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setMinimumSize(QSize(0, 70));
        Nine->setFont(font1);

        horizontalLayout->addWidget(Nine);

        Add = new QPushButton(widget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setMinimumSize(QSize(0, 70));
        Add->setFont(font1);

        horizontalLayout->addWidget(Add);

        Leftbracket = new QPushButton(widget);
        Leftbracket->setObjectName(QStringLiteral("Leftbracket"));
        Leftbracket->setMinimumSize(QSize(0, 70));
        Leftbracket->setFont(font1);

        horizontalLayout->addWidget(Leftbracket);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Four = new QPushButton(widget);
        Four->setObjectName(QStringLiteral("Four"));
        Four->setMinimumSize(QSize(0, 70));
        Four->setFont(font1);

        horizontalLayout_2->addWidget(Four);

        Five = new QPushButton(widget);
        Five->setObjectName(QStringLiteral("Five"));
        Five->setMinimumSize(QSize(0, 70));
        Five->setFont(font1);

        horizontalLayout_2->addWidget(Five);

        Six = new QPushButton(widget);
        Six->setObjectName(QStringLiteral("Six"));
        Six->setMinimumSize(QSize(0, 70));
        Six->setFont(font1);

        horizontalLayout_2->addWidget(Six);

        Subtract = new QPushButton(widget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        Subtract->setMinimumSize(QSize(0, 70));
        Subtract->setFont(font1);

        horizontalLayout_2->addWidget(Subtract);

        Rightbracket = new QPushButton(widget);
        Rightbracket->setObjectName(QStringLiteral("Rightbracket"));
        Rightbracket->setMinimumSize(QSize(0, 70));
        Rightbracket->setFont(font1);

        horizontalLayout_2->addWidget(Rightbracket);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        One = new QPushButton(widget);
        One->setObjectName(QStringLiteral("One"));
        One->setMinimumSize(QSize(0, 70));
        One->setFont(font1);

        horizontalLayout_3->addWidget(One);

        Two = new QPushButton(widget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setMinimumSize(QSize(0, 70));
        Two->setFont(font1);

        horizontalLayout_3->addWidget(Two);

        Three = new QPushButton(widget);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setMinimumSize(QSize(0, 70));
        Three->setFont(font1);

        horizontalLayout_3->addWidget(Three);

        Multiple = new QPushButton(widget);
        Multiple->setObjectName(QStringLiteral("Multiple"));
        Multiple->setMinimumSize(QSize(0, 70));
        Multiple->setFont(font1);

        horizontalLayout_3->addWidget(Multiple);

        Backspace = new QPushButton(widget);
        Backspace->setObjectName(QStringLiteral("Backspace"));
        Backspace->setMinimumSize(QSize(0, 70));
        Backspace->setFont(font1);

        horizontalLayout_3->addWidget(Backspace);


        verticalLayout->addLayout(horizontalLayout_3);

        textEditIN = new QTextEdit(widget);
        textEditIN->setObjectName(QStringLiteral("textEditIN"));
        textEditIN->setEnabled(false);
        textEditIN->setMinimumSize(QSize(0, 0));
        textEditIN->setMaximumSize(QSize(16777215, 150));
        QFont font2;
        font2.setPointSize(30);
        textEditIN->setFont(font2);
        textEditIN->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(textEditIN);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Zero = new QPushButton(widget);
        Zero->setObjectName(QStringLiteral("Zero"));
        Zero->setMinimumSize(QSize(0, 70));
        Zero->setFont(font1);

        horizontalLayout_4->addWidget(Zero);

        Point = new QPushButton(widget);
        Point->setObjectName(QStringLiteral("Point"));
        Point->setMinimumSize(QSize(0, 70));
        Point->setFont(font1);

        horizontalLayout_4->addWidget(Point);

        Equal = new QPushButton(widget);
        Equal->setObjectName(QStringLiteral("Equal"));
        Equal->setMinimumSize(QSize(0, 70));
        Equal->setFont(font1);

        horizontalLayout_4->addWidget(Equal);

        Divide = new QPushButton(widget);
        Divide->setObjectName(QStringLiteral("Divide"));
        Divide->setMinimumSize(QSize(0, 70));
        Divide->setFont(font1);

        horizontalLayout_4->addWidget(Divide);

        Clear = new QPushButton(widget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setMinimumSize(QSize(0, 70));
        Clear->setFont(font1);

        horizontalLayout_4->addWidget(Clear);


        verticalLayout->addLayout(horizontalLayout_4);

        textEditOUT = new QTextEdit(widget);
        textEditOUT->setObjectName(QStringLiteral("textEditOUT"));
        textEditOUT->setEnabled(false);
        textEditOUT->setMinimumSize(QSize(0, 0));
        textEditOUT->setMaximumSize(QSize(16777215, 70));
        QFont font3;
        font3.setPointSize(40);
        textEditOUT->setFont(font3);
        textEditOUT->setFrameShape(QFrame::VLine);

        verticalLayout->addWidget(textEditOUT);


        retranslateUi(science);

        QMetaObject::connectSlotsByName(science);
    } // setupUi

    void retranslateUi(QWidget *science)
    {
        science->setWindowTitle(QApplication::translate("science", "Form", Q_NULLPTR));
        Seven->setText(QApplication::translate("science", "7", Q_NULLPTR));
        Eight->setText(QApplication::translate("science", "8", Q_NULLPTR));
        Nine->setText(QApplication::translate("science", "9", Q_NULLPTR));
        Add->setText(QApplication::translate("science", "+", Q_NULLPTR));
        Leftbracket->setText(QApplication::translate("science", "(", Q_NULLPTR));
        Four->setText(QApplication::translate("science", "4", Q_NULLPTR));
        Five->setText(QApplication::translate("science", "5", Q_NULLPTR));
        Six->setText(QApplication::translate("science", "6", Q_NULLPTR));
        Subtract->setText(QApplication::translate("science", "-", Q_NULLPTR));
        Rightbracket->setText(QApplication::translate("science", ")", Q_NULLPTR));
        One->setText(QApplication::translate("science", "1", Q_NULLPTR));
        Two->setText(QApplication::translate("science", "2", Q_NULLPTR));
        Three->setText(QApplication::translate("science", "3", Q_NULLPTR));
        Multiple->setText(QApplication::translate("science", "\303\227", Q_NULLPTR));
        Backspace->setText(QApplication::translate("science", "\342\206\220", Q_NULLPTR));
        Zero->setText(QApplication::translate("science", "0", Q_NULLPTR));
        Point->setText(QApplication::translate("science", ".", Q_NULLPTR));
        Equal->setText(QApplication::translate("science", "=", Q_NULLPTR));
        Divide->setText(QApplication::translate("science", "\303\267", Q_NULLPTR));
        Clear->setText(QApplication::translate("science", "C", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class science: public Ui_science {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENCE3_H
