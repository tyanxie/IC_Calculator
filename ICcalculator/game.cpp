#include "game.h"
#include "game_points_twenty_four.h"
#include "ui_game.h"
#include <string>

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}

void Game::on_change_clicked()
{
    ui->change->setText("再来一发");
    ui->input1->setText("");
    ui->input2->setText("");
    ui->input3->setText("");
    ui->input4->setText("");
    ui->output_answer->setText("");
    ui->output_result->setText("");

    p.get_question();
    int *num = new int [4];
    num = p.get_num();
    ui->number1->setText(QString('0' + num[0]));
    ui->number2->setText(QString('0' + num[1]));
    ui->number3->setText(QString('0' + num[2]));
    ui->number4->setText(QString('0' + num[3]));
}

void Game::on_input4_returnPressed()
{
    int n[4] = { ui->input1->text().toInt(), ui->input2->text().toInt(),
                 ui->input3->text().toInt(), ui->input4->text().toInt() };
    char ch[3] = { ui->_operator1->currentText().toStdString()[0],
                   ui->_operator2->currentText().toStdString()[0],
                   ui->_operator3->currentText().toStdString()[0] };
    p.get_user_answer(n, ch);
    p.judge();

    QString qstr = QString::fromStdString(p.get_result());
    ui->output_result->setText(qstr);

    qstr = QString::fromStdString(p.get_suggested_answer());
    ui->output_answer->setText(qstr);

}
