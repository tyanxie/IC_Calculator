/********************************************************************************
** Form generated from reading UI file 'science.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENCE_H
#define UI_SCIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_science
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEditIN;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *textEditOUT;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PI;
    QPushButton *E;
    QPushButton *Factorial;
    QPushButton *Square;
    QPushButton *Mod;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Involution;
    QPushButton *Sin;
    QPushButton *Cos;
    QPushButton *pushButton_9;
    QPushButton *Log;
    QSpacerItem *verticalSpacer_2;
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
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Zero;
    QPushButton *Point;
    QPushButton *Equal;
    QPushButton *Divide;
    QPushButton *Clear;

    void setupUi(QWidget *science)
    {
        if (science->objectName().isEmpty())
            science->setObjectName(QStringLiteral("science"));
        science->resize(1000, 1000);
        science->setMinimumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(9);
        science->setFont(font);
        layoutWidget = new QWidget(science);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 11, 561, 770));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEditIN = new QTextEdit(layoutWidget);
        textEditIN->setObjectName(QStringLiteral("textEditIN"));
        textEditIN->setEnabled(false);
        textEditIN->setMinimumSize(QSize(0, 0));
        textEditIN->setMaximumSize(QSize(16777215, 150));
        QFont font1;
        font1.setPointSize(30);
        textEditIN->setFont(font1);
        textEditIN->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(textEditIN);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        textEditOUT = new QTextEdit(layoutWidget);
        textEditOUT->setObjectName(QStringLiteral("textEditOUT"));
        textEditOUT->setEnabled(false);
        textEditOUT->setMinimumSize(QSize(0, 0));
        textEditOUT->setMaximumSize(QSize(16777215, 200));
        QFont font2;
        font2.setPointSize(40);
        textEditOUT->setFont(font2);
        textEditOUT->setFrameShape(QFrame::VLine);

        verticalLayout->addWidget(textEditOUT);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        PI = new QPushButton(layoutWidget);
        PI->setObjectName(QStringLiteral("PI"));

        horizontalLayout_5->addWidget(PI);

        E = new QPushButton(layoutWidget);
        E->setObjectName(QStringLiteral("E"));

        horizontalLayout_5->addWidget(E);

        Factorial = new QPushButton(layoutWidget);
        Factorial->setObjectName(QStringLiteral("Factorial"));

        horizontalLayout_5->addWidget(Factorial);

        Square = new QPushButton(layoutWidget);
        Square->setObjectName(QStringLiteral("Square"));

        horizontalLayout_5->addWidget(Square);

        Mod = new QPushButton(layoutWidget);
        Mod->setObjectName(QStringLiteral("Mod"));

        horizontalLayout_5->addWidget(Mod);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Involution = new QPushButton(layoutWidget);
        Involution->setObjectName(QStringLiteral("Involution"));

        horizontalLayout_6->addWidget(Involution);

        Sin = new QPushButton(layoutWidget);
        Sin->setObjectName(QStringLiteral("Sin"));

        horizontalLayout_6->addWidget(Sin);

        Cos = new QPushButton(layoutWidget);
        Cos->setObjectName(QStringLiteral("Cos"));

        horizontalLayout_6->addWidget(Cos);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_6->addWidget(pushButton_9);

        Log = new QPushButton(layoutWidget);
        Log->setObjectName(QStringLiteral("Log"));

        horizontalLayout_6->addWidget(Log);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Seven = new QPushButton(layoutWidget);
        Seven->setObjectName(QStringLiteral("Seven"));
        Seven->setMinimumSize(QSize(0, 70));
        QFont font3;
        font3.setPointSize(23);
        Seven->setFont(font3);

        horizontalLayout->addWidget(Seven);

        Eight = new QPushButton(layoutWidget);
        Eight->setObjectName(QStringLiteral("Eight"));
        Eight->setMinimumSize(QSize(0, 70));
        Eight->setFont(font3);

        horizontalLayout->addWidget(Eight);

        Nine = new QPushButton(layoutWidget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setMinimumSize(QSize(0, 70));
        Nine->setFont(font3);

        horizontalLayout->addWidget(Nine);

        Add = new QPushButton(layoutWidget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setMinimumSize(QSize(0, 70));
        Add->setFont(font3);

        horizontalLayout->addWidget(Add);

        Leftbracket = new QPushButton(layoutWidget);
        Leftbracket->setObjectName(QStringLiteral("Leftbracket"));
        Leftbracket->setMinimumSize(QSize(0, 70));
        Leftbracket->setFont(font3);

        horizontalLayout->addWidget(Leftbracket);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Four = new QPushButton(layoutWidget);
        Four->setObjectName(QStringLiteral("Four"));
        Four->setMinimumSize(QSize(0, 70));
        Four->setFont(font3);

        horizontalLayout_2->addWidget(Four);

        Five = new QPushButton(layoutWidget);
        Five->setObjectName(QStringLiteral("Five"));
        Five->setMinimumSize(QSize(0, 70));
        Five->setFont(font3);

        horizontalLayout_2->addWidget(Five);

        Six = new QPushButton(layoutWidget);
        Six->setObjectName(QStringLiteral("Six"));
        Six->setMinimumSize(QSize(0, 70));
        Six->setFont(font3);

        horizontalLayout_2->addWidget(Six);

        Subtract = new QPushButton(layoutWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        Subtract->setMinimumSize(QSize(0, 70));
        Subtract->setFont(font3);

        horizontalLayout_2->addWidget(Subtract);

        Rightbracket = new QPushButton(layoutWidget);
        Rightbracket->setObjectName(QStringLiteral("Rightbracket"));
        Rightbracket->setMinimumSize(QSize(0, 70));
        Rightbracket->setFont(font3);

        horizontalLayout_2->addWidget(Rightbracket);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        One = new QPushButton(layoutWidget);
        One->setObjectName(QStringLiteral("One"));
        One->setMinimumSize(QSize(0, 70));
        One->setFont(font3);

        horizontalLayout_3->addWidget(One);

        Two = new QPushButton(layoutWidget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setMinimumSize(QSize(0, 70));
        Two->setFont(font3);

        horizontalLayout_3->addWidget(Two);

        Three = new QPushButton(layoutWidget);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setMinimumSize(QSize(0, 70));
        Three->setFont(font3);

        horizontalLayout_3->addWidget(Three);

        Multiple = new QPushButton(layoutWidget);
        Multiple->setObjectName(QStringLiteral("Multiple"));
        Multiple->setMinimumSize(QSize(0, 70));
        Multiple->setFont(font3);

        horizontalLayout_3->addWidget(Multiple);

        Backspace = new QPushButton(layoutWidget);
        Backspace->setObjectName(QStringLiteral("Backspace"));
        Backspace->setMinimumSize(QSize(0, 70));
        Backspace->setFont(font3);

        horizontalLayout_3->addWidget(Backspace);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Zero = new QPushButton(layoutWidget);
        Zero->setObjectName(QStringLiteral("Zero"));
        Zero->setMinimumSize(QSize(0, 70));
        Zero->setFont(font3);

        horizontalLayout_4->addWidget(Zero);

        Point = new QPushButton(layoutWidget);
        Point->setObjectName(QStringLiteral("Point"));
        Point->setMinimumSize(QSize(0, 70));
        Point->setFont(font3);

        horizontalLayout_4->addWidget(Point);

        Equal = new QPushButton(layoutWidget);
        Equal->setObjectName(QStringLiteral("Equal"));
        Equal->setMinimumSize(QSize(0, 70));
        Equal->setFont(font3);

        horizontalLayout_4->addWidget(Equal);

        Divide = new QPushButton(layoutWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        Divide->setMinimumSize(QSize(0, 70));
        Divide->setFont(font3);

        horizontalLayout_4->addWidget(Divide);

        Clear = new QPushButton(layoutWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setMinimumSize(QSize(0, 70));
        Clear->setFont(font3);

        horizontalLayout_4->addWidget(Clear);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(science);

        QMetaObject::connectSlotsByName(science);
    } // setupUi

    void retranslateUi(QWidget *science)
    {
        science->setWindowTitle(QApplication::translate("science", "Form", Q_NULLPTR));
        PI->setText(QApplication::translate("science", "\317\200", Q_NULLPTR));
        E->setText(QApplication::translate("science", "e", Q_NULLPTR));
        Factorial->setText(QApplication::translate("science", "n!", Q_NULLPTR));
        Square->setText(QApplication::translate("science", "\342\210\232", Q_NULLPTR));
        Mod->setText(QApplication::translate("science", "Mod", Q_NULLPTR));
        Involution->setText(QApplication::translate("science", "x^y", Q_NULLPTR));
        Sin->setText(QApplication::translate("science", "sin", Q_NULLPTR));
        Cos->setText(QApplication::translate("science", "cos", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("science", "tan", Q_NULLPTR));
        Log->setText(QApplication::translate("science", "ln", Q_NULLPTR));
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

#endif // UI_SCIENCE_H
