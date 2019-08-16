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

private slots:
    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_Add_clicked();

    void on_Leftbracket_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Subtract_clicked();

    void on_Rightbracket_clicked();

    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Multiple_clicked();

    void on_Backspace_clicked();

    void on_Zero_clicked();

    void on_Point_clicked();

    void on_Divide_clicked();

    void on_Clear_clicked();

    void on_Equal_clicked();

    //将中缀表达式的数字和运算符分离
        QQueue<QString> prefixExpression(const QString& exp);
        //将中缀队列转换为后缀队列
        QQueue<QString> transferToPostfixExpression(QQueue<QString>& exp);
        //通过后缀队列计算出结果
        QString Calculate(QQueue<QString>& exp);

        QString Calculate(QString& l,QString& op,QString& r);
        QString ValidNum(QString str);

        void on_PI_clicked();

        void on_E_clicked();

        void on_Involution_clicked();

        void on_Sin_clicked();

        void on_Cos_clicked();

        void on_pushButton_9_clicked();

        void on_Square_clicked();

        void on_Mod_clicked();

        void on_Log_clicked();

        void on_Factorial_clicked();

private:
    Ui::science *ui;
    QLabel *label;
};

#endif // SCIENCE_H
