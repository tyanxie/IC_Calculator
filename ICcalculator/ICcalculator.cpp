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
    new_programmer=new Programmer;
    ui->stackedWidget->addWidget(new_science);
    ui->stackedWidget->setCurrentWidget(new_science);
    ui->stackedWidget->addWidget(new_programmer);

    connect(ui->actionprogrammer,&QAction::triggered,this,&Calculator::open_programmer);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::open_programmer()
{
        ui->stackedWidget->setCurrentWidget(new_programmer);
}
