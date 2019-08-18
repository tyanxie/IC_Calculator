/********************************************************************************
** Form generated from reading UI file 'equation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUATION_H
#define UI_EQUATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equation
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *One2;
    QRadioButton *One3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Two;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *textEdit_a;
    QLabel *label_16;
    QLineEdit *textEdit_b;
    QLabel *label_17;
    QLineEdit *textEdit_c;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_16;
    QTextEdit *textEdit_out;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *textEditaa;
    QLabel *label;
    QLineEdit *textEdit_a_2;
    QLabel *label_2;
    QLineEdit *textEdit_b_2;
    QLabel *label_3;
    QLineEdit *textEdit_c_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *textEdit_x1_a;
    QLabel *label_6;
    QLabel *textEdit_x1_b;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *textEdit_x2_a;
    QLabel *add1;
    QLabel *textEdit_x2_b;
    QLabel *i1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *textEdit_x3_a;
    QLabel *add2;
    QLabel *textEdit_x3_b;
    QLabel *i2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_besides;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *Twoa;
    QLabel *label_8;
    QLineEdit *Twob;
    QLabel *label_11;
    QLineEdit *Twoe;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *Twoc;
    QLabel *label_12;
    QLineEdit *Twod;
    QLabel *label_13;
    QLineEdit *Twof;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLabel *Two_x_out;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QLabel *Two_y_out;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;

    void setupUi(QWidget *Equation)
    {
        if (Equation->objectName().isEmpty())
            Equation->setObjectName(QStringLiteral("Equation"));
        Equation->setWindowModality(Qt::WindowModal);
        Equation->resize(984, 711);
        verticalLayout_2 = new QVBoxLayout(Equation);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        One2 = new QRadioButton(Equation);
        One2->setObjectName(QStringLiteral("One2"));
        QFont font;
        font.setPointSize(18);
        One2->setFont(font);
        One2->setChecked(true);

        horizontalLayout->addWidget(One2);

        One3 = new QRadioButton(Equation);
        One3->setObjectName(QStringLiteral("One3"));
        One3->setFont(font);

        horizontalLayout->addWidget(One3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Two = new QRadioButton(Equation);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setFont(font);

        horizontalLayout_2->addWidget(Two);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget = new QStackedWidget(Equation);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        textEdit_a = new QLineEdit(page);
        textEdit_a->setObjectName(QStringLiteral("textEdit_a"));
        textEdit_a->setMinimumSize(QSize(0, 75));
        QFont font1;
        font1.setPointSize(25);
        textEdit_a->setFont(font1);

        horizontalLayout_14->addWidget(textEdit_a);

        label_16 = new QLabel(page);
        label_16->setObjectName(QStringLiteral("label_16"));
        QFont font2;
        font2.setPointSize(30);
        label_16->setFont(font2);

        horizontalLayout_14->addWidget(label_16);

        textEdit_b = new QLineEdit(page);
        textEdit_b->setObjectName(QStringLiteral("textEdit_b"));
        textEdit_b->setMinimumSize(QSize(0, 75));
        textEdit_b->setFont(font1);

        horizontalLayout_14->addWidget(textEdit_b);

        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        horizontalLayout_14->addWidget(label_17);

        textEdit_c = new QLineEdit(page);
        textEdit_c->setObjectName(QStringLiteral("textEdit_c"));
        textEdit_c->setMinimumSize(QSize(0, 75));
        textEdit_c->setFont(font1);

        horizontalLayout_14->addWidget(textEdit_c);

        label_18 = new QLabel(page);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);

        horizontalLayout_14->addWidget(label_18);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        horizontalLayout_14->setStretch(0, 4);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 4);
        horizontalLayout_14->setStretch(3, 1);
        horizontalLayout_14->setStretch(4, 4);
        horizontalLayout_14->setStretch(5, 1);
        horizontalLayout_14->setStretch(6, 4);

        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setFont(font1);

        horizontalLayout_15->addWidget(pushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_7);

        horizontalLayout_15->setStretch(0, 5);
        horizontalLayout_15->setStretch(1, 2);
        horizontalLayout_15->setStretch(2, 9);

        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        textEdit_out = new QTextEdit(page);
        textEdit_out->setObjectName(QStringLiteral("textEdit_out"));
        textEdit_out->setEnabled(false);
        QFont font3;
        font3.setPointSize(20);
        textEdit_out->setFont(font3);
        textEdit_out->setFrameShape(QFrame::VLine);

        horizontalLayout_16->addWidget(textEdit_out);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);

        horizontalLayout_16->setStretch(0, 10);
        horizontalLayout_16->setStretch(1, 3);

        verticalLayout_6->addLayout(horizontalLayout_16);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_6->setStretch(0, 2);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(3, 9);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        textEditaa = new QLineEdit(page_3);
        textEditaa->setObjectName(QStringLiteral("textEditaa"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEditaa->sizePolicy().hasHeightForWidth());
        textEditaa->setSizePolicy(sizePolicy);
        textEditaa->setMaximumSize(QSize(16777215, 75));
        textEditaa->setFont(font1);
        textEditaa->setCursorMoveStyle(Qt::VisualMoveStyle);

        horizontalLayout_4->addWidget(textEditaa);

        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        textEdit_a_2 = new QLineEdit(page_3);
        textEdit_a_2->setObjectName(QStringLiteral("textEdit_a_2"));
        sizePolicy.setHeightForWidth(textEdit_a_2->sizePolicy().hasHeightForWidth());
        textEdit_a_2->setSizePolicy(sizePolicy);
        textEdit_a_2->setMaximumSize(QSize(16777215, 75));
        textEdit_a_2->setFont(font1);

        horizontalLayout_4->addWidget(textEdit_a_2);

        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        textEdit_b_2 = new QLineEdit(page_3);
        textEdit_b_2->setObjectName(QStringLiteral("textEdit_b_2"));
        sizePolicy.setHeightForWidth(textEdit_b_2->sizePolicy().hasHeightForWidth());
        textEdit_b_2->setSizePolicy(sizePolicy);
        textEdit_b_2->setMaximumSize(QSize(16777215, 75));
        textEdit_b_2->setFont(font1);

        horizontalLayout_4->addWidget(textEdit_b_2);

        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        textEdit_c_2 = new QLineEdit(page_3);
        textEdit_c_2->setObjectName(QStringLiteral("textEdit_c_2"));
        sizePolicy.setHeightForWidth(textEdit_c_2->sizePolicy().hasHeightForWidth());
        textEdit_c_2->setSizePolicy(sizePolicy);
        textEdit_c_2->setMaximumSize(QSize(16777215, 75));
        textEdit_c_2->setFont(font1);

        horizontalLayout_4->addWidget(textEdit_c_2);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        textEdit_x1_a = new QLabel(page_3);
        textEdit_x1_a->setObjectName(QStringLiteral("textEdit_x1_a"));
        textEdit_x1_a->setFont(font1);

        horizontalLayout_5->addWidget(textEdit_x1_a);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        textEdit_x1_b = new QLabel(page_3);
        textEdit_x1_b->setObjectName(QStringLiteral("textEdit_x1_b"));
        textEdit_x1_b->setFont(font1);

        horizontalLayout_5->addWidget(textEdit_x1_b);

        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 2);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout_6->addWidget(label_9);

        textEdit_x2_a = new QLabel(page_3);
        textEdit_x2_a->setObjectName(QStringLiteral("textEdit_x2_a"));
        textEdit_x2_a->setFont(font1);

        horizontalLayout_6->addWidget(textEdit_x2_a);

        add1 = new QLabel(page_3);
        add1->setObjectName(QStringLiteral("add1"));
        add1->setFont(font1);

        horizontalLayout_6->addWidget(add1);

        textEdit_x2_b = new QLabel(page_3);
        textEdit_x2_b->setObjectName(QStringLiteral("textEdit_x2_b"));
        textEdit_x2_b->setFont(font1);

        horizontalLayout_6->addWidget(textEdit_x2_b);

        i1 = new QLabel(page_3);
        i1->setObjectName(QStringLiteral("i1"));
        i1->setFont(font1);

        horizontalLayout_6->addWidget(i1);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 2);
        horizontalLayout_6->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_7->addWidget(label_10);

        textEdit_x3_a = new QLabel(page_3);
        textEdit_x3_a->setObjectName(QStringLiteral("textEdit_x3_a"));
        textEdit_x3_a->setFont(font1);

        horizontalLayout_7->addWidget(textEdit_x3_a);

        add2 = new QLabel(page_3);
        add2->setObjectName(QStringLiteral("add2"));
        add2->setFont(font1);

        horizontalLayout_7->addWidget(add2);

        textEdit_x3_b = new QLabel(page_3);
        textEdit_x3_b->setObjectName(QStringLiteral("textEdit_x3_b"));
        textEdit_x3_b->setFont(font1);

        horizontalLayout_7->addWidget(textEdit_x3_b);

        i2 = new QLabel(page_3);
        i2->setObjectName(QStringLiteral("i2"));
        i2->setFont(font1);

        horizontalLayout_7->addWidget(i2);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 2);
        horizontalLayout_7->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);

        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(16777215, 75));
        pushButton_2->setFont(font3);

        horizontalLayout_8->addWidget(pushButton_2);

        textEdit_besides = new QTextEdit(page_3);
        textEdit_besides->setObjectName(QStringLiteral("textEdit_besides"));
        textEdit_besides->setEnabled(false);
        textEdit_besides->setFont(font1);
        textEdit_besides->setFrameShape(QFrame::HLine);

        horizontalLayout_8->addWidget(textEdit_besides);

        horizontalLayout_8->setStretch(0, 4);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 7);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_5 = new QVBoxLayout(page_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Twoa = new QLineEdit(page_4);
        Twoa->setObjectName(QStringLiteral("Twoa"));
        Twoa->setMinimumSize(QSize(0, 75));
        Twoa->setFont(font1);

        horizontalLayout_9->addWidget(Twoa);

        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_9->addWidget(label_8);

        Twob = new QLineEdit(page_4);
        Twob->setObjectName(QStringLiteral("Twob"));
        Twob->setMinimumSize(QSize(0, 75));
        Twob->setFont(font1);

        horizontalLayout_9->addWidget(Twob);

        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_9->addWidget(label_11);

        Twoe = new QLineEdit(page_4);
        Twoe->setObjectName(QStringLiteral("Twoe"));
        Twoe->setMinimumSize(QSize(0, 75));
        Twoe->setFont(font1);

        horizontalLayout_9->addWidget(Twoe);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        horizontalLayout_9->setStretch(0, 5);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 5);
        horizontalLayout_9->setStretch(3, 1);
        horizontalLayout_9->setStretch(4, 5);
        horizontalLayout_9->setStretch(5, 4);

        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Twoc = new QLineEdit(page_4);
        Twoc->setObjectName(QStringLiteral("Twoc"));
        Twoc->setMinimumSize(QSize(0, 75));
        Twoc->setFont(font1);

        horizontalLayout_10->addWidget(Twoc);

        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_10->addWidget(label_12);

        Twod = new QLineEdit(page_4);
        Twod->setObjectName(QStringLiteral("Twod"));
        Twod->setMinimumSize(QSize(0, 75));
        Twod->setFont(font1);

        horizontalLayout_10->addWidget(Twod);

        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        horizontalLayout_10->addWidget(label_13);

        Twof = new QLineEdit(page_4);
        Twof->setObjectName(QStringLiteral("Twof"));
        Twof->setMinimumSize(QSize(0, 75));
        Twof->setFont(font1);

        horizontalLayout_10->addWidget(Twof);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        horizontalLayout_10->setStretch(0, 5);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 5);
        horizontalLayout_10->setStretch(3, 1);
        horizontalLayout_10->setStretch(4, 5);
        horizontalLayout_10->setStretch(5, 4);

        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 60));
        pushButton_3->setMaximumSize(QSize(80, 16777215));
        pushButton_3->setFont(font1);

        horizontalLayout_13->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        horizontalLayout_13->setStretch(0, 10);
        horizontalLayout_13->setStretch(1, 2);
        horizontalLayout_13->setStretch(2, 15);

        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_14 = new QLabel(page_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        horizontalLayout_11->addWidget(label_14);

        Two_x_out = new QLabel(page_4);
        Two_x_out->setObjectName(QStringLiteral("Two_x_out"));
        Two_x_out->setFont(font1);

        horizontalLayout_11->addWidget(Two_x_out);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 40);

        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_15 = new QLabel(page_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        horizontalLayout_12->addWidget(label_15);

        Two_y_out = new QLabel(page_4);
        Two_y_out->setObjectName(QStringLiteral("Two_y_out"));
        Two_y_out->setFont(font1);

        horizontalLayout_12->addWidget(Two_y_out);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 40);

        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 3);
        verticalLayout_5->setStretch(2, 2);
        verticalLayout_5->setStretch(3, 3);
        verticalLayout_5->setStretch(4, 3);
        verticalLayout_5->setStretch(5, 3);
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        retranslateUi(Equation);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Equation);
    } // setupUi

    void retranslateUi(QWidget *Equation)
    {
        Equation->setWindowTitle(QApplication::translate("Equation", "Form", Q_NULLPTR));
        One2->setText(QApplication::translate("Equation", "ax\302\262+bx+c=0", Q_NULLPTR));
        One3->setText(QApplication::translate("Equation", "ax\302\263+bx\302\262+cx+d=0", Q_NULLPTR));
        Two->setText(QApplication::translate("Equation", "x,y\346\226\271\347\250\213\347\273\204", Q_NULLPTR));
        label_16->setText(QApplication::translate("Equation", "x\302\262+", Q_NULLPTR));
        label_17->setText(QApplication::translate("Equation", "x+", Q_NULLPTR));
        label_18->setText(QApplication::translate("Equation", "=0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        textEditaa->setText(QString());
        label->setText(QApplication::translate("Equation", "x\302\263+", Q_NULLPTR));
        label_2->setText(QApplication::translate("Equation", "x\302\262+", Q_NULLPTR));
        label_3->setText(QApplication::translate("Equation", "x+", Q_NULLPTR));
        label_4->setText(QApplication::translate("Equation", "=0", Q_NULLPTR));
        label_5->setText(QApplication::translate("Equation", "x1\357\274\232", Q_NULLPTR));
        textEdit_x1_a->setText(QString());
        label_6->setText(QApplication::translate("Equation", "\357\274\213", Q_NULLPTR));
        textEdit_x1_b->setText(QString());
        label_7->setText(QApplication::translate("Equation", "i", Q_NULLPTR));
        label_9->setText(QApplication::translate("Equation", "x2\357\274\232", Q_NULLPTR));
        textEdit_x2_a->setText(QString());
        add1->setText(QApplication::translate("Equation", "\357\274\213", Q_NULLPTR));
        textEdit_x2_b->setText(QString());
        i1->setText(QApplication::translate("Equation", "i", Q_NULLPTR));
        label_10->setText(QApplication::translate("Equation", "x3\357\274\232", Q_NULLPTR));
        textEdit_x3_a->setText(QString());
        add2->setText(QApplication::translate("Equation", "\357\274\213", Q_NULLPTR));
        textEdit_x3_b->setText(QString());
        i2->setText(QApplication::translate("Equation", "i", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        textEdit_besides->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("Equation", "x+", Q_NULLPTR));
        label_11->setText(QApplication::translate("Equation", "y=", Q_NULLPTR));
        label_12->setText(QApplication::translate("Equation", "x+", Q_NULLPTR));
        label_13->setText(QApplication::translate("Equation", "y=", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        label_14->setText(QApplication::translate("Equation", "x=", Q_NULLPTR));
        Two_x_out->setText(QString());
        label_15->setText(QApplication::translate("Equation", "y=", Q_NULLPTR));
        Two_y_out->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Equation: public Ui_Equation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUATION_H
