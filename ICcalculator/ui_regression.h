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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *calculation;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *coefficient;
    QLabel *y_2;
    QLabel *r;
    QLabel *expresion;

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
        gridLayoutWidget->setGeometry(QRect(130, 110, 931, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(Regression);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 41, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(32);
        label_2->setFont(font2);
        label_3 = new QLabel(Regression);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 220, 41, 71));
        label_3->setFont(font2);
        calculation = new QPushButton(Regression);
        calculation->setObjectName(QStringLiteral("calculation"));
        calculation->setGeometry(QRect(960, 20, 221, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(24);
        calculation->setFont(font3);
        verticalLayoutWidget = new QWidget(Regression);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1060, 110, 101, 101));
        coefficient = new QVBoxLayout(verticalLayoutWidget);
        coefficient->setObjectName(QStringLiteral("coefficient"));
        coefficient->setContentsMargins(0, 0, 0, 0);
        y_2 = new QLabel(verticalLayoutWidget);
        y_2->setObjectName(QStringLiteral("y_2"));
        QFont font4;
        font4.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font4.setPointSize(20);
        y_2->setFont(font4);

        coefficient->addWidget(y_2);

        r = new QLabel(verticalLayoutWidget);
        r->setObjectName(QStringLiteral("r"));
        r->setFont(font4);

        coefficient->addWidget(r);

        expresion = new QLabel(Regression);
        expresion->setObjectName(QStringLiteral("expresion"));
        expresion->setGeometry(QRect(260, 10, 681, 81));
        QFont font5;
        font5.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font5.setPointSize(30);
        expresion->setFont(font5);
        expresion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

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
        label_2->setText(QApplication::translate("Regression", "X\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Regression", "Y\357\274\232", Q_NULLPTR));
        calculation->setText(QApplication::translate("Regression", "\350\256\241\347\256\227", Q_NULLPTR));
        y_2->setText(QApplication::translate("Regression", "R=", Q_NULLPTR));
        r->setText(QApplication::translate("Regression", "666", Q_NULLPTR));
        expresion->setText(QApplication::translate("Regression", "y = 0.4444x + 0.4444", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Regression: public Ui_Regression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGRESSION_H
