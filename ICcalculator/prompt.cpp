#include "prompt.h"
#include "ui_prompt.h"

Prompt::Prompt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prompt)
{
    ui->setupUi(this);

    ui->message->setAlignment(Qt::AlignCenter);
    ui->message->setFont(QFont("楷体",24));
    ui->pushButton->setFont(QFont("楷体",24));
    ui->horizontalLayout->setStretch(0,1);
    ui->horizontalLayout->setStretch(1,1);
    ui->horizontalLayout->setStretch(2,1);
}

void Prompt::changeMessage(QString message){
    ui->message->setText(message);
}

Prompt::~Prompt()
{
    delete ui;
}

void Prompt::on_pushButton_clicked()
{
    this->hide();
}
