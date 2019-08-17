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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regression
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *calculation;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *coefficient;
    QLabel *label_2;
    QLabel *r;
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
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *x;
    QLineEdit *y;
    QLineEdit *title;

    void setupUi(QWidget *Regression)
    {
        if (Regression->objectName().isEmpty())
            Regression->setObjectName(QStringLiteral("Regression"));
        Regression->resize(1200, 820);
        stackedWidget = new QStackedWidget(Regression);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 330, 940, 450));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        label = new QLabel(Regression);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(23);
        label->setFont(font);
        comboBox = new QComboBox(Regression);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 20, 71, 61));
        QFont font1;
        font1.setPointSize(30);
        comboBox->setFont(font1);
        gridLayoutWidget = new QWidget(Regression);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 110, 931, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        calculation = new QPushButton(Regression);
        calculation->setObjectName(QStringLiteral("calculation"));
        calculation->setGeometry(QRect(960, 20, 221, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(24);
        calculation->setFont(font2);
        verticalLayoutWidget = new QWidget(Regression);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1080, 110, 101, 101));
        coefficient = new QVBoxLayout(verticalLayoutWidget);
        coefficient->setObjectName(QStringLiteral("coefficient"));
        coefficient->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font3.setPointSize(20);
        label_2->setFont(font3);

        coefficient->addWidget(label_2);

        r = new QLabel(verticalLayoutWidget);
        r->setObjectName(QStringLiteral("r"));
        r->setFont(font3);

        coefficient->addWidget(r);

        groupBox = new QGroupBox(Regression);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 350, 91, 144));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(15);
        groupBox->setFont(font4);
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

        groupBox_2 = new QGroupBox(Regression);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 530, 91, 144));
        groupBox_2->setFont(font4);
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

        pushButton = new QPushButton(Regression);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1090, 680, 98, 101));
        pushButton->setFont(font2);
        groupBox_3 = new QGroupBox(Regression);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 110, 121, 181));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        x = new QLineEdit(groupBox_3);
        x->setObjectName(QStringLiteral("x"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(30);
        x->setFont(font5);

        verticalLayout_3->addWidget(x);

        y = new QLineEdit(groupBox_3);
        y->setObjectName(QStringLiteral("y"));
        y->setFont(font5);

        verticalLayout_3->addWidget(y);

        title = new QLineEdit(Regression);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(250, 10, 681, 91));
        title->setFont(font5);

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
        calculation->setText(QApplication::translate("Regression", "\350\256\241\347\256\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Regression", "R=", Q_NULLPTR));
        r->setText(QApplication::translate("Regression", "666", Q_NULLPTR));
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
        pushButton->setText(QApplication::translate("Regression", "\344\277\235\345\255\230\n"
"\345\233\276\347\211\207", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Regression", "\346\250\252\347\272\265\345\235\220\346\240\207\345\220\215\347\247\260", Q_NULLPTR));
        x->setText(QApplication::translate("Regression", "x", Q_NULLPTR));
        y->setText(QApplication::translate("Regression", "y", Q_NULLPTR));
        title->setText(QApplication::translate("Regression", "\345\234\250\346\255\244\350\276\223\345\205\245\346\240\207\351\242\230\357\274\214\351\273\230\350\256\244\344\270\272\345\233\276\350\241\2501", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Regression: public Ui_Regression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGRESSION_H
