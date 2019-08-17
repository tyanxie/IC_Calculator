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

    ui->expresion->setAlignment(Qt::AlignCenter);

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
    ui->expresion->setText(QString::asprintf("y = %.4lfx",a));
    // b
    if(b<1e-8)
        ui->expresion->setText(ui->expresion->text()+"");
    else if(b<0)
        ui->expresion->setText(ui->expresion->text()+
                               QString::asprintf(" － %.5lf",fabs(b)));
    else
        ui->expresion->setText(ui->expresion->text()+
                               QString::asprintf(" ＋ %.5lf",fabs(b)));

    // r
    ui->r->setText(QString::asprintf("%.3lf",r));

    this->drawing(a,b);
}


void Regression::drawing(double a,double b){
    QChartView *chartview = new QChartView(ui->stackedWidget);
    chartview->setVisible(true);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setMinimumSize(940,450);
    QChart *chart = new QChart();
    chartview->setChart(chart);
    chart->setTitle(QString::asprintf("y = %.4lfx + %.4lf",a,b));
    chart->setTheme(QChart::ChartThemeBlueCerulean);
    chart->setAnimationOptions(QChart::AllAnimations);

    // 折线系列和散点系列
    QLineSeries *line = new QLineSeries();
    QScatterSeries *scatter = new QScatterSeries();

    // 坐标系
    QValueAxis *xaxis = new QValueAxis();
    QValueAxis *yaxis = new QValueAxis();

    // 读取数据
    Point temp;
    QVector<Point>point;
    for (int i = 0; i < number; i++) {
        temp.x = data[0][i].text().toDouble();
        temp.y = data[1][i].text().toDouble();
        point.push_back(temp);
    }

    // 为散点系列添加坐标点
    for (int i = 0; i < number; i++)
        scatter->append(point.at(i).x,point.at(i).y);

    double max,min;
    // 寻找横坐标最值
    max = point.at(0).x;
    min = point.at(0).x;
    for (int i = 1; i < number; i++) {
        if(point.at(i).x>max)
            max = point.at(i).x;
        if(point.at(i).x<min)
            min = point.at(i).x;
    }
    xaxis->setRange(min-max/min,max+max/min);

    //为折线系列添加坐标点
    line->append(max,a*max+b);
    line->append(min,a*min+b);

    // 寻找纵坐标的最值
    max = point.at(0).y;
    min = point.at(0).y;
    for (int i = 1; i < number; i++) {
        if(point.at(i).y>max)
            max = point.at(i).y;
        if(point.at(i).y<min)
            min = point.at(i).y;
    }
    yaxis->setRange(min-max/min,max+max/min);

    // 添加折线和散点系列
    chart->addSeries(line);
    chart->addSeries(scatter);

    // 为系列添加坐标系
    chart->setAxisX(xaxis,line);
    chart->setAxisY(yaxis,line);
    chart->setAxisX(xaxis,scatter);
    chart->setAxisY(yaxis,scatter);
}





