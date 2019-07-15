#include "science.h"
#include "ui_science.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>

science::science(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::science)
{
    ui->setupUi(this);
    label=new QLabel(this);
    label->setText("Hello World");
    label->move(370,250);
    QFont ft;
    ft.setPointSize(100);
    label->setFont(ft);
}

science::~science()
{
    delete ui;
}
