/********************************************************************************
** Form generated from reading UI file 'date4.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE4_H
#define UI_DATE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Date
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_4;
    QWidget *page_3;
    QWidget *page_2;
    QRadioButton *One2;
    QRadioButton *One3;
    QRadioButton *Three;
    QRadioButton *Two;

    void setupUi(QWidget *Date)
    {
        if (Date->objectName().isEmpty())
            Date->setObjectName(QStringLiteral("Date"));
        Date->resize(1200, 820);
        stackedWidget = new QStackedWidget(Date);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 80, 351, 161));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        One2 = new QRadioButton(Date);
        One2->setObjectName(QStringLiteral("One2"));
        One2->setGeometry(QRect(40, 30, 69, 15));
        One3 = new QRadioButton(Date);
        One3->setObjectName(QStringLiteral("One3"));
        One3->setGeometry(QRect(260, 30, 69, 15));
        Three = new QRadioButton(Date);
        Three->setObjectName(QStringLiteral("Three"));
        Three->setGeometry(QRect(260, 50, 69, 15));
        Two = new QRadioButton(Date);
        Two->setObjectName(QStringLiteral("Two"));
        Two->setGeometry(QRect(40, 50, 69, 15));

        retranslateUi(Date);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Date);
    } // setupUi

    void retranslateUi(QWidget *Date)
    {
        Date->setWindowTitle(QApplication::translate("Date", "Form", Q_NULLPTR));
        One2->setText(QApplication::translate("Date", "\344\270\200\345\205\203\344\272\214\346\254\241", Q_NULLPTR));
        One3->setText(QApplication::translate("Date", "\344\270\200\345\205\203\344\270\211\346\254\241", Q_NULLPTR));
        Three->setText(QApplication::translate("Date", "\344\270\211\345\205\203\344\270\200\346\254\241", Q_NULLPTR));
        Two->setText(QApplication::translate("Date", "\344\272\214\345\205\203\344\270\200\346\254\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Date: public Ui_Date {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE4_H
