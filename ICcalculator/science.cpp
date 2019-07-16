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
}

science::~science()
{
    delete ui;
}
