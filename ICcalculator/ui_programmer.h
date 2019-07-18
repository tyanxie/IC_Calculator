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
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLabel *label_12;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *Programmer)
    {
        if (Programmer->objectName().isEmpty())
            Programmer->setObjectName(QStringLiteral("Programmer"));
        Programmer->resize(1200, 820);
        groupBox = new QGroupBox(Programmer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 180, 251, 441));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        label_11->setFont(font);

        verticalLayout->addWidget(label_11);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        groupBox_2 = new QGroupBox(Programmer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 40, 561, 101));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font);

        horizontalLayout->addWidget(label_13);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);

        horizontalLayout->addWidget(label_12);

        groupBox_3 = new QGroupBox(Programmer);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(490, 190, 241, 431));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_4);

        groupBox_4 = new QGroupBox(Programmer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(760, 190, 241, 431));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_10);


        retranslateUi(Programmer);

        QMetaObject::connectSlotsByName(Programmer);
    } // setupUi

    void retranslateUi(QWidget *Programmer)
    {
        Programmer->setWindowTitle(QApplication::translate("Programmer", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Programmer", "\350\277\233\345\210\266\346\225\260\345\210\227\350\241\250", Q_NULLPTR));
        label_11->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\272\214\350\277\233\345\210\266</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\205\253\350\277\233\345\210\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\215\201\350\277\233\345\210\266</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\215\201\345\205\255\350\277\233\345\210\266</span></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_13->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\276\223\345\205\245\345\210\227</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Programmer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\276\223\345\207\272\345\210\227</span></p></body></html>", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Programmer", "\350\276\223\345\205\245\345\210\227\357\274\232\344\273\273\351\200\211\344\270\200\347\247\215\350\277\233\345\210\266\346\225\260\350\276\223\345\205\245", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Programmer", "\350\276\223\345\207\272", Q_NULLPTR));
        label_7->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("Programmer", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Programmer: public Ui_Programmer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMER_H
