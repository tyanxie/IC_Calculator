#ifndef GAME24_H
#define GAME24_H

#include <QWidget>
#include "game_points_twenty_four.h"

namespace Ui {
class Game24;
}

class Game24 : public QWidget
{
    Q_OBJECT

signals:
    void please_Return();

public:
    explicit Game24(QWidget *parent = nullptr);
    ~Game24();

private slots:
    void on_input1_returnPressed();

    void on_input2_returnPressed();

    void on_input3_returnPressed();

    void on_input4_returnPressed();

    void on_pushButton_clicked();

private:
    Ui::Game24 *ui;
    points_twenty_four p;
    int try_time;

    void changeQue();
};

#endif // GAME24_H
