#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "game_points_twenty_four.h"

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
    void on_change_clicked();

    void on_input4_returnPressed();

private:
    Ui::Game *ui;
    points_twenty_four p;
};

#endif // GAME_H
