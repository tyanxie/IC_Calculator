#ifndef MATRIX_BOTTOM_H
#define MATRIX_BOTTOM_H

#include <iostream>
#include <QLineEdit>

class Matrix_bottom
{
private:
    int row;
    int column;
    double** data;

public:
    Matrix_bottom();
    Matrix_bottom(int, int,QLineEdit**);
    Matrix_bottom(const Matrix_bottom&);
    ~Matrix_bottom();
    Matrix_bottom& operator=(const Matrix_bottom&);
    void set(const QLineEdit**);
    Matrix_bottom operator+(const Matrix_bottom&)const;
    Matrix_bottom operator-(const Matrix_bottom&)const;
    Matrix_bottom operator*(const Matrix_bottom&)const;
    Matrix_bottom operator*(double)const;
    double* operator[](int)const;
    inline int get_row()const{
        return this->row;
    }
    inline int get_column()const{
        return this->column;
    }
};

#endif // MATRIX_BOTTOM_H
