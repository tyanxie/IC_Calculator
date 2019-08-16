#ifndef REGRESSION_H
#define REGRESSION_H

#include <QWidget>
#include <QVector>
#include <QLineEdit>
#include <QtCharts>

namespace Ui {
class Regression;
}

// 常量们
const QSize MAX_SIZE(162,70);
const QFont FONT("楷体",24);

struct Point
{
    double x;
    double y;
    Point() {
        x = y = 0;
    }
};

class Regression : public QWidget
{
    Q_OBJECT

public:
    explicit Regression(QWidget *parent = nullptr);
    void Solution(double& a,double& b,double& r);
    ~Regression();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_calculation_clicked();

private:
    Ui::Regression *ui;
    QLineEdit **data;
    int number;
};

#endif // REGRESSION_H
