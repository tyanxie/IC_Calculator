/********************************************************************************
** Form generated from reading UI file 'date.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_H
#define UI_DATE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Date
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_out;
    QWidget *page_2;
    QDateEdit *dateEdit_3;
    QRadioButton *radioButton_add;
    QRadioButton *radioButton_sub;
    QSpinBox *spinBox_year;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QSpinBox *spinBox_day;
    QSpinBox *spinBox_month;
    QTextEdit *textEdit_out2;
    QComboBox *comboBox;

    void setupUi(QWidget *Date)
    {
        if (Date->objectName().isEmpty())
            Date->setObjectName(QStringLiteral("Date"));
        Date->resize(626, 610);
        stackedWidget = new QStackedWidget(Date);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 130, 541, 481));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(10, 220, 141, 41));
        QFont font;
        font.setPointSize(12);
        dateEdit->setFont(font);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2019, 8, 13));
        dateEdit_2 = new QDateEdit(page);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(10, 90, 141, 41));
        dateEdit_2->setFont(font);
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2018, 8, 13));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(10, 40, 351, 271));
        textEdit->setFrameShape(QFrame::VLine);
        textEdit_out = new QTextEdit(page);
        textEdit_out->setObjectName(QStringLiteral("textEdit_out"));
        textEdit_out->setEnabled(false);
        textEdit_out->setGeometry(QRect(0, 320, 341, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        textEdit_out->setFont(font1);
        textEdit_out->setFrameShape(QFrame::HLine);
        stackedWidget->addWidget(page);
        textEdit->raise();
        dateEdit->raise();
        dateEdit_2->raise();
        textEdit_out->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        dateEdit_3 = new QDateEdit(page_2);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(60, 30, 201, 51));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        dateEdit_3->setFont(font2);
        dateEdit_3->setCalendarPopup(true);
        dateEdit_3->setDate(QDate(2018, 8, 13));
        radioButton_add = new QRadioButton(page_2);
        radioButton_add->setObjectName(QStringLiteral("radioButton_add"));
        radioButton_add->setGeometry(QRect(0, 130, 121, 51));
        QFont font3;
        font3.setPointSize(15);
        radioButton_add->setFont(font3);
        radioButton_sub = new QRadioButton(page_2);
        radioButton_sub->setObjectName(QStringLiteral("radioButton_sub"));
        radioButton_sub->setGeometry(QRect(170, 130, 121, 51));
        radioButton_sub->setFont(font3);
        spinBox_year = new QSpinBox(page_2);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setGeometry(QRect(0, 240, 111, 51));
        spinBox_year->setFont(font);
        textEdit_2 = new QTextEdit(page_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(0, 30, 51, 51));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        textEdit_2->setFont(font4);
        textEdit_2->setFrameShape(QFrame::HLine);
        textEdit_3 = new QTextEdit(page_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(430, 240, 51, 51));
        textEdit_3->setFont(font4);
        textEdit_3->setFrameShape(QFrame::HLine);
        textEdit_4 = new QTextEdit(page_2);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(270, 240, 51, 51));
        textEdit_4->setFont(font4);
        textEdit_4->setFrameShape(QFrame::HLine);
        textEdit_5 = new QTextEdit(page_2);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(110, 240, 51, 51));
        textEdit_5->setFont(font4);
        textEdit_5->setFrameShape(QFrame::HLine);
        spinBox_day = new QSpinBox(page_2);
        spinBox_day->setObjectName(QStringLiteral("spinBox_day"));
        spinBox_day->setGeometry(QRect(320, 240, 111, 51));
        spinBox_day->setFont(font);
        spinBox_month = new QSpinBox(page_2);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setGeometry(QRect(160, 240, 111, 51));
        spinBox_month->setFont(font);
        textEdit_out2 = new QTextEdit(page_2);
        textEdit_out2->setObjectName(QStringLiteral("textEdit_out2"));
        textEdit_out2->setEnabled(false);
        textEdit_out2->setGeometry(QRect(-10, 350, 481, 111));
        QFont font5;
        font5.setPointSize(17);
        font5.setBold(false);
        font5.setWeight(50);
        textEdit_out2->setFont(font5);
        textEdit_out2->setFrameShape(QFrame::HLine);
        stackedWidget->addWidget(page_2);
        comboBox = new QComboBox(Date);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 40, 163, 23));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        comboBox->setFont(font6);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        retranslateUi(Date);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Date);
    } // setupUi

    void retranslateUi(QWidget *Date)
    {
        Date->setWindowTitle(QApplication::translate("Date", "Form", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\350\207\252                               </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\350\207\263</span></p></body></html>", Q_NULLPTR));
        radioButton_add->setText(QApplication::translate("Date", "\346\267\273\345\212\240", Q_NULLPTR));
        radioButton_sub->setText(QApplication::translate("Date", "\345\207\217\345\216\273", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\350\207\252</span></p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\227\245</p></body></html>", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\210</p></body></html>", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\271\264</p></body></html>", Q_NULLPTR));
        textEdit_out2->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:17pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Date", "\346\267\273\345\212\240\346\210\226\345\207\217\345\216\273\345\244\251\346\225\260", Q_NULLPTR)
         << QApplication::translate("Date", "\346\227\245\346\234\237\344\271\213\351\227\264\347\232\204\347\233\270\351\232\224\346\227\266\351\227\264", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Date: public Ui_Date {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_H
