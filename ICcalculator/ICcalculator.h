#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include "science.h"
#include "complex.h"
#include "relationship.h"
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
    void open_relationship();

private:
    Ui::Calculator *ui;
    science *new_science;
    Complex *new_complex;
    Relationship *new_relationship;
};

#endif // CALCULATOR_H
