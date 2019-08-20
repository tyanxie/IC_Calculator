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
    this->setWindowIcon(QIcon(":/images/mainIco.ico"));
    new_date=new Date;
    new_science=new science;
    new_complex=new Complex;
    new_matrix = new Matrix;
    new_equation=new Equation;
    new_programmer=new Programmer;
    new_regression = new Regression;
    new_relationship=new Relationship;

    ui->stackedWidget->addWidget(new_date);
    ui->stackedWidget->addWidget(new_matrix);
    ui->stackedWidget->addWidget(new_science);
    ui->stackedWidget->addWidget(new_complex);
    ui->stackedWidget->addWidget(new_equation);
    ui->stackedWidget->addWidget(new_programmer);
    ui->stackedWidget->addWidget(new_regression);
    ui->stackedWidget->addWidget(new_relationship);

    ui->stackedWidget->setCurrentWidget(new_science);

    connect(ui->actiondate,&QAction::triggered,this,&Calculator::open_date);
    connect(ui->actionmatrix,&QAction::triggered,this,&Calculator::open_matrix);
    connect(ui->actionscience,&QAction::triggered,this,&Calculator::open_science);
    connect(ui->actioncomplex,&QAction::triggered,this,&Calculator::open_complex);
    connect(ui->actionequation,&QAction::triggered,this,&Calculator::open_equation);
    connect(ui->actionprogrammer,&QAction::triggered,this,&Calculator::open_programmer);
    connect(ui->actionregression,&QAction::triggered,this,&Calculator::open_regression);
    connect(ui->actionrelationship,&QAction::triggered,this,&Calculator::open_relationship);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::open_science()
{
    ui->stackedWidget->setCurrentWidget(new_science);
}

void Calculator::open_complex()
{
    ui->stackedWidget->setCurrentWidget(new_complex);
}

void Calculator::open_date()
{
    ui->stackedWidget->setCurrentWidget(new_date);
}

void Calculator::open_equation()
{
    ui->stackedWidget->setCurrentWidget(new_equation);
}

void Calculator::open_matrix()
{
    ui->stackedWidget->setCurrentWidget(new_matrix);
}

void Calculator::open_programmer()
{
        ui->stackedWidget->setCurrentWidget(new_programmer);
}

void Calculator::open_relationship(){
    ui->stackedWidget->setCurrentWidget(new_relationship);
}

void Calculator::open_regression(){
    ui->stackedWidget->setCurrentWidget(new_regression);
}
