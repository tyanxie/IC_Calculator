#include "game.h"
#include "ui_game.h"
#include "calculator_game.h"
#include <cmath>

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);

    try_time = 0;
    correct_number = 0;

    ui->stackedWidget->setCurrentWidget(ui->page);

    timer = new QTimer;
    timer->start(10);
    connect(timer,SIGNAL(timeout()),this,SLOT(upDate()));
}

Game::~Game()
{
    delete ui;
}


void Game::changeQue()
{
    try_time = 0;

    newtime.clear();

    ui->answer->setText("");

    g.get_equation();

    QString lop = QString::number(g.get_left_operand());
    ui->left_operand->setText(lop);

    ui->_operator->setText(QString(g.get_operator()));

    QString rop = QString::number(g.get_right_operand());
    ui->right_operand->setText(rop);
}

void Game::on_answer_returnPressed()
{
    Time now;
    now.msecond = ui->msecond_cal->text().toInt();
    now.second = ui->second_cal->text().toInt();
    now.minute = ui->minute_cal->text().toInt();

    if (fabs(ui->answer->text().toDouble() - g.get_result()) < 0.01) {
        ui->result->setText("厉害嗷！答案是：");
        QString ra = QString::asprintf("%.5lf", g.get_result());
        ui->realanswer->setText(ra);

        if((newtime.minute < now.minute )||
                (newtime.minute == now.minute && newtime.second < now.second)||
                (newtime.minute == now.minute && newtime.second == now.second &&
                 newtime.minute < now.msecond))
        {
            if(newtime.msecond<10)
                ui->msecond_cal->setText(QString::asprintf("0%d",newtime.msecond));
            else
                ui->msecond_cal->setText(QString::asprintf("%d",newtime.msecond));

            if(newtime.second<10)
                ui->second_cal->setText(QString::asprintf("0%d",newtime.second));
            else
                ui->second_cal->setText(QString::asprintf("%d",newtime.second));

            if(newtime.minute<10)
                ui->minute_cal->setText(QString::asprintf("0%d",newtime.minute));
            else
                ui->minute_cal->setText(QString::asprintf("%d",newtime.minute));
        }

        ++correct_number;
        ui->correct->setText(QString::asprintf("%d",correct_number));

        this->changeQue();
    }
    else if(try_time < 2){
        correct_number = 0;
        ui->correct->setText(QString::asprintf("%d",correct_number));
        ui->result->setText("不太对嗷，再试试看");
        ui->realanswer->setText("");

        ui->minute->setText("00");
        ui->second->setText("00");
        ui->msecond->setText("00");

        ++try_time;
    }
    else{
        correct_number = 0;
        ui->correct->setText(QString::asprintf("%d",correct_number));
        ui->result->setText("不太对嗷，答案应该是：");
        QString ra = QString::asprintf("%.5lf", g.get_result());
        ui->realanswer->setText(ra);

        ui->minute->setText("00");
        ui->second->setText("00");
        ui->msecond->setText("00");

        this->changeQue();
    }


}

void Game::upDate(){
    Time time;

    time.msecond = ui->msecond->text().toInt();
    time.second = ui->second->text().toInt();
    time.minute = ui->minute->text().toInt();

    this->addOneMs(time);
    this->addOneMs(newtime);

    if(time.msecond<10)
        ui->msecond->setText(QString::asprintf("0%d",time.msecond));
    else
        ui->msecond->setText(QString::asprintf("%d",time.msecond));

    if(time.second<10)
        ui->second->setText(QString::asprintf("0%d",time.second));
    else
        ui->second->setText(QString::asprintf("%d",time.second));

    if(time.minute<10)
        ui->minute->setText(QString::asprintf("0%d",time.minute));
    else
        ui->minute->setText(QString::asprintf("%d",time.minute));
}

void Game::on_start_clicked()
{
    ui->minute->setText("00");
    ui->second->setText("00");
    ui->msecond->setText("00");
    ui->stackedWidget->setCurrentWidget(ui->page_2);

    this->changeQue();
}

void Game::addOneMs(Time &time){
    ++time.msecond;

    if(time.msecond > 99){
        time.msecond = 0;
        time.second++;
    }
    if(time.second > 59){
        time.second = 0;
        ++time.minute;
    }
}
