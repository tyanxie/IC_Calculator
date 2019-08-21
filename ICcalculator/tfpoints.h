#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "game_points_twenty_four.h"

namespace Ui {
class Game24;
}

class Game24 : public QWidget
{
    Q_OBJECT

public:
    explicit Game24(QWidget *parent = nullptr);
    ~Game24();

private slots:
    void on_change_clicked();

    void on_input4_returnPressed();

private:
    Ui::Game24 *ui;
    points_twenty_four p;
};

#endif // GAME_H
