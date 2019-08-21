#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include "calculator_game.h"

namespace Ui {
class Game;
}

struct Time{
    int msecond;
    int second;
    int minute;
    Time(){
        msecond = second = minute = 0;
    }
    void clear(){
        msecond = 0;
        second = 0;
        minute = 0;
    }
};

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void upDate();

    void on_answer_returnPressed();

    void on_start_clicked();

private:
    Ui::Game *ui;
    game_for_calculator g;
    QTimer *timer;
    int try_time;
    int correct_number;
    Time newtime;

    void changeQue();
    void addOneMs(Time& time);
};

#endif // GAME_H
