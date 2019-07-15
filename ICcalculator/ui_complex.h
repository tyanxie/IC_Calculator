/********************************************************************************
** Form generated from reading UI file 'complex.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLEX_H
#define UI_COMPLEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Complex
{
public:

    void setupUi(QWidget *Complex)
    {
        if (Complex->objectName().isEmpty())
            Complex->setObjectName(QStringLiteral("Complex"));
        Complex->resize(1200, 820);

        retranslateUi(Complex);

        QMetaObject::connectSlotsByName(Complex);
    } // setupUi

    void retranslateUi(QWidget *Complex)
    {
        Complex->setWindowTitle(QApplication::translate("Complex", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Complex: public Ui_Complex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLEX_H
