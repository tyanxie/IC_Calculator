#ifndef REGRESSION_H
#define REGRESSION_H

#include <QWidget>
#include <QVector>
#include <QScreen>
#include <QPixmap>
#include <QImage>
#include <QLineEdit>
#include <QtCharts>

namespace Ui {
class Regression;
}

// 常量们
const QSize MAX_SIZE(162,70);
const QFont FONT("楷体",24);
const QFont SMALL_FONT("宋体",18);

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

private:
    void drawing(double a,double b);

public:
    explicit Regression(QWidget *parent = nullptr);
    void Solution(double& a,double& b,double& r);
    ~Regression();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_calculation_clicked();

    void on_pushButton_clicked();

    void on_title_textChanged(const QString &arg1);

private:
    Ui::Regression *ui;
    QLineEdit **data;
    QChartView *chartview;
    QString expression;
    int number;
    bool title_flag;
};

#endif // REGRESSION_H
