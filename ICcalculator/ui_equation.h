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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equation
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *textEdit_a;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit_b;
    QPlainTextEdit *plainTextEdit_2;
    QTextEdit *textEdit_c;
    QPlainTextEdit *plainTextEdit_3;
    QTextEdit *textEdit_out;
    QPushButton *pushButton;
    QWidget *page_3;
    QTextEdit *textEditaa;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_a_2;
    QTextEdit *textEdit_c_2;
    QTextEdit *textEdit_b_2;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_x1_a;
    QTextEdit *textEdit_x1_b;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_x2_a;
    QTextEdit *textEdit_x3_a;
    QTextEdit *add1;
    QTextEdit *add2;
    QTextEdit *textEdit_x2_b;
    QTextEdit *textEdit_x3_b;
    QTextEdit *i1;
    QTextEdit *i2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_besides;
    QWidget *page_4;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QTextEdit *Twoa;
    QTextEdit *Twob;
    QTextEdit *Twof;
    QTextEdit *Twod;
    QTextEdit *Twoc;
    QTextEdit *Twoe;
    QTextEdit *textEdit_20;
    QTextEdit *textEdit_21;
    QTextEdit *Two_x_out;
    QTextEdit *Two_y_out;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *One2;
    QRadioButton *One3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Two;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *Equation)
    {
        if (Equation->objectName().isEmpty())
            Equation->setObjectName(QStringLiteral("Equation"));
        Equation->setWindowModality(Qt::WindowModal);
        Equation->resize(984, 711);
        stackedWidget = new QStackedWidget(Equation);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 150, 961, 591));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        textEdit_a = new QTextEdit(page);
        textEdit_a->setObjectName(QStringLiteral("textEdit_a"));
        textEdit_a->setGeometry(QRect(30, 70, 71, 71));
        QFont font;
        font.setPointSize(25);
        textEdit_a->setFont(font);
        plainTextEdit = new QPlainTextEdit(page);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(100, 70, 111, 81));
        QFont font1;
        font1.setPointSize(30);
        plainTextEdit->setFont(font1);
        plainTextEdit->setFrameShape(QFrame::HLine);
        textEdit_b = new QTextEdit(page);
        textEdit_b->setObjectName(QStringLiteral("textEdit_b"));
        textEdit_b->setGeometry(QRect(200, 70, 81, 71));
        textEdit_b->setFont(font);
        plainTextEdit_2 = new QPlainTextEdit(page);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setEnabled(false);
        plainTextEdit_2->setGeometry(QRect(280, 70, 101, 91));
        QFont font2;
        font2.setPointSize(30);
        font2.setKerning(false);
        plainTextEdit_2->setFont(font2);
        plainTextEdit_2->setFrameShape(QFrame::HLine);
        textEdit_c = new QTextEdit(page);
        textEdit_c->setObjectName(QStringLiteral("textEdit_c"));
        textEdit_c->setGeometry(QRect(360, 70, 81, 71));
        textEdit_c->setFont(font);
        plainTextEdit_3 = new QPlainTextEdit(page);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setEnabled(false);
        plainTextEdit_3->setGeometry(QRect(440, 70, 101, 81));
        plainTextEdit_3->setFont(font1);
        plainTextEdit_3->setFrameShape(QFrame::HLine);
        textEdit_out = new QTextEdit(page);
        textEdit_out->setObjectName(QStringLiteral("textEdit_out"));
        textEdit_out->setEnabled(false);
        textEdit_out->setGeometry(QRect(20, 250, 571, 201));
        QFont font3;
        font3.setPointSize(20);
        textEdit_out->setFont(font3);
        textEdit_out->setFrameShape(QFrame::VLine);
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 190, 111, 41));
        QFont font4;
        font4.setPointSize(12);
        pushButton->setFont(font4);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        textEditaa = new QTextEdit(page_3);
        textEditaa->setObjectName(QStringLiteral("textEditaa"));
        textEditaa->setGeometry(QRect(20, 70, 81, 71));
        textEditaa->setFont(font);
        textEdit_2 = new QTextEdit(page_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(100, 70, 101, 91));
        textEdit_2->setFont(font);
        textEdit_2->setFrameShape(QFrame::HLine);
        textEdit_a_2 = new QTextEdit(page_3);
        textEdit_a_2->setObjectName(QStringLiteral("textEdit_a_2"));
        textEdit_a_2->setGeometry(QRect(200, 70, 81, 71));
        textEdit_a_2->setFont(font);
        textEdit_c_2 = new QTextEdit(page_3);
        textEdit_c_2->setObjectName(QStringLiteral("textEdit_c_2"));
        textEdit_c_2->setGeometry(QRect(530, 70, 81, 71));
        textEdit_c_2->setFont(font);
        textEdit_b_2 = new QTextEdit(page_3);
        textEdit_b_2->setObjectName(QStringLiteral("textEdit_b_2"));
        textEdit_b_2->setGeometry(QRect(380, 70, 81, 71));
        textEdit_b_2->setFont(font);
        textEdit_6 = new QTextEdit(page_3);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setEnabled(false);
        textEdit_6->setGeometry(QRect(280, 70, 101, 91));
        textEdit_6->setFont(font);
        textEdit_6->setFrameShape(QFrame::HLine);
        textEdit_7 = new QTextEdit(page_3);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setEnabled(false);
        textEdit_7->setGeometry(QRect(460, 70, 71, 91));
        textEdit_7->setFont(font);
        textEdit_7->setFrameShape(QFrame::HLine);
        textEdit_8 = new QTextEdit(page_3);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setEnabled(false);
        textEdit_8->setGeometry(QRect(610, 70, 101, 91));
        textEdit_8->setFont(font);
        textEdit_8->setFrameShape(QFrame::HLine);
        textEdit_9 = new QTextEdit(page_3);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setEnabled(false);
        textEdit_9->setGeometry(QRect(-10, 210, 141, 101));
        textEdit_9->setFont(font);
        textEdit_9->setLayoutDirection(Qt::RightToLeft);
        textEdit_9->setFrameShape(QFrame::HLine);
        textEdit_10 = new QTextEdit(page_3);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setEnabled(false);
        textEdit_10->setGeometry(QRect(240, 210, 51, 81));
        textEdit_10->setFont(font);
        textEdit_10->setFrameShape(QFrame::HLine);
        textEdit_x1_a = new QTextEdit(page_3);
        textEdit_x1_a->setObjectName(QStringLiteral("textEdit_x1_a"));
        textEdit_x1_a->setEnabled(false);
        textEdit_x1_a->setGeometry(QRect(130, 210, 111, 81));
        QFont font5;
        font5.setPointSize(10);
        textEdit_x1_a->setFont(font5);
        textEdit_x1_a->setFrameShape(QFrame::HLine);
        textEdit_x1_b = new QTextEdit(page_3);
        textEdit_x1_b->setObjectName(QStringLiteral("textEdit_x1_b"));
        textEdit_x1_b->setEnabled(false);
        textEdit_x1_b->setGeometry(QRect(290, 210, 121, 81));
        textEdit_x1_b->setFont(font5);
        textEdit_x1_b->setFrameShape(QFrame::HLine);
        textEdit_13 = new QTextEdit(page_3);
        textEdit_13->setObjectName(QStringLiteral("textEdit_13"));
        textEdit_13->setEnabled(false);
        textEdit_13->setGeometry(QRect(410, 210, 51, 81));
        textEdit_13->setFont(font);
        textEdit_13->setFrameShape(QFrame::HLine);
        textEdit_14 = new QTextEdit(page_3);
        textEdit_14->setObjectName(QStringLiteral("textEdit_14"));
        textEdit_14->setEnabled(false);
        textEdit_14->setGeometry(QRect(-10, 310, 141, 101));
        textEdit_14->setFont(font);
        textEdit_14->setLayoutDirection(Qt::RightToLeft);
        textEdit_14->setFrameShape(QFrame::HLine);
        textEdit_15 = new QTextEdit(page_3);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setEnabled(false);
        textEdit_15->setGeometry(QRect(-10, 410, 141, 101));
        textEdit_15->setFont(font);
        textEdit_15->setLayoutDirection(Qt::RightToLeft);
        textEdit_15->setFrameShape(QFrame::HLine);
        textEdit_x2_a = new QTextEdit(page_3);
        textEdit_x2_a->setObjectName(QStringLiteral("textEdit_x2_a"));
        textEdit_x2_a->setEnabled(false);
        textEdit_x2_a->setGeometry(QRect(130, 310, 111, 81));
        textEdit_x2_a->setFont(font5);
        textEdit_x2_a->setFrameShape(QFrame::HLine);
        textEdit_x3_a = new QTextEdit(page_3);
        textEdit_x3_a->setObjectName(QStringLiteral("textEdit_x3_a"));
        textEdit_x3_a->setEnabled(false);
        textEdit_x3_a->setGeometry(QRect(130, 410, 111, 81));
        textEdit_x3_a->setFont(font5);
        textEdit_x3_a->setFrameShape(QFrame::HLine);
        add1 = new QTextEdit(page_3);
        add1->setObjectName(QStringLiteral("add1"));
        add1->setEnabled(false);
        add1->setGeometry(QRect(240, 310, 51, 81));
        add1->setFont(font);
        add1->setFrameShape(QFrame::HLine);
        add2 = new QTextEdit(page_3);
        add2->setObjectName(QStringLiteral("add2"));
        add2->setEnabled(false);
        add2->setGeometry(QRect(240, 410, 51, 81));
        add2->setFont(font);
        add2->setFrameShape(QFrame::HLine);
        textEdit_x2_b = new QTextEdit(page_3);
        textEdit_x2_b->setObjectName(QStringLiteral("textEdit_x2_b"));
        textEdit_x2_b->setEnabled(false);
        textEdit_x2_b->setGeometry(QRect(290, 310, 121, 81));
        textEdit_x2_b->setFont(font5);
        textEdit_x2_b->setFrameShape(QFrame::HLine);
        textEdit_x3_b = new QTextEdit(page_3);
        textEdit_x3_b->setObjectName(QStringLiteral("textEdit_x3_b"));
        textEdit_x3_b->setEnabled(false);
        textEdit_x3_b->setGeometry(QRect(290, 410, 121, 81));
        textEdit_x3_b->setFont(font5);
        textEdit_x3_b->setFrameShape(QFrame::HLine);
        i1 = new QTextEdit(page_3);
        i1->setObjectName(QStringLiteral("i1"));
        i1->setEnabled(false);
        i1->setGeometry(QRect(410, 310, 51, 81));
        i1->setFont(font);
        i1->setFrameShape(QFrame::HLine);
        i2 = new QTextEdit(page_3);
        i2->setObjectName(QStringLiteral("i2"));
        i2->setEnabled(false);
        i2->setGeometry(QRect(410, 410, 51, 81));
        i2->setFont(font);
        i2->setFrameShape(QFrame::HLine);
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 210, 111, 51));
        pushButton_2->setFont(font5);
        textEdit_besides = new QTextEdit(page_3);
        textEdit_besides->setObjectName(QStringLiteral("textEdit_besides"));
        textEdit_besides->setEnabled(false);
        textEdit_besides->setGeometry(QRect(540, 310, 341, 131));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        textEdit_besides->setFont(font6);
        textEdit_besides->setFrameShape(QFrame::HLine);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        textEdit_11 = new QTextEdit(page_4);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setEnabled(false);
        textEdit_11->setGeometry(QRect(110, 40, 101, 91));
        textEdit_11->setFont(font);
        textEdit_11->setFrameShape(QFrame::HLine);
        textEdit_12 = new QTextEdit(page_4);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setEnabled(false);
        textEdit_12->setGeometry(QRect(290, 40, 71, 91));
        textEdit_12->setFont(font);
        textEdit_12->setFrameShape(QFrame::HLine);
        textEdit_16 = new QTextEdit(page_4);
        textEdit_16->setObjectName(QStringLiteral("textEdit_16"));
        textEdit_16->setEnabled(false);
        textEdit_16->setGeometry(QRect(110, 150, 101, 91));
        textEdit_16->setFont(font);
        textEdit_16->setFrameShape(QFrame::HLine);
        textEdit_17 = new QTextEdit(page_4);
        textEdit_17->setObjectName(QStringLiteral("textEdit_17"));
        textEdit_17->setEnabled(false);
        textEdit_17->setGeometry(QRect(290, 150, 71, 91));
        textEdit_17->setFont(font);
        textEdit_17->setFrameShape(QFrame::HLine);
        Twoa = new QTextEdit(page_4);
        Twoa->setObjectName(QStringLiteral("Twoa"));
        Twoa->setGeometry(QRect(30, 40, 81, 71));
        Twoa->setFont(font);
        Twob = new QTextEdit(page_4);
        Twob->setObjectName(QStringLiteral("Twob"));
        Twob->setGeometry(QRect(210, 40, 81, 71));
        Twob->setFont(font);
        Twof = new QTextEdit(page_4);
        Twof->setObjectName(QStringLiteral("Twof"));
        Twof->setGeometry(QRect(360, 150, 81, 71));
        Twof->setFont(font);
        Twod = new QTextEdit(page_4);
        Twod->setObjectName(QStringLiteral("Twod"));
        Twod->setGeometry(QRect(210, 150, 81, 71));
        Twod->setFont(font);
        Twoc = new QTextEdit(page_4);
        Twoc->setObjectName(QStringLiteral("Twoc"));
        Twoc->setGeometry(QRect(30, 150, 81, 71));
        Twoc->setFont(font);
        Twoe = new QTextEdit(page_4);
        Twoe->setObjectName(QStringLiteral("Twoe"));
        Twoe->setGeometry(QRect(360, 40, 81, 71));
        Twoe->setFont(font);
        textEdit_20 = new QTextEdit(page_4);
        textEdit_20->setObjectName(QStringLiteral("textEdit_20"));
        textEdit_20->setEnabled(false);
        textEdit_20->setGeometry(QRect(0, 360, 91, 91));
        textEdit_20->setFont(font);
        textEdit_20->setFrameShape(QFrame::HLine);
        textEdit_21 = new QTextEdit(page_4);
        textEdit_21->setObjectName(QStringLiteral("textEdit_21"));
        textEdit_21->setEnabled(false);
        textEdit_21->setGeometry(QRect(0, 460, 91, 91));
        textEdit_21->setFont(font);
        textEdit_21->setFrameShape(QFrame::HLine);
        Two_x_out = new QTextEdit(page_4);
        Two_x_out->setObjectName(QStringLiteral("Two_x_out"));
        Two_x_out->setEnabled(false);
        Two_x_out->setGeometry(QRect(90, 360, 601, 91));
        Two_x_out->setFont(font);
        Two_x_out->setFrameShape(QFrame::HLine);
        Two_y_out = new QTextEdit(page_4);
        Two_y_out->setObjectName(QStringLiteral("Two_y_out"));
        Two_y_out->setEnabled(false);
        Two_y_out->setGeometry(QRect(90, 460, 601, 91));
        Two_y_out->setFont(font);
        Two_y_out->setFrameShape(QFrame::HLine);
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 270, 81, 31));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        layoutWidget = new QWidget(Equation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 511, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        One2 = new QRadioButton(layoutWidget);
        One2->setObjectName(QStringLiteral("One2"));
        QFont font7;
        font7.setPointSize(15);
        One2->setFont(font7);

        horizontalLayout->addWidget(One2);

        One3 = new QRadioButton(layoutWidget);
        One3->setObjectName(QStringLiteral("One3"));
        One3->setFont(font7);

        horizontalLayout->addWidget(One3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Two = new QRadioButton(layoutWidget);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setFont(font7);

        horizontalLayout_2->addWidget(Two);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font7);

        horizontalLayout_2->addWidget(radioButton_4);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Equation);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Equation);
    } // setupUi

    void retranslateUi(QWidget *Equation)
    {
        Equation->setWindowTitle(QApplication::translate("Equation", "Form", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("Equation", "x\302\262+", Q_NULLPTR));
        plainTextEdit_2->setPlainText(QApplication::translate("Equation", "x+", Q_NULLPTR));
        plainTextEdit_3->setPlainText(QApplication::translate("Equation", "=0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x</span><span style=\" font-family:'\345\256\213\344\275\223,Tahoma,sans-serif'; font-size:28pt; color:#000000; background-color:transparent; vertical-align:super;\">3</span><span style=\" font-size:28pt;\">+</span></p></body></html>", Q_NULLPTR));
        textEdit_6->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x\302\262+</span></p></body></html>", Q_NULLPTR));
        textEdit_7->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x+</span></p></body></html>", Q_NULLPTR));
        textEdit_8->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">=0</p></body></html>", Q_NULLPTR));
        textEdit_9->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x1\357\274\232</span></p></body></html>", Q_NULLPTR));
        textEdit_10->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">+</span></p></body></html>", Q_NULLPTR));
        textEdit_13->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">i</p></body></html>", Q_NULLPTR));
        textEdit_14->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x2\357\274\232</span></p></body></html>", Q_NULLPTR));
        textEdit_15->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x3\357\274\232</span></p></body></html>", Q_NULLPTR));
        add1->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">+</span></p></body></html>", Q_NULLPTR));
        add2->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">+</span></p></body></html>", Q_NULLPTR));
        i1->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">i</p></body></html>", Q_NULLPTR));
        i2->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">i</p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        textEdit_11->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x+</span></p></body></html>", Q_NULLPTR));
        textEdit_12->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">y=</p></body></html>", Q_NULLPTR));
        textEdit_16->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x+</span></p></body></html>", Q_NULLPTR));
        textEdit_17->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">y=</p></body></html>", Q_NULLPTR));
        textEdit_20->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">x=</span></p></body></html>", Q_NULLPTR));
        textEdit_21->setHtml(QApplication::translate("Equation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">y=</p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Equation", "\347\241\256\350\256\244", Q_NULLPTR));
        One2->setText(QApplication::translate("Equation", "ax\302\262+bx+c=0", Q_NULLPTR));
        One3->setText(QApplication::translate("Equation", "ax\302\263+bx\302\262+cx+d=0", Q_NULLPTR));
        Two->setText(QApplication::translate("Equation", "x,y\346\226\271\347\250\213\347\273\204", Q_NULLPTR));
        radioButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Equation: public Ui_Equation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUATION_H
