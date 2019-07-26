/********************************************************************************
** Form generated from reading UI file 'programmer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMER_H
#define UI_PROGRAMMER_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programmer
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *indication;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLabel *label_12;
    QGroupBox *groupBox_3;
    QLineEdit *input;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *bin_output;
    QLabel *oct_output;
    QLabel *dec_output;
    QLabel *hex_output;
    QComboBox *comboBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QWidget *Programmer)
    {
        if (Programmer->objectName().isEmpty())
            Programmer->setObjectName(QStringLiteral("Programmer"));
        Programmer->resize(1200, 820);
        groupBox = new QGroupBox(Programmer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 340, 251, 141));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        indication = new QLabel(groupBox);
        indication->setObjectName(QStringLiteral("indication"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(indication->sizePolicy().hasHeightForWidth());
        indication->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(16);
        indication->setFont(font);

        verticalLayout->addWidget(indication);

        groupBox_2 = new QGroupBox(Programmer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 40, 561, 101));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        label_13->setFont(font1);

        horizontalLayout->addWidget(label_13);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);

        horizontalLayout->addWidget(label_12);

        groupBox_3 = new QGroupBox(Programmer);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(380, 180, 311, 431));
        input = new QLineEdit(groupBox_3);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(10, 190, 291, 91));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(input->sizePolicy().hasHeightForWidth());
        input->setSizePolicy(sizePolicy1);
        input->setMaximumSize(QSize(16777215, 200));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(16);
        input->setFont(font2);
        groupBox_4 = new QGroupBox(Programmer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(700, 180, 241, 431));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        bin_output = new QLabel(groupBox_4);
        bin_output->setObjectName(QStringLiteral("bin_output"));
        sizePolicy.setHeightForWidth(bin_output->sizePolicy().hasHeightForWidth());
        bin_output->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(14);
        bin_output->setFont(font3);

        verticalLayout_3->addWidget(bin_output);

        oct_output = new QLabel(groupBox_4);
        oct_output->setObjectName(QStringLiteral("oct_output"));
        sizePolicy.setHeightForWidth(oct_output->sizePolicy().hasHeightForWidth());
        oct_output->setSizePolicy(sizePolicy);
        oct_output->setFont(font3);

        verticalLayout_3->addWidget(oct_output);

        dec_output = new QLabel(groupBox_4);
        dec_output->setObjectName(QStringLiteral("dec_output"));
        sizePolicy.setHeightForWidth(dec_output->sizePolicy().hasHeightForWidth());
        dec_output->setSizePolicy(sizePolicy);
        dec_output->setFont(font3);

        verticalLayout_3->addWidget(dec_output);

        hex_output = new QLabel(groupBox_4);
        hex_output->setObjectName(QStringLiteral("hex_output"));
        sizePolicy.setHeightForWidth(hex_output->sizePolicy().hasHeightForWidth());
        hex_output->setSizePolicy(sizePolicy);
        hex_output->setFont(font3);

        verticalLayout_3->addWidget(hex_output);

        comboBox = new QComboBox(Programmer);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 110, 141, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font4.setPointSize(18);
        comboBox->setFont(font4);
        groupBox_5 = new QGroupBox(Programmer);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(950, 180, 181, 431));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font5.setPointSize(14);
        label_14->setFont(font5);

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setFont(font5);

        verticalLayout_2->addWidget(label_15);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setFont(font5);

        verticalLayout_2->addWidget(label_16);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFont(font5);

        verticalLayout_2->addWidget(label_17);


        retranslateUi(Programmer);

        QMetaObject::connectSlotsByName(Programmer);
    } // setupUi

    void retranslateUi(QWidget *Programmer)
    {
        Programmer->setWindowTitle(QApplication::translate("Programmer", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Programmer", "\350\277\233\345\210\266\346\225\260\345\210\227\350\241\250", Q_NULLPTR));
        indication->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\272\214\350\277\233\345\210\266</span></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_13->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\276\223\345\205\245\345\210\227</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\276\223\345\207\272\345\210\227</span></p></body></html>", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Programmer", "\350\276\223\345\205\245\357\274\232\344\273\273\351\200\211\344\270\200\347\247\215\350\277\233\345\210\266\346\225\260\350\276\223\345\205\245", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Programmer", "\350\276\223\345\207\272", Q_NULLPTR));
        bin_output->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        oct_output->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        dec_output->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        hex_output->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Programmer", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR)
         << QApplication::translate("Programmer", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR)
         << QApplication::translate("Programmer", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR)
         << QApplication::translate("Programmer", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR)
        );
        groupBox_5->setTitle(QApplication::translate("Programmer", "\350\276\223\345\207\272\345\210\227\350\277\233\345\210\266\346\225\260", Q_NULLPTR));
        label_14->setText(QApplication::translate("Programmer", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        label_15->setText(QApplication::translate("Programmer", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        label_16->setText(QApplication::translate("Programmer", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        label_17->setText(QApplication::translate("Programmer", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Programmer: public Ui_Programmer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMER_H
