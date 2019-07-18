#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <QWidget>

namespace Ui {
class Programmer;
}

class Programmer : public QWidget
{
    Q_OBJECT

public:
    explicit Programmer(QWidget *parent = nullptr);
    ~Programmer();

private:
    Ui::Programmer *ui;
};

#endif // PROGRAMMER_H
