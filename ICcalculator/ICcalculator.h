#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "science.h"
#include "complex.h"
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
    void open_science();
    void open_complex();
    void open_regression();

private:
    Ui::Calculator *ui;
    science *new_science;
    Complex *new_complex;
    Regression *new_regression;
};

#endif // CALCULATOR_H
