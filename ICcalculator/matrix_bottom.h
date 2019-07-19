#ifndef MATRIX_BOTTOM_H
#define MATRIX_BOTTOM_H

#include <iostream>

class Matrix_bottom
{
private:
    int row;
    int column;
    double** data;

public:
    Matrix_bottom(int = 0, int = 0);
    Matrix_bottom(const Matrix_bottom&);
    ~Matrix_bottom();
    Matrix_bottom& operator=(const Matrix_bottom&);
    Matrix_bottom operator+(const Matrix_bottom&)const;
    Matrix_bottom operator-(const Matrix_bottom&)const;
    Matrix_bottom operator*(const Matrix_bottom&)const;
    Matrix_bottom operator*(double)const;
    double* operator[](int)const;
};

#endif // MATRIX_BOTTOM_H
