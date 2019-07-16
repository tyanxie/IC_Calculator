/********************************************************************************
** Form generated from reading UI file 'complex.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLEX_H
#define UI_COMPLEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Complex
{
public:
    QLabel *label;
    QComboBox *input_a_combo;
    QComboBox *input_b_combo;
    QLabel *label_2;
    QComboBox *operator_combo;
    QLineEdit *input_a1;
    QLabel *input_a_ra;
    QLineEdit *input_a2;
    QLabel *input_a_i;
    QLineEdit *input_b2;
    QLabel *input_b_ra;
    QLineEdit *input_b1;
    QLabel *input_b_i;
    QPushButton *equal_push;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *output_a1;
    QLabel *output_a2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *output_b1;
    QLabel *output_b2;

    void setupUi(QWidget *Complex)
    {
        if (Complex->objectName().isEmpty())
            Complex->setObjectName(QStringLiteral("Complex"));
        Complex->resize(1200, 820);
        label = new QLabel(Complex);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 129, 161, 43));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        label->setFont(font);
        input_a_combo = new QComboBox(Complex);
        input_a_combo->setObjectName(QStringLiteral("input_a_combo"));
        input_a_combo->setGeometry(QRect(170, 120, 171, 63));
        input_a_combo->setFont(font);
        input_b_combo = new QComboBox(Complex);
        input_b_combo->setObjectName(QStringLiteral("input_b_combo"));
        input_b_combo->setGeometry(QRect(890, 120, 171, 63));
        input_b_combo->setFont(font);
        label_2 = new QLabel(Complex);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 129, 161, 43));
        label_2->setFont(font);
        operator_combo = new QComboBox(Complex);
        operator_combo->setObjectName(QStringLiteral("operator_combo"));
        operator_combo->setGeometry(QRect(512, 215, 71, 65));
        operator_combo->setFont(font);
        input_a1 = new QLineEdit(Complex);
        input_a1->setObjectName(QStringLiteral("input_a1"));
        input_a1->setGeometry(QRect(10, 215, 161, 65));
        input_a1->setFont(font);
        input_a_ra = new QLabel(Complex);
        input_a_ra->setObjectName(QStringLiteral("input_a_ra"));
        input_a_ra->setGeometry(QRect(180, 215, 41, 65));
        input_a_ra->setFont(font);
        input_a2 = new QLineEdit(Complex);
        input_a2->setObjectName(QStringLiteral("input_a2"));
        input_a2->setGeometry(QRect(231, 215, 161, 65));
        input_a2->setFont(font);
        input_a_i = new QLabel(Complex);
        input_a_i->setObjectName(QStringLiteral("input_a_i"));
        input_a_i->setGeometry(QRect(402, 215, 41, 65));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(26);
        input_a_i->setFont(font1);
        input_b2 = new QLineEdit(Complex);
        input_b2->setObjectName(QStringLiteral("input_b2"));
        input_b2->setGeometry(QRect(898, 215, 161, 65));
        input_b2->setFont(font);
        input_b_ra = new QLabel(Complex);
        input_b_ra->setObjectName(QStringLiteral("input_b_ra"));
        input_b_ra->setGeometry(QRect(847, 215, 41, 65));
        input_b_ra->setFont(font);
        input_b1 = new QLineEdit(Complex);
        input_b1->setObjectName(QStringLiteral("input_b1"));
        input_b1->setGeometry(QRect(676, 215, 161, 65));
        input_b1->setFont(font);
        input_b_i = new QLabel(Complex);
        input_b_i->setObjectName(QStringLiteral("input_b_i"));
        input_b_i->setGeometry(QRect(1069, 215, 41, 65));
        input_b_i->setFont(font1);
        equal_push = new QPushButton(Complex);
        equal_push->setObjectName(QStringLiteral("equal_push"));
        equal_push->setGeometry(QRect(512, 310, 71, 65));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(40);
        equal_push->setFont(font2);
        label_7 = new QLabel(Complex);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(528, 390, 41, 65));
        label_7->setFont(font);
        label_8 = new QLabel(Complex);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(750, 390, 41, 65));
        label_8->setFont(font1);
        output_a1 = new QLabel(Complex);
        output_a1->setObjectName(QStringLiteral("output_a1"));
        output_a1->setGeometry(QRect(358, 390, 161, 65));
        output_a1->setFont(font);
        output_a2 = new QLabel(Complex);
        output_a2->setObjectName(QStringLiteral("output_a2"));
        output_a2->setGeometry(QRect(579, 390, 161, 65));
        output_a2->setFont(font);
        label_11 = new QLabel(Complex);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(528, 470, 41, 65));
        label_11->setFont(font);
        label_12 = new QLabel(Complex);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(750, 470, 41, 65));
        label_12->setFont(font1);
        output_b1 = new QLabel(Complex);
        output_b1->setObjectName(QStringLiteral("output_b1"));
        output_b1->setGeometry(QRect(358, 470, 161, 65));
        output_b1->setFont(font);
        output_b2 = new QLabel(Complex);
        output_b2->setObjectName(QStringLiteral("output_b2"));
        output_b2->setGeometry(QRect(579, 470, 161, 65));
        output_b2->setFont(font);
        output_b2->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(Complex);

        QMetaObject::connectSlotsByName(Complex);
    } // setupUi

    void retranslateUi(QWidget *Complex)
    {
        Complex->setWindowTitle(QApplication::translate("Complex", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Complex", "\350\276\223\345\205\245\345\275\242\345\274\217:", Q_NULLPTR));
        input_a_combo->clear();
        input_a_combo->insertItems(0, QStringList()
         << QApplication::translate("Complex", "\347\233\264\350\247\222\345\235\220\346\240\207", Q_NULLPTR)
         << QApplication::translate("Complex", "\346\236\201\345\235\220\346\240\207", Q_NULLPTR)
        );
        input_b_combo->clear();
        input_b_combo->insertItems(0, QStringList()
         << QApplication::translate("Complex", "\347\233\264\350\247\222\345\235\220\346\240\207", Q_NULLPTR)
         << QApplication::translate("Complex", "\346\236\201\345\235\220\346\240\207", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Complex", "\350\276\223\345\205\245\345\275\242\345\274\217:", Q_NULLPTR));
        operator_combo->clear();
        operator_combo->insertItems(0, QStringList()
         << QApplication::translate("Complex", "\357\274\213", Q_NULLPTR)
         << QApplication::translate("Complex", "\357\274\215", Q_NULLPTR)
         << QApplication::translate("Complex", "\303\227", Q_NULLPTR)
         << QApplication::translate("Complex", "\303\267", Q_NULLPTR)
        );
        input_a1->setText(QString());
        input_a_ra->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        input_a2->setText(QString());
        input_a_i->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        input_b2->setText(QString());
        input_b_ra->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        input_b1->setText(QString());
        input_b_i->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        equal_push->setText(QApplication::translate("Complex", "\357\274\235", Q_NULLPTR));
        label_7->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        label_8->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        output_a1->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        output_a2->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        label_11->setText(QApplication::translate("Complex", "\342\210\240", Q_NULLPTR));
        label_12->setText(QApplication::translate("Complex", "\302\260", Q_NULLPTR));
        output_b1->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        output_b2->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Complex: public Ui_Complex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLEX_H
