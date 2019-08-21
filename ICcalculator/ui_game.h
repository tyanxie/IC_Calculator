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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *start;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer;
    QPushButton *return_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *left_operand;
    QLabel *_operator;
    QLabel *right_operand;
    QLabel *equal;
    QLineEdit *answer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *result;
    QLabel *realanswer;
    QSpacerItem *horizontalSpacer_2;
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
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(1200, 820);
        gridLayout = new QGridLayout(Game);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Game);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 149, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        radioButton = new QRadioButton(page);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);
        radioButton->setChecked(true);

        horizontalLayout_8->addWidget(radioButton);

        radioButton_2 = new QRadioButton(page);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);

        horizontalLayout_8->addWidget(radioButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 126, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        start = new QPushButton(page);
        start->setObjectName(QStringLiteral("start"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy);
        start->setMaximumSize(QSize(16777215, 75));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(24);
        start->setFont(font1);

        horizontalLayout_6->addWidget(start);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 149, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalSpacer = new QSpacerItem(17, 153, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer);

        return_2 = new QPushButton(page_2);
        return_2->setObjectName(QStringLiteral("return_2"));
        return_2->setMaximumSize(QSize(16777215, 75));
        return_2->setFont(font);

        horizontalLayout_9->addWidget(return_2);

        horizontalLayout_9->setStretch(0, 10);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_9);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        left_operand = new QLabel(groupBox);
        left_operand->setObjectName(QStringLiteral("left_operand"));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(20);
        left_operand->setFont(font2);
        left_operand->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(left_operand);

        _operator = new QLabel(groupBox);
        _operator->setObjectName(QStringLiteral("_operator"));
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(24);
        _operator->setFont(font3);
        _operator->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(_operator);

        right_operand = new QLabel(groupBox);
        right_operand->setObjectName(QStringLiteral("right_operand"));
        right_operand->setFont(font2);
        right_operand->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(right_operand);

        equal = new QLabel(groupBox);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setFont(font3);
        equal->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(equal);

        answer = new QLineEdit(groupBox);
        answer->setObjectName(QStringLiteral("answer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(answer->sizePolicy().hasHeightForWidth());
        answer->setSizePolicy(sizePolicy1);
        answer->setMinimumSize(QSize(0, 0));
        answer->setMaximumSize(QSize(16777215, 75));
        answer->setFont(font2);
        answer->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(answer);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        result = new QLabel(page_2);
        result->setObjectName(QStringLiteral("result"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font4.setPointSize(24);
        font4.setUnderline(false);
        result->setFont(font4);
        result->setAlignment(Qt::AlignCenter);
        result->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_4->addWidget(result);

        realanswer = new QLabel(page_2);
        realanswer->setObjectName(QStringLiteral("realanswer"));
        realanswer->setFont(font3);
        realanswer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        realanswer->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_4->addWidget(realanswer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 2);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        correct = new QLabel(page_2);
        correct->setObjectName(QStringLiteral("correct"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(24);
        correct->setFont(font5);

        verticalLayout_2->addWidget(correct);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minute = new QLabel(page_2);
        minute->setObjectName(QStringLiteral("minute"));
        minute->setFont(font5);

        horizontalLayout->addWidget(minute);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font5);

        horizontalLayout->addWidget(label_3);

        second = new QLabel(page_2);
        second->setObjectName(QStringLiteral("second"));
        second->setFont(font5);

        horizontalLayout->addWidget(second);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font5);

        horizontalLayout->addWidget(label_2);

        msecond = new QLabel(page_2);
        msecond->setObjectName(QStringLiteral("msecond"));
        msecond->setFont(font5);

        horizontalLayout->addWidget(msecond);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minute_cal = new QLabel(page_2);
        minute_cal->setObjectName(QStringLiteral("minute_cal"));
        minute_cal->setFont(font5);

        horizontalLayout_2->addWidget(minute_cal);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font5);

        horizontalLayout_2->addWidget(label_8);

        second_cal = new QLabel(page_2);
        second_cal->setObjectName(QStringLiteral("second_cal"));
        second_cal->setFont(font5);

        horizontalLayout_2->addWidget(second_cal);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font5);

        horizontalLayout_2->addWidget(label_9);

        msecond_cal = new QLabel(page_2);
        msecond_cal->setObjectName(QStringLiteral("msecond_cal"));
        msecond_cal->setFont(font5);

        horizontalLayout_2->addWidget(msecond_cal);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 149, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);
        verticalLayout_4->setStretch(3, 1);
        verticalLayout_4->setStretch(4, 1);
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Game);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Game", "\351\200\211\346\213\251\346\203\263\347\216\251\347\232\204\346\270\270\346\210\217\345\271\266\345\215\225\345\207\273start", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Game", "\347\256\200\345\215\225\347\256\227\346\234\257", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Game", "24\347\202\271", Q_NULLPTR));
        start->setText(QApplication::translate("Game", "Start", Q_NULLPTR));
        return_2->setText(QApplication::translate("Game", "\350\277\224\345\233\236", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Game", "\345\217\243\347\256\227\345\260\217\346\270\270\346\210\217\357\274\214\350\276\223\345\205\245\346\241\206\345\233\236\350\275\246\346\217\220\344\272\244\347\255\224\346\241\210\357\274\214\346\214\211\351\222\256\346\214\211\344\270\213\346\215\242\351\242\230", Q_NULLPTR));
        left_operand->setText(QString());
        _operator->setText(QString());
        right_operand->setText(QString());
        equal->setText(QApplication::translate("Game", "\357\274\235", Q_NULLPTR));
        result->setText(QString());
        realanswer->setText(QString());
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
