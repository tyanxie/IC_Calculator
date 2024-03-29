#include "game24.h"
#include "ui_game24.h"

Game24::Game24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game24)
{
    ui->setupUi(this);

    try_time = 0;

    changeQue();
}

Game24::~Game24()
{
    delete ui;
}

void Game24::changeQue(){
    ui->input1->setText("");
    ui->input2->setText("");
    ui->input3->setText("");
    ui->input4->setText("");
//    ui->output_answer->setText("");
//    ui->output_result->setText("");

    p.get_question();
    int *num = new int [4];
    num = p.get_num();
    ui->number1->setText(QString('0' + num[0]));
    ui->number2->setText(QString('0' + num[1]));
    ui->number3->setText(QString('0' + num[2]));
    ui->number4->setText(QString('0' + num[3]));
}

void Game24::on_input1_returnPressed()
{
    int n[4] = { ui->input1->text().toInt(), ui->input2->text().toInt(),
                 ui->input3->text().toInt(), ui->input4->text().toInt() };

    int *num = p.get_num();
    if(n[0] + n[1] + n[2] +n[3] != num[0] + num[1] + num[2] + num[3]){
        ui->output_answer->setText("");
        ui->output_result->setText("输入有误！请重新输入！");
        return;
    }

    char ch[3] = { ui->_operator1->currentText().toStdString()[0],
                   ui->_operator2->currentText().toStdString()[0],
                   ui->_operator3->currentText().toStdString()[0] };

    p.get_user_answer(n, ch);
    p.judge();

    QString qstr = QString::fromStdString(p.get_result());
    if(p.get_result() == "厉害嗷！我给的参考答案是："){
        try_time = 0;
        ui->output_result->setText(qstr);

        qstr = QString::fromStdString(p.get_suggested_answer());
        ui->output_answer->setText(qstr);
        changeQue();
    }
    else if(p.get_result() == "不太对嗷，我的参考答案是：" && try_time < 2){
        ++try_time;
        ui->output_result->setText("不太对嗷，再试试");
    }
    else {
        try_time = 0;
        ui->output_result->setText(qstr);

        qstr = QString::fromStdString(p.get_suggested_answer());
        ui->output_answer->setText(qstr);
        changeQue();
    }
}

void Game24::on_input2_returnPressed()
{
    this->on_input1_returnPressed();
}

void Game24::on_input3_returnPressed()
{
    this->on_input1_returnPressed();
}

void Game24::on_input4_returnPressed()
{
    this->on_input1_returnPressed();
}

void Game24::on_pushButton_clicked()
{
    emit please_Return();
}
