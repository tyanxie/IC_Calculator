#ifndef MATRIX_H
#define MATRIX_H

#include <QLabel>
#include <QWidget>
#include <QLineEdit>

const QSizePolicy sizepolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);

namespace Ui {
class Matrix;
}

class Matrix : public QWidget
{
    Q_OBJECT

public:
    explicit Matrix(QWidget *parent = nullptr);
    ~Matrix();

private slots:

    void on_operator_combo_currentIndexChanged(int);

    void on_a_row_combo_currentIndexChanged(int index);

    void on_a_column_combo_currentIndexChanged(int index);

    void on_b_row_combo_currentIndexChanged(int index);

    void on_b_column_combo_currentIndexChanged(int index);

private:
    Ui::Matrix *ui;

    int a_last_row_length,a_last_column_length;

    int b_last_row_length,b_last_column_length;

    int output_last_row_length,output_last_column_length;

    QLineEdit **a_input_LineEdit;
    QLineEdit **b_input_LineEdit;

    QLabel **output_Label;

    QLabel *error_Label;

    static bool flag;

    void iniUI();
    void compute();
    void construct_output(int ,int);
};

#endif // MATRIX_H
