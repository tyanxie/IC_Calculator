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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matrix
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *a_row_label;
    QComboBox *a_row_combo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *a_column_label;
    QComboBox *a_column_combo;
    QSpacerItem *verticalSpacer_3;
    QWidget *a_input_grid;
    QGridLayout *a_input_gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QComboBox *operator_combo;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *b_row_label;
    QComboBox *b_row_combo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *b_column_label;
    QComboBox *b_column_combo;
    QSpacerItem *verticalSpacer_4;
    QWidget *b_input_grid;
    QGridLayout *b_input_gridLayout;
    QWidget *output_grid;
    QGridLayout *output_gridLayout;

    void setupUi(QWidget *Matrix)
    {
        if (Matrix->objectName().isEmpty())
            Matrix->setObjectName(QStringLiteral("Matrix"));
        Matrix->resize(1200, 820);
        gridLayout = new QGridLayout(Matrix);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(Matrix);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1180, 800));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        a_row_label = new QLabel(scrollAreaWidgetContents_2);
        a_row_label->setObjectName(QStringLiteral("a_row_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(a_row_label->sizePolicy().hasHeightForWidth());
        a_row_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        a_row_label->setFont(font);

        horizontalLayout->addWidget(a_row_label);

        a_row_combo = new QComboBox(scrollAreaWidgetContents_2);
        a_row_combo->setObjectName(QStringLiteral("a_row_combo"));
        a_row_combo->setMinimumSize(QSize(0, 60));
        a_row_combo->setMaximumSize(QSize(60, 16777215));
        a_row_combo->setSizeIncrement(QSize(0, 0));
        a_row_combo->setFont(font);

        horizontalLayout->addWidget(a_row_combo);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        a_column_label = new QLabel(scrollAreaWidgetContents_2);
        a_column_label->setObjectName(QStringLiteral("a_column_label"));
        sizePolicy.setHeightForWidth(a_column_label->sizePolicy().hasHeightForWidth());
        a_column_label->setSizePolicy(sizePolicy);
        a_column_label->setFont(font);

        horizontalLayout_2->addWidget(a_column_label);

        a_column_combo = new QComboBox(scrollAreaWidgetContents_2);
        a_column_combo->setObjectName(QStringLiteral("a_column_combo"));
        a_column_combo->setMinimumSize(QSize(0, 60));
        a_column_combo->setMaximumSize(QSize(60, 16777215));
        a_column_combo->setSizeIncrement(QSize(0, 0));
        a_column_combo->setFont(font);

        horizontalLayout_2->addWidget(a_column_combo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 5);

        horizontalLayout_5->addLayout(verticalLayout_2);

        a_input_grid = new QWidget(scrollAreaWidgetContents_2);
        a_input_grid->setObjectName(QStringLiteral("a_input_grid"));
        a_input_gridLayout = new QGridLayout(a_input_grid);
        a_input_gridLayout->setSpacing(3);
        a_input_gridLayout->setObjectName(QStringLiteral("a_input_gridLayout"));

        horizontalLayout_5->addWidget(a_input_grid);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        operator_combo = new QComboBox(scrollAreaWidgetContents_2);
        operator_combo->setObjectName(QStringLiteral("operator_combo"));
        operator_combo->setMinimumSize(QSize(0, 60));
        operator_combo->setMaximumSize(QSize(60, 60));
        operator_combo->setFont(font);

        verticalLayout->addWidget(operator_combo);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        b_row_label = new QLabel(scrollAreaWidgetContents_2);
        b_row_label->setObjectName(QStringLiteral("b_row_label"));
        sizePolicy.setHeightForWidth(b_row_label->sizePolicy().hasHeightForWidth());
        b_row_label->setSizePolicy(sizePolicy);
        b_row_label->setFont(font);

        horizontalLayout_3->addWidget(b_row_label);

        b_row_combo = new QComboBox(scrollAreaWidgetContents_2);
        b_row_combo->setObjectName(QStringLiteral("b_row_combo"));
        b_row_combo->setMinimumSize(QSize(0, 60));
        b_row_combo->setMaximumSize(QSize(60, 16777215));
        b_row_combo->setSizeIncrement(QSize(0, 0));
        b_row_combo->setFont(font);

        horizontalLayout_3->addWidget(b_row_combo);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        b_column_label = new QLabel(scrollAreaWidgetContents_2);
        b_column_label->setObjectName(QStringLiteral("b_column_label"));
        sizePolicy.setHeightForWidth(b_column_label->sizePolicy().hasHeightForWidth());
        b_column_label->setSizePolicy(sizePolicy);
        b_column_label->setFont(font);

        horizontalLayout_4->addWidget(b_column_label);

        b_column_combo = new QComboBox(scrollAreaWidgetContents_2);
        b_column_combo->setObjectName(QStringLiteral("b_column_combo"));
        b_column_combo->setMinimumSize(QSize(0, 60));
        b_column_combo->setMaximumSize(QSize(60, 16777215));
        b_column_combo->setSizeIncrement(QSize(60, 0));
        b_column_combo->setFont(font);

        horizontalLayout_4->addWidget(b_column_combo);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 5);

        horizontalLayout_5->addLayout(verticalLayout_3);

        b_input_grid = new QWidget(scrollAreaWidgetContents_2);
        b_input_grid->setObjectName(QStringLiteral("b_input_grid"));
        b_input_gridLayout = new QGridLayout(b_input_grid);
        b_input_gridLayout->setSpacing(3);
        b_input_gridLayout->setObjectName(QStringLiteral("b_input_gridLayout"));
        b_input_gridLayout->setContentsMargins(9, 9, 9, 9);

        horizontalLayout_5->addWidget(b_input_grid);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 6);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);
        horizontalLayout_5->setStretch(4, 6);

        verticalLayout_4->addLayout(horizontalLayout_5);

        output_grid = new QWidget(scrollAreaWidgetContents_2);
        output_grid->setObjectName(QStringLiteral("output_grid"));
        output_grid->setEnabled(true);
        output_gridLayout = new QGridLayout(output_grid);
        output_gridLayout->setSpacing(3);
        output_gridLayout->setObjectName(QStringLiteral("output_gridLayout"));
        output_gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout_4->addWidget(output_grid);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 3);
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Matrix);

        QMetaObject::connectSlotsByName(Matrix);
    } // setupUi

    void retranslateUi(QWidget *Matrix)
    {
        Matrix->setWindowTitle(QApplication::translate("Matrix", "Form", Q_NULLPTR));
        a_row_label->setText(QApplication::translate("Matrix", "\350\241\214\346\225\260\357\274\232", Q_NULLPTR));
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
        a_column_label->setText(QApplication::translate("Matrix", "\345\210\227\346\225\260\357\274\232", Q_NULLPTR));
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
        operator_combo->clear();
        operator_combo->insertItems(0, QStringList()
         << QApplication::translate("Matrix", "\357\274\213", Q_NULLPTR)
         << QApplication::translate("Matrix", "\357\274\215", Q_NULLPTR)
         << QApplication::translate("Matrix", "\303\227", Q_NULLPTR)
        );
        b_row_label->setText(QApplication::translate("Matrix", "\350\241\214\346\225\260\357\274\232", Q_NULLPTR));
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
    } // retranslateUi

};

namespace Ui {
    class Matrix: public Ui_Matrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIX_H
