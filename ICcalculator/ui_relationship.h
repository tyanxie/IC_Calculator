/********************************************************************************
** Form generated from reading UI file 'relationship.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATIONSHIP_H
#define UI_RELATIONSHIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Relationship
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTextEdit *input;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *output;
    QGroupBox *groupBox_3;
    QPushButton *father;
    QPushButton *mother;
    QPushButton *elderbrother;
    QPushButton *youngersister;
    QPushButton *eldersister;
    QPushButton *wife;
    QPushButton *husband;
    QPushButton *youngerbrother;
    QPushButton *son;
    QPushButton *daughter;
    QPushButton *repeal;

    void setupUi(QWidget *Relationship)
    {
        if (Relationship->objectName().isEmpty())
            Relationship->setObjectName(QStringLiteral("Relationship"));
        Relationship->resize(1200, 820);
        groupBox = new QGroupBox(Relationship);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 60, 1000, 150));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(14, 44, 211, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(18);
        label->setFont(font);
        input = new QTextEdit(groupBox);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(230, 60, 750, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font1.setPointSize(14);
        input->setFont(font1);
        groupBox_2 = new QGroupBox(Relationship);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 250, 1000, 150));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(14, 34, 451, 100));
        label_3->setFont(font);
        output = new QLabel(groupBox_2);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(490, 40, 500, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font2.setPointSize(16);
        output->setFont(font2);
        groupBox_3 = new QGroupBox(Relationship);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 580, 1021, 150));
        father = new QPushButton(groupBox_3);
        father->setObjectName(QStringLiteral("father"));
        father->setGeometry(QRect(0, 50, 50, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font3.setPointSize(14);
        father->setFont(font3);
        mother = new QPushButton(groupBox_3);
        mother->setObjectName(QStringLiteral("mother"));
        mother->setGeometry(QRect(50, 50, 50, 50));
        mother->setFont(font3);
        elderbrother = new QPushButton(groupBox_3);
        elderbrother->setObjectName(QStringLiteral("elderbrother"));
        elderbrother->setGeometry(QRect(230, 50, 50, 50));
        elderbrother->setFont(font3);
        youngersister = new QPushButton(groupBox_3);
        youngersister->setObjectName(QStringLiteral("youngersister"));
        youngersister->setGeometry(QRect(510, 50, 50, 50));
        youngersister->setFont(font3);
        eldersister = new QPushButton(groupBox_3);
        eldersister->setObjectName(QStringLiteral("eldersister"));
        eldersister->setGeometry(QRect(460, 50, 50, 50));
        eldersister->setFont(font3);
        wife = new QPushButton(groupBox_3);
        wife->setObjectName(QStringLiteral("wife"));
        wife->setGeometry(QRect(740, 50, 50, 50));
        wife->setFont(font3);
        husband = new QPushButton(groupBox_3);
        husband->setObjectName(QStringLiteral("husband"));
        husband->setGeometry(QRect(690, 50, 50, 50));
        husband->setFont(font3);
        youngerbrother = new QPushButton(groupBox_3);
        youngerbrother->setObjectName(QStringLiteral("youngerbrother"));
        youngerbrother->setGeometry(QRect(280, 50, 50, 50));
        youngerbrother->setFont(font3);
        son = new QPushButton(groupBox_3);
        son->setObjectName(QStringLiteral("son"));
        son->setGeometry(QRect(920, 50, 50, 50));
        son->setFont(font3);
        daughter = new QPushButton(groupBox_3);
        daughter->setObjectName(QStringLiteral("daughter"));
        daughter->setGeometry(QRect(970, 50, 50, 50));
        daughter->setFont(font3);
        repeal = new QPushButton(Relationship);
        repeal->setObjectName(QStringLiteral("repeal"));
        repeal->setGeometry(QRect(890, 470, 200, 100));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font4.setPointSize(14);
        repeal->setFont(font4);

        retranslateUi(Relationship);

        QMetaObject::connectSlotsByName(Relationship);
    } // setupUi

    void retranslateUi(QWidget *Relationship)
    {
        Relationship->setWindowTitle(QApplication::translate("Relationship", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Relationship", "\350\276\223\345\205\245\345\214\272", Q_NULLPTR));
        label->setText(QApplication::translate("Relationship", "\344\272\262\346\210\232\345\205\263\347\263\273\350\276\223\345\205\245:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Relationship", "\350\276\223\345\207\272\345\214\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("Relationship", "\346\202\250\350\276\223\345\205\245\347\232\204\344\272\262\346\210\232\345\205\263\347\263\273\347\232\204\350\256\241\347\256\227\347\273\223\346\236\234\344\270\272\357\274\232", Q_NULLPTR));
        output->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Relationship", "\350\257\267\344\275\277\347\224\250\346\214\211\351\224\256\350\276\223\345\205\245,\350\257\267\350\276\223\345\205\245\346\234\200\347\237\255\347\232\204\344\272\262\346\210\232\345\205\263\347\263\273\347\272\277\357\274\214\345\220\246\345\210\231\344\274\232\345\257\274\350\207\264\346\227\240\346\263\225\345\207\206\347\241\256\346\237\245\350\257\242", Q_NULLPTR));
        father->setText(QApplication::translate("Relationship", "\347\210\266", Q_NULLPTR));
        mother->setText(QApplication::translate("Relationship", "\346\257\215", Q_NULLPTR));
        elderbrother->setText(QApplication::translate("Relationship", "\345\205\204", Q_NULLPTR));
        youngersister->setText(QApplication::translate("Relationship", "\345\246\271", Q_NULLPTR));
        eldersister->setText(QApplication::translate("Relationship", "\345\247\220", Q_NULLPTR));
        wife->setText(QApplication::translate("Relationship", "\345\246\273", Q_NULLPTR));
        husband->setText(QApplication::translate("Relationship", "\345\244\253", Q_NULLPTR));
        youngerbrother->setText(QApplication::translate("Relationship", "\345\274\237", Q_NULLPTR));
        son->setText(QApplication::translate("Relationship", "\345\255\220", Q_NULLPTR));
        daughter->setText(QApplication::translate("Relationship", "\345\245\263", Q_NULLPTR));
        repeal->setText(QApplication::translate("Relationship", "\346\222\244\351\224\200\344\270\212\344\270\200\346\254\241\347\232\204\350\276\223\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Relationship: public Ui_Relationship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONSHIP_H
