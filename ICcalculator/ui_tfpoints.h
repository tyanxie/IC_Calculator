/********************************************************************************
** Form generated from reading UI file 'tfpoints.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFPOINTS_H
#define UI_TFPOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QGroupBox *groupBox;
    QLineEdit *input1;
    QLineEdit *input2;
    QLineEdit *input3;
    QLineEdit *input4;
    QComboBox *_operator1;
    QComboBox *_operator2;
    QComboBox *_operator3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *number1;
    QLabel *number2;
    QLabel *number3;
    QLabel *number4;
    QGroupBox *groupBox_3;
    QLabel *output_result;
    QLabel *output_answer;
    QPushButton *change;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(1200, 820);
        groupBox = new QGroupBox(Game);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 250, 941, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(14);
        groupBox->setFont(font);
        input1 = new QLineEdit(groupBox);
        input1->setObjectName(QStringLiteral("input1"));
        input1->setGeometry(QRect(14, 35, 142, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(28);
        input1->setFont(font1);
        input1->setAlignment(Qt::AlignCenter);
        input2 = new QLineEdit(groupBox);
        input2->setObjectName(QStringLiteral("input2"));
        input2->setGeometry(QRect(270, 30, 142, 101));
        input2->setFont(font1);
        input2->setAlignment(Qt::AlignCenter);
        input3 = new QLineEdit(groupBox);
        input3->setObjectName(QStringLiteral("input3"));
        input3->setGeometry(QRect(520, 30, 142, 101));
        input3->setFont(font1);
        input3->setAlignment(Qt::AlignCenter);
        input4 = new QLineEdit(groupBox);
        input4->setObjectName(QStringLiteral("input4"));
        input4->setGeometry(QRect(780, 30, 142, 101));
        input4->setFont(font1);
        input4->setAlignment(Qt::AlignCenter);
        _operator1 = new QComboBox(groupBox);
        _operator1->setObjectName(QStringLiteral("_operator1"));
        _operator1->setGeometry(QRect(170, 40, 89, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(20);
        _operator1->setFont(font2);
        _operator1->setInsertPolicy(QComboBox::NoInsert);
        _operator1->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        _operator2 = new QComboBox(groupBox);
        _operator2->setObjectName(QStringLiteral("_operator2"));
        _operator2->setGeometry(QRect(420, 40, 89, 81));
        _operator2->setFont(font2);
        _operator3 = new QComboBox(groupBox);
        _operator3->setObjectName(QStringLiteral("_operator3"));
        _operator3->setGeometry(QRect(670, 40, 89, 81));
        _operator3->setFont(font2);
        groupBox_2 = new QGroupBox(Game);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 80, 691, 141));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(14);
        groupBox_2->setFont(font3);
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        number1 = new QLabel(groupBox_2);
        number1->setObjectName(QStringLiteral("number1"));
        QFont font4;
        font4.setFamily(QStringLiteral("Consolas"));
        font4.setPointSize(18);
        number1->setFont(font4);
        number1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number1);

        number2 = new QLabel(groupBox_2);
        number2->setObjectName(QStringLiteral("number2"));
        number2->setFont(font4);
        number2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number2);

        number3 = new QLabel(groupBox_2);
        number3->setObjectName(QStringLiteral("number3"));
        number3->setFont(font4);
        number3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number3);

        number4 = new QLabel(groupBox_2);
        number4->setObjectName(QStringLiteral("number4"));
        number4->setFont(font4);
        number4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number4);

        groupBox_3 = new QGroupBox(Game);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 450, 751, 161));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(14);
        groupBox_3->setFont(font5);
        output_result = new QLabel(groupBox_3);
        output_result->setObjectName(QStringLiteral("output_result"));
        output_result->setGeometry(QRect(14, 54, 401, 71));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font6.setPointSize(20);
        output_result->setFont(font6);
        output_answer = new QLabel(groupBox_3);
        output_answer->setObjectName(QStringLiteral("output_answer"));
        output_answer->setGeometry(QRect(460, 50, 261, 71));
        output_answer->setFont(font1);
        change = new QPushButton(Game);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(880, 530, 181, 81));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font7.setPointSize(16);
        change->setFont(font7);
        label = new QLabel(Game);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 610, 491, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font8.setPointSize(18);
        label->setFont(font8);
        label_2 = new QLabel(Game);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 380, 521, 41));
        label_2->setFont(font8);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Game", "\350\276\223\345\205\245\346\241\206\357\274\214\350\276\223\345\205\245\347\232\204\347\256\227\345\274\217\344\270\215\346\214\211\346\225\260\345\255\246\351\200\273\350\276\221\351\241\272\345\272\217\350\256\241\347\256\227\357\274\214\350\200\214\346\230\257\346\214\211\347\205\247\344\273\216\345\267\246\345\210\260\345\217\263\347\232\204\351\241\272\345\272\217\350\256\241\347\256\227", Q_NULLPTR));
        _operator1->clear();
        _operator1->insertItems(0, QStringList()
         << QApplication::translate("Game", "+", Q_NULLPTR)
         << QApplication::translate("Game", "-", Q_NULLPTR)
         << QApplication::translate("Game", "*", Q_NULLPTR)
         << QApplication::translate("Game", "/", Q_NULLPTR)
        );
        _operator2->clear();
        _operator2->insertItems(0, QStringList()
         << QApplication::translate("Game", "+", Q_NULLPTR)
         << QApplication::translate("Game", "-", Q_NULLPTR)
         << QApplication::translate("Game", "*", Q_NULLPTR)
         << QApplication::translate("Game", "/", Q_NULLPTR)
        );
        _operator3->clear();
        _operator3->insertItems(0, QStringList()
         << QApplication::translate("Game", "+", Q_NULLPTR)
         << QApplication::translate("Game", "-", Q_NULLPTR)
         << QApplication::translate("Game", "*", Q_NULLPTR)
         << QApplication::translate("Game", "/", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("Game", "\344\272\214\345\215\201\345\233\233\347\202\271\347\232\204\351\242\230\347\233\256", Q_NULLPTR));
        number1->setText(QString());
        number2->setText(QString());
        number3->setText(QString());
        number4->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Game", "\347\255\224\346\241\210\350\276\223\345\207\272", Q_NULLPTR));
        output_result->setText(QString());
        output_answer->setText(QString());
        change->setText(QApplication::translate("Game", "\346\235\245\344\270\200\345\217\221", Q_NULLPTR));
        label->setText(QApplication::translate("Game", "\350\277\231\346\230\257\346\270\270\346\210\217\345\274\200\345\247\213\346\214\211\351\222\256\345\222\214\346\215\242\351\242\230\347\233\256\347\232\204\346\214\211\351\222\256\342\206\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Game", "\346\217\220\344\272\244\347\255\224\346\241\210\350\257\267\345\234\250\350\277\231\344\270\252\350\276\223\345\205\245\346\241\206\346\214\211\344\270\213\345\233\236\350\275\246\351\224\256\342\206\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFPOINTS_H
