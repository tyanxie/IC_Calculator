#ifndef MATRIX_H
#define MATRIX_H

#include <QLabel>
#include <QWidget>
#include <QLineEdit>

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
    void on_a_row_combo_currentIndexChanged(int);

private:
    Ui::Matrix *ui;

    int a_last_row_length,a_last_colunm_length;

    int b_last_row_length,b_last_column_length;

    int output_last_row_length,output_last_column_length;

    QLineEdit **a_input_LineEdit;
    QLineEdit **b_input_LineEdit;

    QLabel **output_Label;

    void iniUI();
    void compute();
};

#endif // MATRIX_H
