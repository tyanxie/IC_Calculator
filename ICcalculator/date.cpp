#include "date.h"
#include "ui_date.h"
#include "clock.h"


Date::Date(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Date)
{
    ui->setupUi(this);
    ui->radioButton_add->click();

    setTabOrder(ui->spinBox_year,ui->spinBox_month);
    setTabOrder(ui->spinBox_month,ui->spinBox_day);
}

Date::~Date()
{
    delete ui;
}

void Date::on_comboBox_currentIndexChanged(const QString &)
{
    if(ui->stackedWidget->currentIndex()==0)
    ui->stackedWidget->setCurrentIndex(1);
    else
    {
        ui->stackedWidget->setCurrentIndex(0);
    }

}

void Date::on_dateEdit_2_dateChanged(const QDate &date)
{
    QDate date2=ui->dateEdit->date();
    Clock c1(date.year(),date.month(),date.day());
    Clock c2(date2.year(),date2.month(),date2.day());
    Clock d(0,0,0);
    int a;
    QString s,str="相隔天数为: ";
    a=c1-c2;
    d=d + a;
    s.sprintf("%d",a);
    str.append(s);
    ui->textEdit_out->setText(str);


}

void Date::on_dateEdit_dateChanged(const QDate &date)
{
    QDate date2=ui->dateEdit_2->date();
    Clock c1(date.year(),date.month(),date.day());
    Clock c2(date2.year(),date2.month(),date2.day());
    int a;
    QString s,str="相隔天数为: ";
    a=c1-c2;
    s.sprintf("%d",a);
    str.append(s);
    ui->textEdit_out->setText(str);
}

void Date::on_radioButton_sub_clicked(bool)
{
    QString str="日期: ",s;
    QDate date = ui->dateEdit_3->date();
    Clock c(date.year(),date.month(),date.day());
    int y1,y2,m1,m2,d1,d2;
    y1=date.year();
    m1=date.month();
    d1=date.day();
    y2=ui->spinBox_year->value();
    m2=ui->spinBox_month->value();
    d2=ui->spinBox_day->value();


    y1=y1-y2;


    while(m2>0)
    {
        Clock dis(y1,m1,d1);
        d2+=dis.Getmonthsday();
        m1--;
        m2--;
        if(m1==0)
        {
            y1--;
            m1=12;
        }

    }



    Clock c3(date.year(),date.month(),date.day());
    c3=c3-d2;

    s.sprintf("%d",c3.Getyears());
    str.append(s);
    str.append("年");
    s.sprintf("%d",c3.Getmonths());
    str.append(s);
    str.append("月");
    s.sprintf("%d",c3.Getdays());
    str.append(s);
    str.append("日");
    ui->textEdit_out2->setText(str);




}

void Date::on_radioButton_add_clicked(bool)
{
    QString str="日期: ",s;
    QDate date = ui->dateEdit_3->date();
    int y1,y2,m1,m2,d1,d2;
    y1=date.year();
    m1=date.month();
    d1=date.day();
    y2=ui->spinBox_year->value();
    m2=ui->spinBox_month->value();
    d2=ui->spinBox_day->value();

    y1=y1+y2;


    while(m2>0)
    {
        m2--;
        m1++;
        if(m1>12)
        {
            m1=1;
            y1++;
        }
    }

    while(d2>0)
    {
        d2--;
        d1++;
        Clock dis(y1,m1,d1);
        if(d1>dis.Getmonthsday())
        {
            m1++;
            d1=1;
            if(m1>12)
            {
                m1=1;
                y1++;
            }
        }
    }


    Clock c1(y1,m1,d1);

    s.sprintf("%d",c1.Getyears());
    str.append(s);
    str.append("年");
    s.sprintf("%d",c1.Getmonths());
    str.append(s);
    str.append("月");
    s.sprintf("%d",c1.Getdays());
    str.append(s);
    str.append("日");
    ui->textEdit_out2->setText(str);
}

void Date::on_dateEdit_3_dateChanged(const QDate &)
{
    bool checked=true;
    if(ui->radioButton_add->isChecked())
    {
        on_radioButton_add_clicked(checked);
    }
    else {
        on_radioButton_sub_clicked(checked);
    }
}

void Date::on_spinBox_year_valueChanged(int)
{
    bool checked=true;
    if(ui->radioButton_add->isChecked())
    {
        on_radioButton_add_clicked(checked);
    }
    else {
        on_radioButton_sub_clicked(checked);
    }
}

void Date::on_spinBox_month_valueChanged(int)
{
    bool checked=true;
    if(ui->radioButton_add->isChecked())
    {
        on_radioButton_add_clicked(checked);
    }
    else {
        on_radioButton_sub_clicked(checked);
    }
}

void Date::on_spinBox_day_valueChanged(int)
{
    bool checked=true;
    if(ui->radioButton_add->isChecked())
    {
        on_radioButton_add_clicked(checked);
    }
    else {
        on_radioButton_sub_clicked(checked);
    }
}
