#include "regression.h"
#include "ui_regression.h"

Regression::Regression(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Regression)
{
    ui->setupUi(this);

    number = 3;

    data = new QLineEdit*[2];
    data[0] = new QLineEdit[number];
    data[1] = new QLineEdit[number];

    for(int i = 0;i < number;i++){
        data[0][i].setMaximumSize(MAX_SIZE);
        data[1][i].setMaximumSize(MAX_SIZE);

        data[0][i].setFont(FONT);
        data[1][i].setFont(FONT);

        ui->gridLayout->addWidget(&data[0][i],0,i);
        ui->gridLayout->addWidget(&data[1][i],1,i);
    }
}

void Regression::Solution(double& a,double& b,double& r){
        double x = 0, y = 0, sum = 0, x2 = 0, y2 = 0, avg_x2, avg_y2, avg_xy;
        Point avg, temp;

        QVector<Point>point;
        for (int i = 0; i < number; i++) {
            temp.x = data[0][i].text().toDouble();
            temp.y = data[1][i].text().toDouble();
            point.push_back(temp);
        }

        // 计算x，y，x的平方，y的平方，x乘以y的平均值
        for (auto it : point) {
            x += it.x;
            y += it.y;
            x2 += it.x * it.x;
            y2 += it.y * it.y;
            sum += it.x * it.y;
        }
        avg.x = x / number;
        avg.y = y / number;
        avg_x2 = x2 / number;
        avg_y2 = y2 / number;
        avg_xy = sum / number;

        // 四舍五入
//        avg.x = round(avg.x * 10) / 10.0;
//        avg.y = round(avg.y * 10) / 10.0;
//        avg_x2 = round(avg_x2 * 10) / 10.0;
//        avg_y2 = round(avg_y2 * 10) / 10.0;
//        avg_xy = round(avg_xy * 10) / 10.0;

        // 计算Lxx,Lyy,Lxy
        double Lxx, Lyy, Lxy;
        Lxx = avg_x2 - pow(avg.x, 2);
        Lyy = avg_y2 - pow(avg.y, 2);
        Lxy = avg_xy - avg.x * avg.y;

        // 计算回归方程的斜率，截距，相关系数
        a = Lxy / Lxx;
        b = avg.y - a * avg.x;
        r = Lxy / sqrt(Lxx * Lyy);
}

Regression::~Regression()
{
    for(int i = 0;i < number;i++)
        delete[] data[i];
    delete [] data;
    delete ui;
}

void Regression::on_comboBox_currentIndexChanged(int index)
{
    delete[] data[0];
    delete[] data[1];
    number = index + 3;

    data[0] = new QLineEdit[number];
    data[1] = new QLineEdit[number];

    for(int i = 0;i < number;i++){
        data[0][i].setMaximumSize(MAX_SIZE);
        data[1][i].setMaximumSize(MAX_SIZE);

        data[0][i].setFont(FONT);
        data[1][i].setFont(FONT);

        ui->gridLayout->addWidget(&data[0][i],0,i);
        ui->gridLayout->addWidget(&data[1][i],1,i);
    }
}

void Regression::on_calculation_clicked()
{
    double a,b,r;
    Solution(a,b,r);

    // a
    ui->a->setText(QString::asprintf("%.5lf",a));

    // b
    if(b<1e-8)
        ui->operator_2->setText("");
    else if(b<0)
        ui->operator_2->setText("－");
    else
        ui->operator_2->setText("＋");
    ui->b->setText(QString::asprintf("%.5lf",fabs(b)));

    // r
    ui->r->setText(QString::asprintf("%.2lf",r));
}
