#include "equation.h"
#include "ui_equation.h"
#include "QTextEdit"
#include <math.h>

Equation::Equation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equation)
{
    ui->setupUi(this);
    ui->radioButton_4->close();
}

Equation::~Equation()
{
    delete ui;
}

void Equation::on_One2_clicked(bool)
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Equation::on_One3_clicked(bool)
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Equation::on_Two_clicked(bool)
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Equation::on_radioButton_4_clicked(bool)
{

}

void Equation::on_pushButton_clicked()
{
    double va=ui->textEdit_a->toPlainText().toDouble();
    double vb=ui->textEdit_b->toPlainText().toDouble();
    double vc=ui->textEdit_c->toPlainText().toDouble();
    double d=vb*vb-va*vc*4.0;
    double x1,x2;
    QString str="",ret1,ret2;
    if(fabs(va)<0.00000000001)
    {
        x1=-vc/vb;
        str.clear();
        str.append("x=");
        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
        str.append(ret1);
        ui->textEdit_out->setText(str);
    }
    else {

        if(fabs(d)<0.0000000000001)

        {
        str.clear();
        x1=-0.5*vb/va;

        str.append("方程存在两个相同的实数解。"
                 "x1=x2=");


        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1

        str.append(ret1);

        ui->textEdit_out->setText(str);

        }

        else if(d>0.00000000001)
        {
        str.clear();
        x1=0.5*(-vb+sqrt(d))/va;
        x2=0.5*(-vb-sqrt(d))/va;
        str.append("方程存在两个不同的实数解。      "
                   "x1和x2分别为                 ");
        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
        ret2.sprintf("%f",x2);
        str.append(ret1);
        str.append("  ");
        str.append(ret2);
        ui->textEdit_out->setText(str); 
        }

        else if(d<0.00000000001)
        {
            ui->textEdit_out->setText("方程没有实数解");
        }

    }
}

void Equation::on_pushButton_2_clicked()
{
    QString ret;
    QString str="",ret1,ret2;
    double a=ui->textEditaa->text().toDouble();
    double b=ui->textEdit_a_2->text().toDouble();
    double c=ui->textEdit_b_2->text().toDouble();
    double d=ui->textEdit_c_2->text().toDouble();
    double A,B,C,dis,y1,y2,t;  //盛金公式,dis为判别式
    double x1,x2,x2_a,x2_b,x3_a,x3_b;
    A=b*b-3*a*c;
    B=b*c-9*a*d;
    C=c*c-3*b*d;
    dis=B*B-4*A*C;
    ui->textEdit_besides->setText("");
    ui->add1->setText("+");
    ui->add2->setText("+");
    ui->i1->setText("i");
    ui->i2->setText("i");
    if(fabs(a)<10e-20)//若a为零，不为三次方程
    {

        double va=ui->textEdit_a_2->text().toDouble();
        double vb=ui->textEdit_b_2->text().toDouble();
        double vc=ui->textEdit_c_2->text().toDouble();

        double da=vb*vb-va*vc*4.0;


      if(fabs(va)<0.00000000001)//一元一次
      {
        x1=-vc/vb;

        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
        ui->textEdit_x1_a->setText(ret1);
        ui->textEdit_x1_b->setText("0");
        ui->textEdit_x2_a->setText("0");
        ui->textEdit_x2_b->setText("0");
        ui->textEdit_x3_a->setText("0");
        ui->textEdit_x3_b->setText("0");
     }
    else {//一元二次

        if(fabs(da)<0.0000000000001)

        {

        x1=-0.5*vb/va;
        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
        ui->textEdit_x1_a->setText(ret1);
        ui->textEdit_x1_b->setText("0");
        ui->textEdit_x2_a->setText(ret1);
        ui->textEdit_x2_b->setText("0");
        ui->textEdit_x3_a->setText("0");
        ui->textEdit_x3_b->setText("0");

        }

        else if(da>0.00000000001)
        {
        str.clear();
        x1=0.5*(-vb+sqrt(da))/va;
        x2=0.5*(-vb-sqrt(da))/va;


        ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
        ret2.sprintf("%f",x2);
        str.append(ret1);
        ui->textEdit_x1_a->setText(str);
        ui->textEdit_x1_b->setText("0");
        str.clear();
        str.append(ret2);
        ui->textEdit_x2_a->setText(str);
        ui->textEdit_x2_b->setText("0");
        ui->textEdit_x3_a->setText("0");
        ui->textEdit_x3_b->setText("0");
        }

        else if(da<0.00000000001)
        {
            x1=-0.5*vb/va;//实部
            x2=sqrt(-da)/(2*va);//虚部
            ret1.sprintf("%f",x1);//将double型的x1 转成 QString型的ret1
            ret2.sprintf("%f",x2);
            ui->textEdit_x1_a->setText(ret1);
            ui->textEdit_x1_b->setText(ret2);
            ui->textEdit_x2_a->setText(ret1);
            str="-";
            str.append(ret2);
            ui->textEdit_x2_b->setText(ret2);
            ui->textEdit_x3_a->setText("");
            ui->textEdit_x3_b->setText("");
        }

      }

    }



    if(fabs(a)>10e-20){//以下为一元三次盛金公式解法


        if(fabs(A)<10e-20&&fabs(B)<10e-20)
        {
        x1=-b/(3*a);
        ret.sprintf("%f",x1);
        ui->textEdit_x1_a->setText(ret);
        ui->textEdit_x1_b->setText("0");
        ui->textEdit_x2_a->setText(ret);
        ui->textEdit_x2_b->setText("0");
        ui->textEdit_x3_a->setText(ret);
        ui->textEdit_x3_b->setText("0");
        }
        else {


        if(dis>10e-20)
        {
        y1=A*b+1.5*a*(-B+sqrt(dis));
        y2=A*b+1.5*a*(-B-sqrt(dis));

        x1=(-b-pow(y1,1.0/3)-pow(y2,1.0/3))/(3*a);

        x2_a=(-2.0*b+pow(y1,1.0/3)+pow(y2,1.0/3))/(6*a);
        x2_b=1.0*sqrt(3)*(pow(y1,1.0/3)-pow(y2,1.0/3))/(6*a);

        x3_a=(-2.0*b+pow(y1,1.0/3)+pow(y2,1.0/3))/(6*a);
        x3_b=-1.0*sqrt(3)*(pow(y1,1.0/3)-pow(y2,1.0/3))/(6*a);


         ret.sprintf("%f",x1);
         if(ret=="nan")
         {

             ui->textEdit_besides->setText("方程有一个实根和一对共轭虚根");
             for(double i=-50;i<50;i+=0.0000001)//暴力枚举法
             {
                 if(fabs(a*i*i*i+b*i*i+c*i+d)<1e-6)
                  {

                     ret.sprintf("%f",i);
                     break;
                 }
             }

         }


        ui->textEdit_x1_a->setText(ret);
        ui->textEdit_x1_b->setText("0");


        ret.sprintf("%f",x2_a);
        ui->textEdit_x2_a->setText(ret);


        ret.sprintf("%f",x2_b);
        ui->textEdit_x2_b->setText(ret);


        ret.sprintf("%f",x3_a);
        ui->textEdit_x3_a->setText(ret);

        ret.sprintf("%f",x3_b);
        ui->textEdit_x3_b->setText(ret);
           if(ret=="nan")
            {
               ret="";
               ui->textEdit_x2_a->setText(ret);

               ui->textEdit_x2_b->setText(ret);

               ui->textEdit_x3_a->setText(ret);

               ui->textEdit_x3_b->setText(ret);

               ui->add1->setText(ret);
               ui->add2->setText(ret);
               ui->i1->setText(ret);
               ui->i2->setText(ret);
            }

        }

        else if (fabs(dis)<10e-20) {
            x1=-b/a+B/A;
            x2_a=-0.5*B/A;
            ret.sprintf("%f",x1);

           ui->textEdit_x1_a->setText(ret);
           ui->textEdit_x1_b->setText("0");
           ret.sprintf("%f",x2_a);
           ui->textEdit_x2_a->setText(ret);
           ui->textEdit_x2_b->setText("0");
           ui->textEdit_x3_a->setText(ret);
           ui->textEdit_x3_b->setText("0");
           ui->textEdit_besides->setText("");
        }
        else if (dis<10e-20) {
            t=acos((2*A*b-3*a*B)/(2*sqrt(A*A*A)));
            x1=(-b-2*sqrt(A)*cos(t/3))/(3*a);
            x2_a=(-b+sqrt(A)*(cos(t/3)-sqrt(3)*sin(t/3)))/(3*a);
            x3_a=(-b+sqrt(A)*(cos(t/3)+sqrt(3)*sin(t/3)))/(3*a);

            ret.sprintf("%f",x1);

           ui->textEdit_x1_a->setText(ret);
           ui->textEdit_x1_b->setText("0");
           ret.sprintf("%f",x2_a);
           ui->textEdit_x2_a->setText(ret);
           ui->textEdit_x2_b->setText("0");
           ret.sprintf("%f",x3_a);
           ui->textEdit_x3_a->setText(ret);
           ui->textEdit_x3_b->setText("0");
           ui->textEdit_besides->setText("");
        }

    }
  }
}

void Equation::on_pushButton_3_clicked()
{
    double a1=ui->Twoa->toPlainText().toDouble();
    double a2=ui->Twoc->toPlainText().toDouble();
    double b1=ui->Twob->toPlainText().toDouble();
    double b2=ui->Twod->toPlainText().toDouble();
    double c1=ui->Twoe->toPlainText().toDouble();
    double c2=ui->Twof->toPlainText().toDouble();
    double x,y;
    QString ret;
    if(fabs(b1*a2-b2*a1)>10e-20)
    {
        x=(b1*c2-b2*c1)/(b1*a2-b2*a1);
        y=(c1*a2-c2*a1)/(b1*a2-b2*a1);
        ret.sprintf("%f",x);
        ui->Two_x_out->setText(ret);

        ret.sprintf("%f",y);
        ui->Two_y_out->setText(ret);
    }
    else
    {
        if(fabs(c1*a2-c2*a1)<10e-20)
        {
            ui->Two_x_out->setText("        无数解");
            ui->Two_y_out->setText("");
        }
        else
        {
            ui->Two_x_out->setText("        无解");
            ui->Two_y_out->setText("");
        }
    }

}
