#include "programmer.h"
#include "ui_programmer.h"
#include "calculator_for_programmer.h"
#include <iomanip>
#include <QByteArray>

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

void Programmer::on_comboBox_activated(int index)
{
    if(index == 0){
        ui->indication->setText("二进制");
        ui->indication->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    else if(index == 1){
        ui->indication->setText("八进制");
        ui->indication->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    else if(index == 2){
        ui->indication->setText("十进制");
        ui->indication->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    else if(index == 3){
        ui->indication->setText("十六进制");
        ui->indication->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}

void Programmer::on_input_textChanged(const QString &arg1)
{
    char *ni;
    ni = new char [arg1.length() + 1];
    QByteArray ba = arg1.toLatin1();
    ni = ba.data();
    calculator_for_programmer c(ni);
    switch (ui->comboBox->currentIndex()) {
    case 0:
        c.setma(2);
        break;
    case 1:
        c.setma(8);
        break;
    case 2:
        c.setma(10);
        break;
    case 3:
        c.setma(16);
        break;
    }
    c.operation_for_num();
    if(c.getflag()){
        ui->bin_output->setText(QString("Error!!!"));
        ui->oct_output->setText(QString("Error!!!"));
        ui->dec_output->setText(QString("Error!!!"));
        ui->hex_output->setText(QString("Error!!!"));
    }
    else {
        ui->bin_output->setText(QString(c.num_bin));
        ui->oct_output->setText(QString(c.num_oct));
        ui->dec_output->setText(QString(c.num_dec));
        ui->hex_output->setText(QString(c.num_hex));
    }
    delete[] ni;
}
