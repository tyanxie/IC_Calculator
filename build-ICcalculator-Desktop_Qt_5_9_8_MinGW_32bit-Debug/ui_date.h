/********************************************************************************
** Form generated from reading UI file 'date.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_H
#define UI_DATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Date
{
public:
    QComboBox *comboBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QWidget *page_2;

    void setupUi(QWidget *Date)
    {
        if (Date->objectName().isEmpty())
            Date->setObjectName(QStringLiteral("Date"));
        Date->resize(490, 325);
        comboBox = new QComboBox(Date);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 20, 134, 22));
        QFont font;
        font.setPointSize(12);
        comboBox->setFont(font);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        stackedWidget = new QStackedWidget(Date);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 60, 311, 211));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(90, 30, 111, 31));
        dateEdit->setCalendarPopup(true);
        dateEdit_2 = new QDateEdit(page);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(90, 90, 111, 31));
        dateEdit_2->setCalendarPopup(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Date);

        QMetaObject::connectSlotsByName(Date);
    } // setupUi

    void retranslateUi(QWidget *Date)
    {
        Date->setWindowTitle(QApplication::translate("Date", "Form", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Date", "\346\227\245\346\234\237\344\271\213\351\227\264\347\232\204\347\233\270\351\232\224\346\227\266\351\227\264", Q_NULLPTR)
         << QApplication::translate("Date", "\346\267\273\345\212\240\346\210\226\345\207\217\345\216\273\345\244\251\346\225\260", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Date: public Ui_Date {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_H
