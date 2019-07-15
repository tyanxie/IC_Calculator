#include "complex.h"
#include "ui_complex.h"

Complex::Complex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Complex)
{
    ui->setupUi(this);
}

Complex::~Complex()
{
    delete ui;
}
