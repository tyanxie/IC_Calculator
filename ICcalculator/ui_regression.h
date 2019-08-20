/********************************************************************************
** Form generated from reading UI file 'regression.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGRESSION_H
#define UI_REGRESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_Regression
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *title;
    QPushButton *clear;
    QPushButton *calculation;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *x;
    QLineEdit *y;
    QWidget *gridLayoutwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *coefficient;
    QLabel *r;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *light;
    QRadioButton *bluesky;
    QRadioButton *dark;
    QRadioButton *brown;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *black;
    QRadioButton *blue;
    QRadioButton *red;
    QRadioButton *yellow;
    QRadioButton *green;
    QPushButton *Save;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Regression)
    {
        if (Regression->objectName().isEmpty())
            Regression->setObjectName(QStringLiteral("Regression"));
        Regression->resize(1200, 820);
        verticalLayout_4 = new QVBoxLayout(Regression);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Regression);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(23);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Regression);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(30);
        comboBox->setFont(font1);

        horizontalLayout->addWidget(comboBox);

        title = new QLineEdit(Regression);
        title->setObjectName(QStringLiteral("title"));
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(30);
        title->setFont(font2);

        horizontalLayout->addWidget(title);

        clear = new QPushButton(Regression);
        clear->setObjectName(QStringLiteral("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(24);
        clear->setFont(font3);

        horizontalLayout->addWidget(clear);

        calculation = new QPushButton(Regression);
        calculation->setObjectName(QStringLiteral("calculation"));
        sizePolicy.setHeightForWidth(calculation->sizePolicy().hasHeightForWidth());
        calculation->setSizePolicy(sizePolicy);
        calculation->setFont(font3);

        horizontalLayout->addWidget(calculation);

        horizontalLayout->setStretch(0, 130);
        horizontalLayout->setStretch(1, 50);
        horizontalLayout->setStretch(2, 500);
        horizontalLayout->setStretch(3, 150);
        horizontalLayout->setStretch(4, 150);

        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_3 = new QGroupBox(Regression);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        x = new QLineEdit(groupBox_3);
        x->setObjectName(QStringLiteral("x"));
        x->setFont(font2);

        verticalLayout_3->addWidget(x);

        y = new QLineEdit(groupBox_3);
        y->setObjectName(QStringLiteral("y"));
        y->setFont(font2);

        verticalLayout_3->addWidget(y);


        horizontalLayout_2->addWidget(groupBox_3);

        gridLayoutwidget = new QWidget(Regression);
        gridLayoutwidget->setObjectName(QStringLiteral("gridLayoutwidget"));
        gridLayout = new QGridLayout(gridLayoutwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        horizontalLayout_2->addWidget(gridLayoutwidget);

        coefficient = new QVBoxLayout();
        coefficient->setObjectName(QStringLiteral("coefficient"));
        r = new QLabel(Regression);
        r->setObjectName(QStringLiteral("r"));
        sizePolicy.setHeightForWidth(r->sizePolicy().hasHeightForWidth());
        r->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font4.setPointSize(20);
        r->setFont(font4);

        coefficient->addWidget(r);


        horizontalLayout_2->addLayout(coefficient);

        horizontalLayout_2->setStretch(0, 141);
        horizontalLayout_2->setStretch(1, 930);
        horizontalLayout_2->setStretch(2, 91);

        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(Regression);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(15);
        groupBox->setFont(font5);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        light = new QRadioButton(groupBox);
        light->setObjectName(QStringLiteral("light"));
        light->setChecked(true);

        verticalLayout->addWidget(light);

        bluesky = new QRadioButton(groupBox);
        bluesky->setObjectName(QStringLiteral("bluesky"));

        verticalLayout->addWidget(bluesky);

        dark = new QRadioButton(groupBox);
        dark->setObjectName(QStringLiteral("dark"));

        verticalLayout->addWidget(dark);

        brown = new QRadioButton(groupBox);
        brown->setObjectName(QStringLiteral("brown"));

        verticalLayout->addWidget(brown);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Regression);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font5);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        black = new QRadioButton(groupBox_2);
        black->setObjectName(QStringLiteral("black"));
        black->setChecked(true);

        verticalLayout_2->addWidget(black);

        blue = new QRadioButton(groupBox_2);
        blue->setObjectName(QStringLiteral("blue"));
        blue->setChecked(false);

        verticalLayout_2->addWidget(blue);

        red = new QRadioButton(groupBox_2);
        red->setObjectName(QStringLiteral("red"));

        verticalLayout_2->addWidget(red);

        yellow = new QRadioButton(groupBox_2);
        yellow->setObjectName(QStringLiteral("yellow"));

        verticalLayout_2->addWidget(yellow);

        green = new QRadioButton(groupBox_2);
        green->setObjectName(QStringLiteral("green"));

        verticalLayout_2->addWidget(green);


        verticalLayout_5->addWidget(groupBox_2);

        Save = new QPushButton(Regression);
        Save->setObjectName(QStringLiteral("Save"));
        sizePolicy.setHeightForWidth(Save->sizePolicy().hasHeightForWidth());
        Save->setSizePolicy(sizePolicy);
        Save->setFont(font3);

        verticalLayout_5->addWidget(Save);

        verticalLayout_5->setStretch(0, 8);
        verticalLayout_5->setStretch(1, 10);
        verticalLayout_5->setStretch(2, 5);

        horizontalLayout_3->addLayout(verticalLayout_5);

        stackedWidget = new QStackedWidget(Regression);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_3->addWidget(stackedWidget);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 19);

        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_4->setStretch(0, 50);
        verticalLayout_4->setStretch(1, 18);
        verticalLayout_4->setStretch(2, 142);
        verticalLayout_4->setStretch(3, 18);
        verticalLayout_4->setStretch(4, 542);

        retranslateUi(Regression);

        QMetaObject::connectSlotsByName(Regression);
    } // setupUi

    void retranslateUi(QWidget *Regression)
    {
        Regression->setWindowTitle(QApplication::translate("Regression", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Regression", "\346\225\260\346\215\256\347\273\204\346\225\260\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Regression", "3", Q_NULLPTR)
         << QApplication::translate("Regression", "4", Q_NULLPTR)
         << QApplication::translate("Regression", "5", Q_NULLPTR)
         << QApplication::translate("Regression", "6", Q_NULLPTR)
         << QApplication::translate("Regression", "7", Q_NULLPTR)
         << QApplication::translate("Regression", "8", Q_NULLPTR)
         << QApplication::translate("Regression", "9", Q_NULLPTR)
         << QApplication::translate("Regression", "10", Q_NULLPTR)
        );
        title->setText(QApplication::translate("Regression", "\345\234\250\346\255\244\350\276\223\345\205\245\346\240\207\351\242\230\357\274\214\351\273\230\350\256\244\344\270\272\345\233\276\350\241\2501", Q_NULLPTR));
        clear->setText(QApplication::translate("Regression", "\346\270\205\351\231\244", Q_NULLPTR));
        calculation->setText(QApplication::translate("Regression", "\350\256\241\347\256\227", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Regression", "\346\250\252\347\272\265\345\235\220\346\240\207\345\220\215\347\247\260", Q_NULLPTR));
        x->setText(QApplication::translate("Regression", "x", Q_NULLPTR));
        y->setText(QApplication::translate("Regression", "y", Q_NULLPTR));
        r->setText(QApplication::translate("Regression", "R", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Regression", "\344\270\273\351\242\230", Q_NULLPTR));
        light->setText(QApplication::translate("Regression", "\351\273\230\350\256\244", Q_NULLPTR));
        bluesky->setText(QApplication::translate("Regression", "\350\224\232\350\223\235", Q_NULLPTR));
        dark->setText(QApplication::translate("Regression", "\351\273\221\346\232\227", Q_NULLPTR));
        brown->setText(QApplication::translate("Regression", "\346\262\231\350\244\220", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Regression", "\347\272\277\346\235\241\351\242\234\350\211\262", Q_NULLPTR));
        black->setText(QApplication::translate("Regression", "\351\273\221\350\211\262", Q_NULLPTR));
        blue->setText(QApplication::translate("Regression", "\350\223\235\350\211\262", Q_NULLPTR));
        red->setText(QApplication::translate("Regression", "\347\272\242\350\211\262", Q_NULLPTR));
        yellow->setText(QApplication::translate("Regression", "\351\273\204\350\211\262", Q_NULLPTR));
        green->setText(QApplication::translate("Regression", "\347\273\277\350\211\262", Q_NULLPTR));
        Save->setText(QApplication::translate("Regression", "\344\277\235\345\255\230\n"
"\345\233\276\347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Regression: public Ui_Regression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGRESSION_H
