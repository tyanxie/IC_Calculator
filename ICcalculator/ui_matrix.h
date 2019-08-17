/********************************************************************************
** Form generated from reading UI file 'matrix.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIX_H
#define UI_MATRIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matrix
{
public:
    QWidget *a_input_grid;
    QGridLayout *a_input_gridLayout;
    QLabel *a_row_label;
    QLabel *a_column_label;
    QComboBox *a_row_combo;
    QComboBox *a_column_combo;
    QLabel *b_row_label;
    QComboBox *b_column_combo;
    QWidget *b_input_grid;
    QGridLayout *b_input_gridLayout;
    QComboBox *b_row_combo;
    QLabel *b_column_label;
    QComboBox *operator_combo;
    QWidget *output_grid;
    QGridLayout *output_gridLayout;

    void setupUi(QWidget *Matrix)
    {
        if (Matrix->objectName().isEmpty())
            Matrix->setObjectName(QStringLiteral("Matrix"));
        Matrix->resize(1200, 820);
        a_input_grid = new QWidget(Matrix);
        a_input_grid->setObjectName(QStringLiteral("a_input_grid"));
        a_input_grid->setGeometry(QRect(170, 0, 350, 350));
        a_input_gridLayout = new QGridLayout(a_input_grid);
        a_input_gridLayout->setSpacing(3);
        a_input_gridLayout->setObjectName(QStringLiteral("a_input_gridLayout"));
        a_row_label = new QLabel(Matrix);
        a_row_label->setObjectName(QStringLiteral("a_row_label"));
        a_row_label->setGeometry(QRect(10, 20, 91, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        a_row_label->setFont(font);
        a_column_label = new QLabel(Matrix);
        a_column_label->setObjectName(QStringLiteral("a_column_label"));
        a_column_label->setGeometry(QRect(10, 90, 91, 61));
        a_column_label->setFont(font);
        a_row_combo = new QComboBox(Matrix);
        a_row_combo->setObjectName(QStringLiteral("a_row_combo"));
        a_row_combo->setGeometry(QRect(100, 20, 61, 61));
        a_row_combo->setFont(font);
        a_column_combo = new QComboBox(Matrix);
        a_column_combo->setObjectName(QStringLiteral("a_column_combo"));
        a_column_combo->setGeometry(QRect(100, 90, 61, 61));
        a_column_combo->setFont(font);
        b_row_label = new QLabel(Matrix);
        b_row_label->setObjectName(QStringLiteral("b_row_label"));
        b_row_label->setGeometry(QRect(670, 20, 91, 61));
        b_row_label->setFont(font);
        b_column_combo = new QComboBox(Matrix);
        b_column_combo->setObjectName(QStringLiteral("b_column_combo"));
        b_column_combo->setGeometry(QRect(760, 90, 61, 61));
        b_column_combo->setFont(font);
        b_input_grid = new QWidget(Matrix);
        b_input_grid->setObjectName(QStringLiteral("b_input_grid"));
        b_input_grid->setGeometry(QRect(830, 0, 350, 350));
        b_input_gridLayout = new QGridLayout(b_input_grid);
        b_input_gridLayout->setSpacing(3);
        b_input_gridLayout->setObjectName(QStringLiteral("b_input_gridLayout"));
        b_input_gridLayout->setContentsMargins(9, 9, 9, 9);
        b_row_combo = new QComboBox(Matrix);
        b_row_combo->setObjectName(QStringLiteral("b_row_combo"));
        b_row_combo->setGeometry(QRect(760, 20, 61, 61));
        b_row_combo->setFont(font);
        b_column_label = new QLabel(Matrix);
        b_column_label->setObjectName(QStringLiteral("b_column_label"));
        b_column_label->setGeometry(QRect(670, 90, 91, 61));
        b_column_label->setFont(font);
        operator_combo = new QComboBox(Matrix);
        operator_combo->setObjectName(QStringLiteral("operator_combo"));
        operator_combo->setGeometry(QRect(600, 180, 71, 65));
        operator_combo->setFont(font);
        output_grid = new QWidget(Matrix);
        output_grid->setObjectName(QStringLiteral("output_grid"));
        output_grid->setEnabled(true);
        output_grid->setGeometry(QRect(100, 380, 1000, 350));
        output_gridLayout = new QGridLayout(output_grid);
        output_gridLayout->setSpacing(3);
        output_gridLayout->setObjectName(QStringLiteral("output_gridLayout"));

        retranslateUi(Matrix);

        QMetaObject::connectSlotsByName(Matrix);
    } // setupUi

    void retranslateUi(QWidget *Matrix)
    {
        Matrix->setWindowTitle(QApplication::translate("Matrix", "Form", Q_NULLPTR));
        a_row_label->setText(QApplication::translate("Matrix", "\350\241\214\346\225\260\357\274\232", Q_NULLPTR));
        a_column_label->setText(QApplication::translate("Matrix", "\345\210\227\346\225\260\357\274\232", Q_NULLPTR));
        a_row_combo->clear();
        a_row_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "1", Q_NULLPTR)
         << QApplication::translate("Matrix", "2", Q_NULLPTR)
         << QApplication::translate("Matrix", "3", Q_NULLPTR)
         << QApplication::translate("Matrix", "4", Q_NULLPTR)
         << QApplication::translate("Matrix", "5", Q_NULLPTR)
         << QApplication::translate("Matrix", "6", Q_NULLPTR)
         << QApplication::translate("Matrix", "7", Q_NULLPTR)
         << QApplication::translate("Matrix", "8", Q_NULLPTR)
         << QApplication::translate("Matrix", "9", Q_NULLPTR)
         << QApplication::translate("Matrix", "10", Q_NULLPTR)
        );
        a_column_combo->clear();
        a_column_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "1", Q_NULLPTR)
         << QApplication::translate("Matrix", "2", Q_NULLPTR)
         << QApplication::translate("Matrix", "3", Q_NULLPTR)
         << QApplication::translate("Matrix", "4", Q_NULLPTR)
         << QApplication::translate("Matrix", "5", Q_NULLPTR)
         << QApplication::translate("Matrix", "6", Q_NULLPTR)
         << QApplication::translate("Matrix", "7", Q_NULLPTR)
         << QApplication::translate("Matrix", "8", Q_NULLPTR)
         << QApplication::translate("Matrix", "9", Q_NULLPTR)
         << QApplication::translate("Matrix", "10", Q_NULLPTR)
        );
        b_row_label->setText(QApplication::translate("Matrix", "\350\241\214\346\225\260\357\274\232", Q_NULLPTR));
        b_column_combo->clear();
        b_column_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "1", Q_NULLPTR)
         << QApplication::translate("Matrix", "2", Q_NULLPTR)
         << QApplication::translate("Matrix", "3", Q_NULLPTR)
         << QApplication::translate("Matrix", "4", Q_NULLPTR)
         << QApplication::translate("Matrix", "5", Q_NULLPTR)
         << QApplication::translate("Matrix", "6", Q_NULLPTR)
         << QApplication::translate("Matrix", "7", Q_NULLPTR)
         << QApplication::translate("Matrix", "8", Q_NULLPTR)
         << QApplication::translate("Matrix", "9", Q_NULLPTR)
         << QApplication::translate("Matrix", "10", Q_NULLPTR)
        );
        b_row_combo->clear();
        b_row_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "1", Q_NULLPTR)
         << QApplication::translate("Matrix", "2", Q_NULLPTR)
         << QApplication::translate("Matrix", "3", Q_NULLPTR)
         << QApplication::translate("Matrix", "4", Q_NULLPTR)
         << QApplication::translate("Matrix", "5", Q_NULLPTR)
         << QApplication::translate("Matrix", "6", Q_NULLPTR)
         << QApplication::translate("Matrix", "7", Q_NULLPTR)
         << QApplication::translate("Matrix", "8", Q_NULLPTR)
         << QApplication::translate("Matrix", "9", Q_NULLPTR)
         << QApplication::translate("Matrix", "10", Q_NULLPTR)
        );
        b_column_label->setText(QApplication::translate("Matrix", "\345\210\227\346\225\260\357\274\232", Q_NULLPTR));
        operator_combo->clear();
        operator_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "\357\274\213", Q_NULLPTR)
         << QApplication::translate("Matrix", "\357\274\215", Q_NULLPTR)
         << QApplication::translate("Matrix", "\303\227", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Matrix: public Ui_Matrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIX_H
