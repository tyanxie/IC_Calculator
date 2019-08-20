#include "regression.h"
#include "ui_regression.h"

Regression::Regression(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Regression)
{
    ui->setupUi(this);

    prompt = new Prompt();
    prompt->hide();

    number = 3;
    title_flag = false;

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

    ui->x->setAlignment(Qt::AlignCenter);
    ui->y->setAlignment(Qt::AlignCenter);

    chartView = new QChartView();
    ui->stackedWidget->addWidget(chartView);
    ui->stackedWidget->setCurrentWidget(chartView);
    chartView->setVisible(false);

    ui->horizontalLayout->setStretch(0,130);
    ui->horizontalLayout->setStretch(1,65);
    ui->horizontalLayout->setStretch(2,500);
    ui->horizontalLayout->setStretch(3,150);
    ui->horizontalLayout->setStretch(4,150);

    ui->horizontalLayout_2->setStretch(0,141);
    ui->horizontalLayout_2->setStretch(1,931);
    ui->horizontalLayout_2->setStretch(2,91);

    ui->horizontalLayout_3->setStretch(0,2);
    ui->horizontalLayout_3->setStretch(1,19);

    ui->verticalLayout_5->setStretch(0,8);
    ui->verticalLayout_5->setStretch(1,10);
    ui->verticalLayout_5->setStretch(2,5);
}

bool Regression::not_all_number() const{
    QString x,y;
    for (int i = 0; i < number; i++) {
        x = data[0][i].text();
        y = data[1][i].text();
        for(int j = 0; j < x.size(); j++)
            if(x[j]<'0'||x[j]>'9')
                return true;
        for(int j = 0; j < y.size(); j++)
            if(y[j]<'0'||y[j]>'9')
                return true;
    }
    return false;
}

void Regression::on_calculation_clicked()
{
    if(not_all_number()){
        QApplication::beep();
        prompt->changeMessage("输入必须全部为数字");
        prompt->setWindowTitle("Error");
        prompt->setWindowIcon(QIcon(":/images/warning.ico"));
        prompt->exec();
        return;
    }

    expression.clear();
    double a,b,r;
    bool is_a = false;
    Solution(a,b,r);

    // a
    if(a<1e-8){
        is_a = true;
        expression = "";
    }
    else
        expression.sprintf("y = %.4lfx",a);

    // b
    if(b<1e-8)
        expression = expression + "";
    else if(b<0)
        expression = expression +  QString::asprintf(" － %.4lf",fabs(b));
    else{
        if(is_a)
            expression = QString::asprintf("%.4lf",fabs(b));
        else
            expression = expression + QString::asprintf(" ＋ %.4lf",fabs(b));
    }

    // r
    if(number>5)
        ui->r->setText(QString::asprintf("R = \n"));
    else
        ui->r->setText(QString::asprintf("R = "));
    ui->r->setText(ui->r->text() + QString::asprintf("%.3lf",r));

    this->drawing(a,b);
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

void Regression::drawing(double a,double b){
    chartView->setVisible(true);
    chartView->setRenderHint(QPainter::Antialiasing);
    QChart *chart = new QChart();
    chartView->setChart(chart);

    // 展示动画
    chart->setAnimationOptions(QChart::AllAnimations);

    // 设置系列主题
    if(ui->light->isChecked())
        chart->setTheme(QChart::ChartThemeLight);
    else if(ui->bluesky->isChecked())
        chart->setTheme(QChart::ChartThemeBlueCerulean);
    else if(ui->dark->isChecked())
        chart->setTheme((QChart::ChartThemeDark));
    else if(ui->brown->isChecked())
        chart->setTheme(QChart::ChartThemeBrownSand);
    else
        chart->setTheme(QChart::ChartThemeLight);

    // 设置标题
    if(title_flag)
        chart->setTitle(ui->title->text());
    else
        chart->setTitle("图表1");
    chart->setTitleFont(FONT);

    // 散点系列
    QScatterSeries *scatter = new QScatterSeries();
    scatter->setName("散点");

    // 折线系列
    QLineSeries *line = new QLineSeries();
    line->setName(expression);
    QPen pen(QBrush(Qt::black),3);
    line->setPen(pen);

    // 折线系列的颜色
    if(ui->black->isChecked())
        line->setColor(Qt::black);
    else if(ui->blue->isChecked())
        line->setColor(Qt::blue);
    else if(ui->red->isChecked())
        line->setColor(Qt::red);
    else if(ui->yellow->isChecked())
        line->setColor(Qt::yellow);
    else if(ui->green->isChecked())
        line->setColor(Qt::green);
    else
        line->setColor(Qt::black);

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

    // 坐标系
    QValueAxis *xaxis = new QValueAxis();
    xaxis->setTitleText(ui->x->text());
    xaxis->setTitleFont(SMALL_FONT);

    QValueAxis *yaxis = new QValueAxis();
    yaxis->setTitleText(ui->y->text());
    yaxis->setTitleFont(SMALL_FONT);

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
    chart->addSeries(scatter);
    chart->addSeries(line);

    // 为系列添加坐标系
    chart->setAxisX(xaxis,line);
    chart->setAxisY(yaxis,line);
    chart->setAxisX(xaxis,scatter);
    chart->setAxisY(yaxis,scatter);
}

void Regression::on_comboBox_currentIndexChanged(int index)
{
    ui->r->setText("R");

    QString **temp;
    int num = number;
    temp = new QString*[2];
    temp[0] = new QString[num];
    temp[1] = new QString[num];
    for(int i = 0;i < num;i++){
        temp[0][i] = data[0][i].text();
        temp[1][i] = data[1][i].text();
    }

    delete[] data[0];
    delete[] data[1];
    number = index + 3;

    data[0] = new QLineEdit[number];
    data[1] = new QLineEdit[number];

    for(int i = 0;i < num && i < number;i++){
        data[0][i].setText(temp[0][i]);
        data[1][i].setText(temp[1][i]);
    }

    for(int i = 0;i < number;i++){
        data[0][i].setMaximumSize(MAX_SIZE);
        data[1][i].setMaximumSize(MAX_SIZE);

        data[0][i].setFont(FONT);
        data[1][i].setFont(FONT);

        ui->gridLayout->addWidget(&data[0][i],0,i);
        ui->gridLayout->addWidget(&data[1][i],1,i);
    }

    delete[] temp[0];
    delete[] temp[1];
    delete[] temp;
}

void Regression::on_title_textChanged(const QString &arg1)
{
    if(arg1 == "在此输入标题，默认为图表1")
        title_flag = false;
    else
        title_flag = true;
}

void Regression::on_Save_clicked()
{
    QString filepath = QFileDialog::getSaveFileName(
                this,tr("Save Image"),"图片",tr("*.png"));
    QScreen *screen = QGuiApplication::primaryScreen();
    QPixmap p = screen->grabWindow(chartView->winId());
    QImage image = p.toImage();
    image.save(filepath);
    QApplication::beep();
    prompt->changeMessage("保存成功");
    prompt->setWindowTitle("Message");
    prompt->setWindowIcon(QIcon(":/images/success.ico"));
    prompt->exec();
}

Regression::~Regression()
{
    for(int i = 0;i < number;i++)
        delete[] data[i];
    delete [] data;
    delete prompt;
    delete chartView;
    delete ui;
}

void Regression::on_clear_clicked()
{
    for(int i = 0; i < number; i++){
        data[0][i].clear();
        data[1][i].clear();
    }
}
