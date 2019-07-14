#include "ICcalculator.h"
#include "ui_ICcalculator.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    new_science=new science;
    ui->stackedWidget->addWidget(new_science);
    ui->stackedWidget->setCurrentWidget(new_science);
}

Calculator::~Calculator()
{
    delete ui;
}
