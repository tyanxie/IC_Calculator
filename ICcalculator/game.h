#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "calculator_game.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:


    void on_startbutton_clicked();

    void on_answer_returnPressed();

private:
    Ui::Game *ui;
    game_for_calculator g;
};

#endif // GAME_H
