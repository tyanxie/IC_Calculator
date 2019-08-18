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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Complex
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *input_a_combo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *input_b_combo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *input_a1;
    QLabel *input_a_ra;
    QLineEdit *input_a2;
    QLabel *input_a_i;
    QComboBox *operator_combo;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *input_b1;
    QLabel *input_b_ra;
    QLineEdit *input_b2;
    QLabel *input_b_i;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *output_a1;
    QLabel *label_7;
    QLabel *output_a2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *output_b1;
    QLabel *label_11;
    QLabel *output_b2;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Complex)
    {
        if (Complex->objectName().isEmpty())
            Complex->setObjectName(QStringLiteral("Complex"));
        Complex->resize(1200, 820);
        verticalLayout = new QVBoxLayout(Complex);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Complex);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        input_a_combo = new QComboBox(Complex);
        input_a_combo->setObjectName(QStringLiteral("input_a_combo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(input_a_combo->sizePolicy().hasHeightForWidth());
        input_a_combo->setSizePolicy(sizePolicy);
        input_a_combo->setMaximumSize(QSize(16777215, 75));
        input_a_combo->setFont(font);

        horizontalLayout->addWidget(input_a_combo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Complex);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        input_b_combo = new QComboBox(Complex);
        input_b_combo->setObjectName(QStringLiteral("input_b_combo"));
        sizePolicy.setHeightForWidth(input_b_combo->sizePolicy().hasHeightForWidth());
        input_b_combo->setSizePolicy(sizePolicy);
        input_b_combo->setMaximumSize(QSize(16777215, 75));
        input_b_combo->setFont(font);

        horizontalLayout->addWidget(input_b_combo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 3);
        horizontalLayout->setStretch(4, 3);
        horizontalLayout->setStretch(5, 7);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        input_a1 = new QLineEdit(Complex);
        input_a1->setObjectName(QStringLiteral("input_a1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(input_a1->sizePolicy().hasHeightForWidth());
        input_a1->setSizePolicy(sizePolicy1);
        input_a1->setMaximumSize(QSize(16777215, 75));
        input_a1->setFont(font);

        horizontalLayout_2->addWidget(input_a1);

        input_a_ra = new QLabel(Complex);
        input_a_ra->setObjectName(QStringLiteral("input_a_ra"));
        input_a_ra->setFont(font);

        horizontalLayout_2->addWidget(input_a_ra);

        input_a2 = new QLineEdit(Complex);
        input_a2->setObjectName(QStringLiteral("input_a2"));
        sizePolicy1.setHeightForWidth(input_a2->sizePolicy().hasHeightForWidth());
        input_a2->setSizePolicy(sizePolicy1);
        input_a2->setMaximumSize(QSize(16777215, 75));
        input_a2->setFont(font);

        horizontalLayout_2->addWidget(input_a2);

        input_a_i = new QLabel(Complex);
        input_a_i->setObjectName(QStringLiteral("input_a_i"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(26);
        input_a_i->setFont(font1);

        horizontalLayout_2->addWidget(input_a_i);

        horizontalLayout_2->setStretch(0, 20);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 20);
        horizontalLayout_2->setStretch(3, 3);

        horizontalLayout_4->addLayout(horizontalLayout_2);

        operator_combo = new QComboBox(Complex);
        operator_combo->setObjectName(QStringLiteral("operator_combo"));
        sizePolicy.setHeightForWidth(operator_combo->sizePolicy().hasHeightForWidth());
        operator_combo->setSizePolicy(sizePolicy);
        operator_combo->setMaximumSize(QSize(16777215, 75));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(30);
        operator_combo->setFont(font2);

        horizontalLayout_4->addWidget(operator_combo);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        input_b1 = new QLineEdit(Complex);
        input_b1->setObjectName(QStringLiteral("input_b1"));
        sizePolicy1.setHeightForWidth(input_b1->sizePolicy().hasHeightForWidth());
        input_b1->setSizePolicy(sizePolicy1);
        input_b1->setMaximumSize(QSize(16777215, 75));
        input_b1->setFont(font);

        horizontalLayout_3->addWidget(input_b1);

        input_b_ra = new QLabel(Complex);
        input_b_ra->setObjectName(QStringLiteral("input_b_ra"));
        input_b_ra->setFont(font);

        horizontalLayout_3->addWidget(input_b_ra);

        input_b2 = new QLineEdit(Complex);
        input_b2->setObjectName(QStringLiteral("input_b2"));
        sizePolicy1.setHeightForWidth(input_b2->sizePolicy().hasHeightForWidth());
        input_b2->setSizePolicy(sizePolicy1);
        input_b2->setMaximumSize(QSize(16777215, 75));
        input_b2->setFont(font);

        horizontalLayout_3->addWidget(input_b2);

        input_b_i = new QLabel(Complex);
        input_b_i->setObjectName(QStringLiteral("input_b_i"));
        input_b_i->setFont(font1);

        horizontalLayout_3->addWidget(input_b_i);

        horizontalLayout_3->setStretch(0, 20);
        horizontalLayout_3->setStretch(1, 3);
        horizontalLayout_3->setStretch(2, 20);
        horizontalLayout_3->setStretch(3, 3);

        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4->setStretch(0, 20);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        output_a1 = new QLabel(Complex);
        output_a1->setObjectName(QStringLiteral("output_a1"));
        output_a1->setFont(font);

        horizontalLayout_5->addWidget(output_a1);

        label_7 = new QLabel(Complex);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_5->addWidget(label_7);

        output_a2 = new QLabel(Complex);
        output_a2->setObjectName(QStringLiteral("output_a2"));
        output_a2->setFont(font);

        horizontalLayout_5->addWidget(output_a2);

        label_8 = new QLabel(Complex);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalLayout_5->setStretch(0, 8);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 2);
        horizontalLayout_5->setStretch(4, 1);
        horizontalLayout_5->setStretch(5, 8);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        output_b1 = new QLabel(Complex);
        output_b1->setObjectName(QStringLiteral("output_b1"));
        output_b1->setFont(font);

        horizontalLayout_6->addWidget(output_b1);

        label_11 = new QLabel(Complex);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_6->addWidget(label_11);

        output_b2 = new QLabel(Complex);
        output_b2->setObjectName(QStringLiteral("output_b2"));
        output_b2->setFont(font);
        output_b2->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_6->addWidget(output_b2);

        label_12 = new QLabel(Complex);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_6->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_6->setStretch(0, 8);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 2);
        horizontalLayout_6->setStretch(4, 1);
        horizontalLayout_6->setStretch(5, 8);

        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 4);
        verticalLayout->setStretch(3, 4);
        verticalLayout->setStretch(4, 4);
        verticalLayout->setStretch(5, 5);

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
        label_2->setText(QApplication::translate("Complex", "\350\276\223\345\205\245\345\275\242\345\274\217:", Q_NULLPTR));
        input_b_combo->clear();
        input_b_combo->insertItems(0, QStringList()
         << QApplication::translate("Complex", "\347\233\264\350\247\222\345\235\220\346\240\207", Q_NULLPTR)
         << QApplication::translate("Complex", "\346\236\201\345\235\220\346\240\207", Q_NULLPTR)
        );
        input_a1->setText(QString());
        input_a_ra->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        input_a2->setText(QString());
        input_a_i->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        operator_combo->clear();
        operator_combo->insertItems(0, QStringList()
         << QApplication::translate("Complex", "\357\274\213", Q_NULLPTR)
         << QApplication::translate("Complex", "\357\274\215", Q_NULLPTR)
         << QApplication::translate("Complex", "\303\227", Q_NULLPTR)
         << QApplication::translate("Complex", "\303\267", Q_NULLPTR)
        );
        input_b1->setText(QString());
        input_b_ra->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        input_b2->setText(QString());
        input_b_i->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        output_a1->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        label_7->setText(QApplication::translate("Complex", "\357\274\213", Q_NULLPTR));
        output_a2->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("Complex", "i", Q_NULLPTR));
        output_b1->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        label_11->setText(QApplication::translate("Complex", "\342\210\240", Q_NULLPTR));
        output_b2->setText(QApplication::translate("Complex", "0.00", Q_NULLPTR));
        label_12->setText(QApplication::translate("Complex", "\302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Complex: public Ui_Complex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLEX_H
