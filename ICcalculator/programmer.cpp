#include "programmer.h"
#include "ui_programmer.h"

Programmer::Programmer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Programmer)
{
    ui->setupUi(this);
}

Programmer::~Programmer()
{
    delete ui;
}
