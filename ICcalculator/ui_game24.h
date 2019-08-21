/********************************************************************************
** Form generated from reading UI file 'game24.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME24_H
#define UI_GAME24_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game24
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *number1;
    QLabel *number2;
    QLabel *number3;
    QLabel *number4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *input1;
    QComboBox *_operator1;
    QLineEdit *input2;
    QComboBox *_operator2;
    QLineEdit *input3;
    QComboBox *_operator3;
    QLineEdit *input4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *output_result;
    QLabel *output_answer;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Game24)
    {
        if (Game24->objectName().isEmpty())
            Game24->setObjectName(QStringLiteral("Game24"));
        Game24->resize(1200, 820);
        verticalLayout = new QVBoxLayout(Game24);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalSpacer = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_8->addItem(verticalSpacer);

        pushButton = new QPushButton(Game24);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 75));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        pushButton->setFont(font);

        horizontalLayout_8->addWidget(pushButton);

        horizontalLayout_8->setStretch(0, 10);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        groupBox_2 = new QGroupBox(Game24);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        groupBox_2->setFont(font1);
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        number1 = new QLabel(groupBox_2);
        number1->setObjectName(QStringLiteral("number1"));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(18);
        number1->setFont(font2);
        number1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number1);

        number2 = new QLabel(groupBox_2);
        number2->setObjectName(QStringLiteral("number2"));
        number2->setFont(font2);
        number2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number2);

        number3 = new QLabel(groupBox_2);
        number3->setObjectName(QStringLiteral("number3"));
        number3->setFont(font2);
        number3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number3);

        number4 = new QLabel(groupBox_2);
        number4->setObjectName(QStringLiteral("number4"));
        number4->setFont(font2);
        number4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number4);


        horizontalLayout_2->addWidget(groupBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(Game24);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font3.setPointSize(14);
        groupBox->setFont(font3);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        input1 = new QLineEdit(groupBox);
        input1->setObjectName(QStringLiteral("input1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(input1->sizePolicy().hasHeightForWidth());
        input1->setSizePolicy(sizePolicy1);
        input1->setMaximumSize(QSize(16777215, 75));
        QFont font4;
        font4.setFamily(QStringLiteral("Consolas"));
        font4.setPointSize(28);
        input1->setFont(font4);
        input1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(input1);

        _operator1 = new QComboBox(groupBox);
        _operator1->setObjectName(QStringLiteral("_operator1"));
        _operator1->setMinimumSize(QSize(41, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Consolas"));
        font5.setPointSize(20);
        _operator1->setFont(font5);
        _operator1->setInsertPolicy(QComboBox::NoInsert);
        _operator1->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_3->addWidget(_operator1);

        input2 = new QLineEdit(groupBox);
        input2->setObjectName(QStringLiteral("input2"));
        sizePolicy1.setHeightForWidth(input2->sizePolicy().hasHeightForWidth());
        input2->setSizePolicy(sizePolicy1);
        input2->setMaximumSize(QSize(16777215, 75));
        input2->setFont(font4);
        input2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(input2);

        _operator2 = new QComboBox(groupBox);
        _operator2->setObjectName(QStringLiteral("_operator2"));
        _operator2->setFont(font5);

        horizontalLayout_3->addWidget(_operator2);

        input3 = new QLineEdit(groupBox);
        input3->setObjectName(QStringLiteral("input3"));
        sizePolicy1.setHeightForWidth(input3->sizePolicy().hasHeightForWidth());
        input3->setSizePolicy(sizePolicy1);
        input3->setMaximumSize(QSize(16777215, 75));
        input3->setFont(font4);
        input3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(input3);

        _operator3 = new QComboBox(groupBox);
        _operator3->setObjectName(QStringLiteral("_operator3"));
        _operator3->setFont(font5);

        horizontalLayout_3->addWidget(_operator3);

        input4 = new QLineEdit(groupBox);
        input4->setObjectName(QStringLiteral("input4"));
        sizePolicy1.setHeightForWidth(input4->sizePolicy().hasHeightForWidth());
        input4->setSizePolicy(sizePolicy1);
        input4->setMaximumSize(QSize(16777215, 75));
        input4->setFont(font4);
        input4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(input4);

        horizontalLayout_3->setStretch(0, 6);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 6);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(4, 6);
        horizontalLayout_3->setStretch(5, 1);
        horizontalLayout_3->setStretch(6, 6);

        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_2 = new QLabel(Game24);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font6.setPointSize(18);
        label_2->setFont(font6);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        groupBox_3 = new QGroupBox(Game24);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(14);
        groupBox_3->setFont(font7);
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        output_result = new QLabel(groupBox_3);
        output_result->setObjectName(QStringLiteral("output_result"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font8.setPointSize(20);
        output_result->setFont(font8);

        horizontalLayout_6->addWidget(output_result);

        output_answer = new QLabel(groupBox_3);
        output_answer->setObjectName(QStringLiteral("output_answer"));
        output_answer->setFont(font4);

        horizontalLayout_6->addWidget(output_answer);


        horizontalLayout_7->addWidget(groupBox_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 5);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 126, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);

        retranslateUi(Game24);

        QMetaObject::connectSlotsByName(Game24);
    } // setupUi

    void retranslateUi(QWidget *Game24)
    {
        Game24->setWindowTitle(QApplication::translate("Game24", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Game24", "\350\277\224\345\233\236", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Game24", "\344\272\214\345\215\201\345\233\233\347\202\271\347\232\204\351\242\230\347\233\256", Q_NULLPTR));
        number1->setText(QString());
        number2->setText(QString());
        number3->setText(QString());
        number4->setText(QString());
        groupBox->setTitle(QApplication::translate("Game24", "\350\276\223\345\205\245\346\241\206\357\274\214\350\276\223\345\205\245\347\232\204\347\256\227\345\274\217\344\270\215\346\214\211\346\225\260\345\255\246\351\200\273\350\276\221\351\241\272\345\272\217\350\256\241\347\256\227\357\274\214\350\200\214\346\230\257\346\214\211\347\205\247\344\273\216\345\267\246\345\210\260\345\217\263\347\232\204\351\241\272\345\272\217\350\256\241\347\256\227", Q_NULLPTR));
        _operator1->clear();
        _operator1->insertItems(0, QStringList()
         << QApplication::translate("Game24", "+", Q_NULLPTR)
         << QApplication::translate("Game24", "-", Q_NULLPTR)
         << QApplication::translate("Game24", "*", Q_NULLPTR)
         << QApplication::translate("Game24", "/", Q_NULLPTR)
        );
        _operator2->clear();
        _operator2->insertItems(0, QStringList()
         << QApplication::translate("Game24", "+", Q_NULLPTR)
         << QApplication::translate("Game24", "-", Q_NULLPTR)
         << QApplication::translate("Game24", "*", Q_NULLPTR)
         << QApplication::translate("Game24", "/", Q_NULLPTR)
        );
        _operator3->clear();
        _operator3->insertItems(0, QStringList()
         << QApplication::translate("Game24", "+", Q_NULLPTR)
         << QApplication::translate("Game24", "-", Q_NULLPTR)
         << QApplication::translate("Game24", "*", Q_NULLPTR)
         << QApplication::translate("Game24", "/", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Game24", "\346\214\211\344\270\213\345\233\236\350\275\246\351\224\256\346\217\220\344\272\244\347\255\224\346\241\210", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Game24", "\347\255\224\346\241\210\350\276\223\345\207\272", Q_NULLPTR));
        output_result->setText(QString());
        output_answer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game24: public Ui_Game24 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME24_H
