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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Relationship
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *input;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *output;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *repeal;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *father;
    QPushButton *mother;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *elderbrother;
    QPushButton *youngerbrother;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *eldersister;
    QPushButton *youngersister;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *husband;
    QPushButton *wife;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *son;
    QPushButton *daughter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Relationship)
    {
        if (Relationship->objectName().isEmpty())
            Relationship->setObjectName(QStringLiteral("Relationship"));
        Relationship->resize(1200, 820);
        verticalLayout = new QVBoxLayout(Relationship);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 106, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(Relationship);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        input = new QTextEdit(groupBox);
        input->setObjectName(QStringLiteral("input"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font1.setPointSize(18);
        input->setFont(font1);

        horizontalLayout->addWidget(input);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Relationship);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        output = new QLabel(groupBox_2);
        output->setObjectName(QStringLiteral("output"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font2.setPointSize(18);
        output->setFont(font2);

        horizontalLayout_2->addWidget(output);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        repeal = new QPushButton(Relationship);
        repeal->setObjectName(QStringLiteral("repeal"));
        repeal->setMinimumSize(QSize(0, 75));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font3.setPointSize(14);
        repeal->setFont(font3);

        horizontalLayout_3->addWidget(repeal);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(Relationship);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        father = new QPushButton(groupBox_3);
        father->setObjectName(QStringLiteral("father"));
        father->setMinimumSize(QSize(0, 75));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font4.setPointSize(24);
        father->setFont(font4);

        horizontalLayout_4->addWidget(father);

        mother = new QPushButton(groupBox_3);
        mother->setObjectName(QStringLiteral("mother"));
        mother->setMinimumSize(QSize(0, 75));
        mother->setFont(font4);

        horizontalLayout_4->addWidget(mother);

        horizontalSpacer_2 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        elderbrother = new QPushButton(groupBox_3);
        elderbrother->setObjectName(QStringLiteral("elderbrother"));
        elderbrother->setMinimumSize(QSize(0, 75));
        elderbrother->setFont(font4);

        horizontalLayout_4->addWidget(elderbrother);

        youngerbrother = new QPushButton(groupBox_3);
        youngerbrother->setObjectName(QStringLiteral("youngerbrother"));
        youngerbrother->setMinimumSize(QSize(0, 75));
        youngerbrother->setFont(font4);

        horizontalLayout_4->addWidget(youngerbrother);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        eldersister = new QPushButton(groupBox_3);
        eldersister->setObjectName(QStringLiteral("eldersister"));
        eldersister->setMinimumSize(QSize(0, 75));
        eldersister->setFont(font4);

        horizontalLayout_4->addWidget(eldersister);

        youngersister = new QPushButton(groupBox_3);
        youngersister->setObjectName(QStringLiteral("youngersister"));
        youngersister->setMinimumSize(QSize(0, 75));
        youngersister->setFont(font4);

        horizontalLayout_4->addWidget(youngersister);

        horizontalSpacer_4 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        husband = new QPushButton(groupBox_3);
        husband->setObjectName(QStringLiteral("husband"));
        husband->setMinimumSize(QSize(0, 75));
        husband->setFont(font4);

        horizontalLayout_4->addWidget(husband);

        wife = new QPushButton(groupBox_3);
        wife->setObjectName(QStringLiteral("wife"));
        wife->setMinimumSize(QSize(0, 75));
        wife->setFont(font4);

        horizontalLayout_4->addWidget(wife);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        son = new QPushButton(groupBox_3);
        son->setObjectName(QStringLiteral("son"));
        son->setMinimumSize(QSize(0, 75));
        son->setFont(font4);

        horizontalLayout_4->addWidget(son);

        daughter = new QPushButton(groupBox_3);
        daughter->setObjectName(QStringLiteral("daughter"));
        daughter->setMinimumSize(QSize(0, 75));
        daughter->setFont(font4);

        horizontalLayout_4->addWidget(daughter);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 252, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 3);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 7);

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
        repeal->setText(QApplication::translate("Relationship", "\346\222\244\351\224\200\344\270\212\344\270\200\346\254\241\347\232\204\350\276\223\345\205\245", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Relationship", "\350\257\267\344\275\277\347\224\250\346\214\211\351\224\256\350\276\223\345\205\245,\350\257\267\350\276\223\345\205\245\346\234\200\347\237\255\347\232\204\344\272\262\346\210\232\345\205\263\347\263\273\347\272\277\357\274\214\345\220\246\345\210\231\344\274\232\345\257\274\350\207\264\346\227\240\346\263\225\345\207\206\347\241\256\346\237\245\350\257\242", Q_NULLPTR));
        father->setText(QApplication::translate("Relationship", "\347\210\266", Q_NULLPTR));
        mother->setText(QApplication::translate("Relationship", "\346\257\215", Q_NULLPTR));
        elderbrother->setText(QApplication::translate("Relationship", "\345\205\204", Q_NULLPTR));
        youngerbrother->setText(QApplication::translate("Relationship", "\345\274\237", Q_NULLPTR));
        eldersister->setText(QApplication::translate("Relationship", "\345\247\220", Q_NULLPTR));
        youngersister->setText(QApplication::translate("Relationship", "\345\246\271", Q_NULLPTR));
        husband->setText(QApplication::translate("Relationship", "\345\244\253", Q_NULLPTR));
        wife->setText(QApplication::translate("Relationship", "\345\246\273", Q_NULLPTR));
        son->setText(QApplication::translate("Relationship", "\345\255\220", Q_NULLPTR));
        daughter->setText(QApplication::translate("Relationship", "\345\245\263", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Relationship: public Ui_Relationship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONSHIP_H
