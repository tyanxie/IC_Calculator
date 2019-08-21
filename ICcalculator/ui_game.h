/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *start;
    QWidget *page_2;
    QLabel *label;
    QPushButton *startbutton;
    QLabel *realanswer;
    QGroupBox *groupBox;
    QLabel *left_operand;
    QLabel *_operator;
    QLabel *right_operand;
    QLabel *equal;
    QLineEdit *answer;
    QLabel *result;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *correct;
    QHBoxLayout *horizontalLayout;
    QLabel *minute;
    QLabel *label_3;
    QLabel *second;
    QLabel *label_2;
    QLabel *msecond;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minute_cal;
    QLabel *label_8;
    QLabel *second_cal;
    QLabel *label_9;
    QLabel *msecond_cal;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(1200, 820);
        gridLayout = new QGridLayout(Game);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Game);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        start = new QPushButton(page);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(200, 230, 791, 221));
        QFont font;
        font.setPointSize(100);
        start->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(531, 490, 450, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        startbutton = new QPushButton(page_2);
        startbutton->setObjectName(QStringLiteral("startbutton"));
        startbutton->setGeometry(QRect(891, 390, 200, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(20);
        startbutton->setFont(font2);
        realanswer = new QLabel(page_2);
        realanswer->setObjectName(QStringLiteral("realanswer"));
        realanswer->setGeometry(QRect(561, 380, 241, 100));
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(18);
        realanswer->setFont(font3);
        realanswer->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(91, 150, 1001, 150));
        left_operand = new QLabel(groupBox);
        left_operand->setObjectName(QStringLiteral("left_operand"));
        left_operand->setGeometry(QRect(40, 40, 150, 80));
        QFont font4;
        font4.setFamily(QStringLiteral("Consolas"));
        font4.setPointSize(20);
        left_operand->setFont(font4);
        left_operand->setAlignment(Qt::AlignCenter);
        _operator = new QLabel(groupBox);
        _operator->setObjectName(QStringLiteral("_operator"));
        _operator->setGeometry(QRect(240, 40, 150, 80));
        _operator->setFont(font4);
        _operator->setAlignment(Qt::AlignCenter);
        right_operand = new QLabel(groupBox);
        right_operand->setObjectName(QStringLiteral("right_operand"));
        right_operand->setGeometry(QRect(450, 40, 150, 80));
        right_operand->setFont(font4);
        right_operand->setAlignment(Qt::AlignCenter);
        equal = new QLabel(groupBox);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(640, 40, 150, 80));
        equal->setFont(font4);
        equal->setAlignment(Qt::AlignCenter);
        answer = new QLineEdit(groupBox);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(830, 40, 150, 80));
        answer->setFont(font4);
        answer->setAlignment(Qt::AlignCenter);
        result = new QLabel(page_2);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(90, 380, 451, 100));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font5.setPointSize(24);
        font5.setUnderline(true);
        result->setFont(font5);
        result->setAlignment(Qt::AlignCenter);
        widget = new QWidget(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 500, 334, 119));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font6.setPointSize(18);
        label_5->setFont(font6);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font6);

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font6);

        verticalLayout->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        correct = new QLabel(widget);
        correct->setObjectName(QStringLiteral("correct"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(24);
        correct->setFont(font7);

        verticalLayout_2->addWidget(correct);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minute = new QLabel(widget);
        minute->setObjectName(QStringLiteral("minute"));
        minute->setFont(font7);

        horizontalLayout->addWidget(minute);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font7);

        horizontalLayout->addWidget(label_3);

        second = new QLabel(widget);
        second->setObjectName(QStringLiteral("second"));
        second->setFont(font7);

        horizontalLayout->addWidget(second);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font7);

        horizontalLayout->addWidget(label_2);

        msecond = new QLabel(widget);
        msecond->setObjectName(QStringLiteral("msecond"));
        msecond->setFont(font7);

        horizontalLayout->addWidget(msecond);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minute_cal = new QLabel(widget);
        minute_cal->setObjectName(QStringLiteral("minute_cal"));
        minute_cal->setFont(font7);

        horizontalLayout_2->addWidget(minute_cal);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font7);

        horizontalLayout_2->addWidget(label_8);

        second_cal = new QLabel(widget);
        second_cal->setObjectName(QStringLiteral("second_cal"));
        second_cal->setFont(font7);

        horizontalLayout_2->addWidget(second_cal);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font7);

        horizontalLayout_2->addWidget(label_9);

        msecond_cal = new QLabel(widget);
        msecond_cal->setObjectName(QStringLiteral("msecond_cal"));
        msecond_cal->setFont(font7);

        horizontalLayout_2->addWidget(msecond_cal);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Game);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Form", Q_NULLPTR));
        start->setText(QApplication::translate("Game", "Start", Q_NULLPTR));
        label->setText(QApplication::translate("Game", "\350\277\231\346\230\257\346\215\242\351\242\230\351\224\256\357\274\214\344\270\215\346\230\257\346\217\220\344\272\244\347\255\224\346\241\210\347\232\204\346\214\211\345\227\267\342\206\227", Q_NULLPTR));
        startbutton->setText(QApplication::translate("Game", "\346\235\245\344\270\200\345\217\221", Q_NULLPTR));
        realanswer->setText(QString());
        groupBox->setTitle(QApplication::translate("Game", "\345\217\243\347\256\227\345\260\217\346\270\270\346\210\217\357\274\214\350\276\223\345\205\245\346\241\206\345\233\236\350\275\246\346\217\220\344\272\244\347\255\224\346\241\210\357\274\214\346\214\211\351\222\256\346\214\211\344\270\213\346\215\242\351\242\230", Q_NULLPTR));
        left_operand->setText(QString());
        _operator->setText(QString());
        right_operand->setText(QString());
        equal->setText(QApplication::translate("Game", "=", Q_NULLPTR));
        result->setText(QString());
        label_5->setText(QApplication::translate("Game", "\350\277\236\347\273\255\346\255\243\347\241\256\344\270\252\346\225\260\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Game", "\350\277\236\347\273\255\346\255\243\347\241\256\346\227\266\351\225\277\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("Game", "\346\234\200\347\237\255\350\256\241\347\256\227\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        correct->setText(QApplication::translate("Game", "0", Q_NULLPTR));
        minute->setText(QApplication::translate("Game", "00", Q_NULLPTR));
        label_3->setText(QApplication::translate("Game", ":", Q_NULLPTR));
        second->setText(QApplication::translate("Game", "00", Q_NULLPTR));
        label_2->setText(QApplication::translate("Game", ":", Q_NULLPTR));
        msecond->setText(QApplication::translate("Game", "00", Q_NULLPTR));
        minute_cal->setText(QApplication::translate("Game", "99", Q_NULLPTR));
        label_8->setText(QApplication::translate("Game", ":", Q_NULLPTR));
        second_cal->setText(QApplication::translate("Game", "99", Q_NULLPTR));
        label_9->setText(QApplication::translate("Game", ":", Q_NULLPTR));
        msecond_cal->setText(QApplication::translate("Game", "99", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
