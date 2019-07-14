#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

    void initUI();
private:

    //计算器输入文本框的定义
    QLineEdit *lineEditCalculate;
    //计算器输出框的定义
    QLineEdit *lineEditAnswer;

    //计算器按钮
    //第一行按钮
    QPushButton *btnNumberSeven;
    QPushButton *btnNumberEight;
    QPushButton *btnNumberNine;
    QPushButton *btnOperatorAdd;
    QPushButton *btnOperatorLeftBracket;

    //第二行按钮
    QPushButton *btnNumberFour;
    QPushButton *btnNumberFive;
    QPushButton *btnNumberSix;
    QPushButton *btnOperatorSubtract;
    QPushButton *btnOperatorRightBracket;

    //第三行按钮
    QPushButton *btnNumberOne;
    QPushButton *btnNumberTwo;
    QPushButton *btnNumberThree;
    QPushButton *btnOperatorMultiply;
    QPushButton *btnBackspace;

    //第四行按钮
    QPushButton *btnNumberZero;
    QPushButton *btnRadixPoint;
    QPushButton *btnOperatorEqual;
    QPushButton *btnOperatorDivide;
    QPushButton *btnClear;

    //将中缀表达式的数字和运算符分离
    QQueue<QString> prefixExpression(const QString& exp);
    //将中缀队列转换为后缀队列
    QQueue<QString> transferToPostfixExpression(QQueue<QString>& exp);
    //通过后缀队列计算出结果
    QString Calculate(QQueue<QString>& exp);

    QString Calculate(QString& l,QString& op,QString& r);
    QString ValidNum(QString str);
private slots:
    void on_btnCalculator_clicked();

};

#endif // WIDGET_H
