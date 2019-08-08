#ifndef EQUATION_H
#define EQUATION_H

#include <QWidget>
#include <math.h>
namespace Ui {
class Equation;
}

class Equation : public QWidget
{
    Q_OBJECT

public:
    explicit Equation(QWidget *parent = nullptr);
    ~Equation();

private slots:
    void on_One2_clicked(bool checked);

    void on_One3_clicked(bool checked);

    void on_Two_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Equation *ui;
};

#endif // EQUATION_H
