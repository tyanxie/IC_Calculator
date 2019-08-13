#include "game.h"
#include "ui_game.h"
#include "calculator_game.h"
#include <cmath>

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


void Game::on_startbutton_clicked()
{
    ui->startbutton->setText("再来一发");

    g.get_equation();

    QString lop = QString::number(g.get_left_operand());
    ui->left_operand->setText(lop);

    ui->_operator->setText(QString(g.get_operator()));

    QString rop = QString::number(g.get_right_operand());
    ui->right_operand->setText(rop);
}

void Game::on_answer_returnPressed()
{

    if (fabs(ui->answer->text().toDouble() - g.get_result()) < 0.01) {
        ui->result->setText("厉害嗷！答案是：");
        QString ra = QString::number(g.get_result());
        ui->realanswer->setText(ra);
    }
    else {
        ui->result->setText("不太对嗷，答案应该是：");
        QString ra = QString::number(g.get_result());
        ui->realanswer->setText(ra);
    }
}
