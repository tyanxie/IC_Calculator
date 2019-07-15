#ifndef COMPLEX_H
#define COMPLEX_H

#include <QWidget>

namespace Ui {
class Complex;
}

class Complex : public QWidget
{
    Q_OBJECT

public:
    explicit Complex(QWidget *parent = nullptr);
    ~Complex();

private:
    Ui::Complex *ui;
};

#endif // COMPLEX_H
