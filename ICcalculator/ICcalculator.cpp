#include "ICcalculator.h"
#include "ui_ICcalculator.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>
#include <QStackedWidget>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    new_science=new science;
    new_date=new Date;
    new_equation=new Equation;
    ui->stackedWidget->addWidget(new_science);
    ui->stackedWidget->addWidget(new_date);
    ui->stackedWidget->addWidget(new_equation);

    ui->stackedWidget->setCurrentWidget(new_science);

    connect(ui->actionscience,&QAction::triggered,this,&Calculator::open_science);
    connect(ui->actiondate,&QAction::triggered,this,&Calculator::open_date);
    connect(ui->actionequation,&QAction::triggered,this,&Calculator::open_equation);

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::open_date()
{
    ui->stackedWidget->setCurrentWidget(new_date);
}

void Calculator::open_science()
{
    ui->stackedWidget->setCurrentWidget(new_science);
}
void Calculator::open_equation()
{
    ui->stackedWidget->setCurrentWidget(new_equation);
}
