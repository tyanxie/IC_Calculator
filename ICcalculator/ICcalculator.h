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
#include "game.h"
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
    void open_complex();
    void open_date();
    void open_science();
    void open_equation();
    void open_matrix();
    void open_programmer();
    void open_relationship();
    void open_game();

private:
    Ui::Calculator *ui;
    science *new_science;
    Complex *new_complex;
    Date *new_date;
    Equation *new_equation;
    Matrix *new_matrix;
    Programmer *new_programmer;
    Relationship *new_relationship;
    Game *new_game;
};

#endif // CALCULATOR_H
