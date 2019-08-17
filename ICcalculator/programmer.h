#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <QWidget>
#include "calculator_for_programmer.h"

namespace Ui {
class Programmer;
}

class Programmer : public QWidget
{
    Q_OBJECT

public:
    explicit Programmer(QWidget *parent = nullptr);
    ~Programmer();

private slots:

    void on_comboBox_activated(int index);

    void on_input_textChanged(const QString &arg1);

private:
    Ui::Programmer *ui;
};

#endif // PROGRAMMER_H
