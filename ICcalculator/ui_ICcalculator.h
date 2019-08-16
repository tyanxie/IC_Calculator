/********************************************************************************
** Form generated from reading UI file 'ICcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICCALCULATOR_H
#define UI_ICCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *actionscience;
    QAction *actionprogrammer;
    QAction *actionrelationship;
    QAction *actionequation;
    QAction *actiondate;
    QAction *actioncomplex;
    QAction *actionregression;
    QAction *actiongame;
    QAction *actionmatrix;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(1200, 900);
        Calculator->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        actionscience = new QAction(Calculator);
        actionscience->setObjectName(QStringLiteral("actionscience"));
        actionscience->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/science.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionscience->setIcon(icon);
        actionprogrammer = new QAction(Calculator);
        actionprogrammer->setObjectName(QStringLiteral("actionprogrammer"));
        actionprogrammer->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/programmer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionprogrammer->setIcon(icon1);
        actionrelationship = new QAction(Calculator);
        actionrelationship->setObjectName(QStringLiteral("actionrelationship"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/relationship.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionrelationship->setIcon(icon2);
        actionequation = new QAction(Calculator);
        actionequation->setObjectName(QStringLiteral("actionequation"));
        actionequation->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/binary.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionequation->setIcon(icon3);
        actiondate = new QAction(Calculator);
        actiondate->setObjectName(QStringLiteral("actiondate"));
        actiondate->setCheckable(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/date2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actiondate->setIcon(icon4);
        actioncomplex = new QAction(Calculator);
        actioncomplex->setObjectName(QStringLiteral("actioncomplex"));
        actioncomplex->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/complex.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actioncomplex->setIcon(icon5);
        actionregression = new QAction(Calculator);
        actionregression->setObjectName(QStringLiteral("actionregression"));
        actionregression->setCheckable(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/maxt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionregression->setIcon(icon6);
        actiongame = new QAction(Calculator);
        actiongame->setObjectName(QStringLiteral("actiongame"));
        actiongame->setCheckable(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/game.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actiongame->setIcon(icon7);
        actionmatrix = new QAction(Calculator);
        actionmatrix->setObjectName(QStringLiteral("actionmatrix"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/matrix2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionmatrix->setIcon(icon8);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 820));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 17));
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        mainToolBar->addAction(actionscience);
        mainToolBar->addAction(actionprogrammer);
        mainToolBar->addAction(actionrelationship);
        mainToolBar->addAction(actiondate);
        mainToolBar->addAction(actionequation);
        mainToolBar->addAction(actioncomplex);
        mainToolBar->addAction(actionmatrix);
        mainToolBar->addAction(actionregression);
        mainToolBar->addAction(actiongame);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        actionscience->setText(QApplication::translate("Calculator", "\347\247\221\345\255\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionscience->setToolTip(QApplication::translate("Calculator", "\347\247\221\345\255\246", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionprogrammer->setText(QApplication::translate("Calculator", "\347\250\213\345\272\217\345\221\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionprogrammer->setToolTip(QApplication::translate("Calculator", "\347\250\213\345\272\217\345\221\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionrelationship->setText(QApplication::translate("Calculator", "\350\276\210\345\210\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionrelationship->setToolTip(QApplication::translate("Calculator", "\350\276\210\345\210\206\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionequation->setText(QApplication::translate("Calculator", "\350\247\243\346\226\271\347\250\213", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionequation->setToolTip(QApplication::translate("Calculator", "\344\272\214\345\205\203\344\270\200\346\254\241\344\270\200\345\205\203\344\272\214\346\254\241", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actiondate->setText(QApplication::translate("Calculator", "\346\227\245\346\234\237\350\256\241\347\256\227", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiondate->setToolTip(QApplication::translate("Calculator", "\346\227\245\346\234\237\350\256\241\347\256\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actioncomplex->setText(QApplication::translate("Calculator", "\345\244\215\346\225\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actioncomplex->setToolTip(QApplication::translate("Calculator", "\345\244\215\346\225\260\350\256\241\347\256\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionregression->setText(QApplication::translate("Calculator", "\345\233\236\345\275\222\345\210\206\346\236\220", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionregression->setToolTip(QApplication::translate("Calculator", "\345\233\236\345\275\222\345\210\206\346\236\220", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actiongame->setText(QApplication::translate("Calculator", "\345\260\217\346\270\270\346\210\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiongame->setToolTip(QApplication::translate("Calculator", "\345\260\217\346\270\270\346\210\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionmatrix->setText(QApplication::translate("Calculator", "\347\237\251\351\230\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICCALCULATOR_H
