#ifndef REGRESSION_H
#define REGRESSION_H

#include <QWidget>
#include <QVector>
#include <QScreen>
#include <QPixmap>
#include <QImage>
#include <QLineEdit>
#include <QtCharts>
#include "prompt.h"

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
    void Solution(double& a,double& b,double& r);
    void drawing(double a,double b);
    bool not_all_number()const;

public:
    explicit Regression(QWidget *parent = nullptr);
    ~Regression();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_calculation_clicked();

    void on_title_textChanged(const QString &arg1);

    void on_Save_clicked();

    void on_clear_clicked();

private:
    int number;
    Prompt *prompt;
    bool title_flag;
    QLineEdit **data;
    Ui::Regression *ui;
    QString expression;
    QChartView *chartView;
};

#endif // REGRESSION_H
