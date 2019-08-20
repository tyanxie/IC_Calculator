#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "science.h"
#include "complex.h"
#include "date.h"
#include "equation.h"
#include "matrix.h"
#include "programmer.h"
#include "relationship.h"
#include "regression.h"
namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void open_date();
    void open_matrix();
    void open_complex();
    void open_science();
    void open_equation();
    void open_programmer();
    void open_regression();
    void open_relationship();

private:
    Ui::Calculator *ui;
    Date *new_date;
    Matrix *new_matrix;
    science *new_science;
    Complex *new_complex;
    Equation *new_equation;
    Programmer *new_programmer;
    Regression *new_regression;
    Relationship *new_relationship;
};

#endif // CALCULATOR_H
