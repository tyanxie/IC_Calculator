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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Date
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QDateEdit *dateEdit_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_8;
    QTextEdit *textEdit_out;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *dateEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_add;
    QRadioButton *radioButton_sub;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_year;
    QLabel *label_2;
    QSpinBox *spinBox_month;
    QLabel *label_3;
    QSpinBox *spinBox_day;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *textEdit_out2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Date)
    {
        if (Date->objectName().isEmpty())
            Date->setObjectName(QStringLiteral("Date"));
        Date->resize(1100, 720);
        verticalLayout = new QVBoxLayout(Date);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox = new QComboBox(Date);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(0, 0));
        comboBox->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        comboBox->setFont(font);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(Date);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(17);
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        dateEdit_2 = new QDateEdit(page);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setFont(font1);
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2018, 8, 13));

        horizontalLayout_6->addWidget(dateEdit_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font1);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2019, 8, 13));

        horizontalLayout_8->addWidget(dateEdit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_8);

        textEdit_out = new QTextEdit(page);
        textEdit_out->setObjectName(QStringLiteral("textEdit_out"));
        textEdit_out->setEnabled(false);
        textEdit_out->setFont(font);
        textEdit_out->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(textEdit_out);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 3);
        verticalLayout_3->setStretch(5, 3);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);

        horizontalLayout_2->addWidget(label);

        dateEdit_3 = new QDateEdit(page_2);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(true);
        dateEdit_3->setFont(font3);
        dateEdit_3->setCalendarPopup(true);
        dateEdit_3->setDate(QDate(2018, 8, 13));

        horizontalLayout_2->addWidget(dateEdit_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 25);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_add = new QRadioButton(page_2);
        radioButton_add->setObjectName(QStringLiteral("radioButton_add"));
        radioButton_add->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_add);

        radioButton_sub = new QRadioButton(page_2);
        radioButton_sub->setObjectName(QStringLiteral("radioButton_sub"));
        radioButton_sub->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_sub);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 10);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spinBox_year = new QSpinBox(page_2);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setFont(font1);

        horizontalLayout_4->addWidget(spinBox_year);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        spinBox_month = new QSpinBox(page_2);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setFont(font1);

        horizontalLayout_4->addWidget(spinBox_month);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        spinBox_day = new QSpinBox(page_2);
        spinBox_day->setObjectName(QStringLiteral("spinBox_day"));
        spinBox_day->setFont(font1);

        horizontalLayout_4->addWidget(spinBox_day);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 2);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(4, 2);
        horizontalLayout_4->setStretch(5, 1);
        horizontalLayout_4->setStretch(6, 10);

        verticalLayout_2->addLayout(horizontalLayout_4);

        textEdit_out2 = new QTextEdit(page_2);
        textEdit_out2->setObjectName(QStringLiteral("textEdit_out2"));
        textEdit_out2->setEnabled(false);
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(false);
        font4.setWeight(50);
        textEdit_out2->setFont(font4);
        textEdit_out2->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(textEdit_out2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 3);
        verticalLayout_2->setStretch(3, 3);
        verticalLayout_2->setStretch(4, 3);
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 12);

        retranslateUi(Date);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Date);
    } // setupUi

    void retranslateUi(QWidget *Date)
    {
        Date->setWindowTitle(QApplication::translate("Date", "Form", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Date", "\346\267\273\345\212\240\346\210\226\345\207\217\345\216\273\345\244\251\346\225\260", Q_NULLPTR)
         << QApplication::translate("Date", "\346\227\245\346\234\237\344\271\213\351\227\264\347\232\204\347\233\270\351\232\224\346\227\266\351\227\264", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("Date", "\350\207\252", Q_NULLPTR));
        label_6->setText(QApplication::translate("Date", "\350\207\263", Q_NULLPTR));
        label->setText(QApplication::translate("Date", "\350\207\252", Q_NULLPTR));
        radioButton_add->setText(QApplication::translate("Date", "\346\267\273\345\212\240", Q_NULLPTR));
        radioButton_sub->setText(QApplication::translate("Date", "\345\207\217\345\216\273", Q_NULLPTR));
        label_2->setText(QApplication::translate("Date", "\345\271\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("Date", "\346\234\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("Date", "\346\227\245", Q_NULLPTR));
        textEdit_out2->setHtml(QApplication::translate("Date", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:17pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Date: public Ui_Date {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_H
