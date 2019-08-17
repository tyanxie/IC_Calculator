#include <exception>
#include "matrix_bottom.h"

Matrix_bottom::Matrix_bottom(){
    this->row = 0;
    this->column = 0;
    this->data = new double* [this->row];
    for (int i = 0; i < this->row; i++)
        this->data[i] = new double[this->column];
}

Matrix_bottom::Matrix_bottom(int r, int c, QLineEdit **lineEdit) {
    this->row = r;
    this->column = c;
    this->data = new double* [this->row];
    for (int i = 0; i < this->row; i++){
        this->data[i] = new double[this->column];
        for(int j = 0; j < this->column; ++j)
            this->data[i][j] = lineEdit[i][j].text().toDouble();
    }
}

Matrix_bottom::Matrix_bottom(const Matrix_bottom& m) {
    this->row = m.row;
    this->column = m.column;
    this->data = new double* [this->row];
    for (int i = 0; i < this->row; i++)
    {
        this->data[i] = new double[this->column];
        for (int j = 0; j < this->column; j++)
            this->data[i][j] = m.data[i][j];
    }
}

Matrix_bottom::~Matrix_bottom() {
    for (int i = 0; i < this->row; i++)
        delete[] this->data[i];
    delete[] this->data;
}

Matrix_bottom& Matrix_bottom::operator=(const Matrix_bottom& m) {
    if (&m == this)
        return *this;
    for (int i = 0; i < row; i++)
        delete[] this->data[i];
    delete[] this->data;
    this->row = m.row;
    this->column = m.column;
    this->data = new double* [this->row];
    for (int i = 0; i < this->row; i++)
    {
        this->data[i] = new double[this->column];
        for (int j = 0; j < this->column; j++)
            this->data[i][j] = m.data[i][j];
    }
    return *this;
}

Matrix_bottom Matrix_bottom::operator+(const Matrix_bottom& m)const {
    if (!(this->row == m.row && this->column == m.column))
        throw QString("行列必须对应相等");
    Matrix_bottom new_m;
    new_m.row = this->row;
    new_m.column = this->column;
    new_m.data = new double* [new_m.row];
    for (int i = 0; i < new_m.row; i++)
    {
        new_m.data[i] = new double[new_m.column];
        for (int j = 0; j < new_m.column; j++)
            new_m.data[i][j] = this->data[i][j] + m.data[i][j];
    }
    return new_m;
}

Matrix_bottom Matrix_bottom::operator-(const Matrix_bottom& m)const {
    if (!(this->row == m.row && this->column == m.column))
        throw QString("行列必须对应相等");
    Matrix_bottom new_m;
    new_m.row = this->row;
    new_m.column = this->column;
    new_m.data = new double* [new_m.row];
    for (int i = 0; i < new_m.row; i++)
    {
        new_m.data[i] = new double[new_m.column];
        for (int j = 0; j < new_m.column; j++)
            new_m.data[i][j] = this->data[i][j] - m.data[i][j];
    }
    return new_m;
}

Matrix_bottom Matrix_bottom::operator*(const Matrix_bottom& m)const {
    if (this->row == 1 && this->column == 1)
        return m * this->data[0][0];
    else if (m.row == 1 && m.column == 1)
        return *this * m.data[0][0];
    else if (this->column != m.row)
        throw QString("左矩阵的列数应当等于右矩阵的行数");
    Matrix_bottom new_m;
    new_m.row = this->row;
    new_m.column = m.column;
    new_m.data = new double* [new_m.row];
    for (int i = 0; i < new_m.column; i++) {
        new_m.data[i] = new double[new_m.column];
        for (int j = 0; j < new_m.column; j++) {
            new_m.data[i][j] = 0;
            for (int k = 0; k < this->column; k++)
                new_m.data[i][j] += this->data[i][k] * m.data[k][j];
        }
    }
    return new_m;
}

Matrix_bottom Matrix_bottom::operator*(double m)const {
    Matrix_bottom new_m;
    new_m.row = this->row;
    new_m.column = this->column;
    new_m.data = new double* [new_m.row];
    for (int i = 0; i < new_m.row; i++)
    {
        new_m.data[i] = new double[new_m.column];
        for (int j = 0; j < new_m.column; j++)
            new_m.data[i][j] = m * this->data[i][j];
    }
    return new_m;
}

double* Matrix_bottom::operator[](int index)const {
    return this->data[index];
}
