#ifndef SCIENCE_H
#define SCIENCE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class science;
}

class science : public QWidget
{
    Q_OBJECT

public:
    explicit science(QWidget *parent = nullptr);
    ~science();

private:
    Ui::science *ui;
    QLabel *label;
};

#endif // SCIENCE_H
