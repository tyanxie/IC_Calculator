#ifndef COMPLEX_H
#define COMPLEX_H

#include <QWidget>
#include "plural.h"

namespace Ui {
class Complex;
}

class Complex : public QWidget
{
    Q_OBJECT

public:
    explicit Complex(QWidget *parent = nullptr);
    bool is_all_numbers(const QString&);
    ~Complex();

private slots:
    void on_input_a_combo_currentIndexChanged(int);

    void on_input_b_combo_currentIndexChanged(int);

    void on_equal_push_pressed();

    void on_operator_combo_currentIndexChanged(int);

    void on_input_a1_textChanged(const QString &);

    void on_input_a2_textChanged(const QString &);

    void on_input_b1_textChanged(const QString &);

    void on_input_b2_textChanged(const QString &);

private:
    Ui::Complex *ui;
};

#endif // COMPLEX_H
