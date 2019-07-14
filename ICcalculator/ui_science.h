/********************************************************************************
** Form generated from reading UI file 'science.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENCE_H
#define UI_SCIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_science
{
public:

    void setupUi(QWidget *science)
    {
        if (science->objectName().isEmpty())
            science->setObjectName(QStringLiteral("science"));
        science->resize(1200, 820);

        retranslateUi(science);

        QMetaObject::connectSlotsByName(science);
    } // setupUi

    void retranslateUi(QWidget *science)
    {
        science->setWindowTitle(QApplication::translate("science", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class science: public Ui_science {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENCE_H
