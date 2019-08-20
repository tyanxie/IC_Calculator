#ifndef PROMPT_H
#define PROMPT_H

#include <QDialog>

namespace Ui {
class Prompt;
}

class Prompt : public QDialog
{
    Q_OBJECT

public:
    explicit Prompt(QWidget *parent = nullptr);
    void changeMessage(QString message);
    ~Prompt();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Prompt *ui;
};

#endif // PROMPT_H
