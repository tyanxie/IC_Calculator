#include "science.h"
#include "ui_science.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>

QString strall;
QString str;

int fac(int x)
{
    int i,sum=1;
    for(i=1;i<=x;i++)
        sum*=i;
    return sum;
}

science::science(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::science)
{
    ui->setupUi(this);

}

science::~science()
{
    delete ui;
}

void science::on_Seven_clicked()
{
    str = "7";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Eight_clicked()
{
    str = "8";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Nine_clicked()
{
    str = "9";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Add_clicked()
{
    str = "+";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Leftbracket_clicked()
{
    str = "(";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Four_clicked()
{
    str = "4";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Five_clicked()
{
    str = "5";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Six_clicked()
{
    str = "6";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Subtract_clicked()
{
    str = "-";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Rightbracket_clicked()
{
    str = ")";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_One_clicked()
{
    str = "1";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Two_clicked()
{
    str = "2";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Three_clicked()
{
    str = "3";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Multiple_clicked()
{
    str = "*";
    strall.append(str);
    ui->textEditIN->setText(strall);
}

void science::on_Backspace_clicked()
{
    strall = strall.left(strall.length()-1);
        ui->textEditIN->setText(strall);
}

void science::on_Zero_clicked()
{
    str = "0";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Point_clicked()
{
    str = ".";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Divide_clicked()
{
    str = "/";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Clear_clicked()
{
    strall.clear();
        ui->textEditIN->clear();
        ui->textEditOUT->clear();
}

void science::on_Equal_clicked()
{

        ui->textEditIN->setText("");
        strall.remove("in");//sin去掉in取‘s’为运算符，简便
        strall.remove("os");//cos
        strall.remove("an");//tan
        strall.remove("od");//Mod
        strall.remove('I');//In

        QQueue<QString> temp1 = prefixExpression(strall);
        QQueue<QString> temp2 = transferToPostfixExpression(temp1);
        QString temp3 = Calculate(temp2);

        strall.clear();
        ui->textEditOUT->setText(temp3);
}
QQueue<QString> science::prefixExpression(const QString &exp)
{
    QQueue<QString> ret;
        QString num="";

        for(int i=0;i<exp.length();i++)
        {
            if( (exp[i]=='.') || ( (exp[i]>='0') && (exp[i]<='9') ))    //判断小数点和数字
            {
                num += exp[i];
            }

            else if(exp[i]== '(' || exp[i]== ')'
                    || exp[i]== '*' || exp[i]== '/'
                    ||exp[i] == '^' || exp[i]== 's'
                    ||exp[i] == 'c' || exp[i]== 't'
                    ||exp[i] == "√" || exp[i]== 'M'
                    ||exp[i] =='n'  || exp[i]== '!')
            {
                if(!num.isEmpty())
                {
                    ret.enqueue(num);        //将数字入队列
                    num.clear();
                }
                ret.enqueue(exp[i]);
            }

            else if(exp[i]== '+' || exp[i]== '-')           // + - 需要特殊处理
            {
                if(i==0)       //表达式开头,说明是正负号
                {
                 num+= exp[i];
                }

                else if(exp[i-1]=='(' || exp[i-1]=='+'
                        || exp[i-1]=='-' || exp[i-1]=='*'
                        || exp[i-1]=='/'||exp[i-1]=='^'||exp[i-1]=='s'
                        || exp[i-1]=='c'||exp[i-1]=='t'||exp[i-1]=="√"
                        || exp[i-1]=='M'||exp[i-1]=='n'||exp[i-1]=='!')
                {
                 num+= exp[i];
                }
                else        //否则是加减运算符
                {
                    if(!num.isEmpty())
                    {
                        ret.enqueue(num);        //将数字入队列
                        num.clear();
                    }
                 ret.enqueue(exp[i]);
                }
            }
        }

        if(!num.isEmpty())         //遍历完成,判断是否还有数字
        {
            ret.enqueue(num);
            num.clear();
        }
    return ret;
}

QQueue<QString> science::transferToPostfixExpression(QQueue<QString> &exp)
{
        QStack<QString> stack;
        QQueue<QString> ret;
        bool num_ok;
        QString symbol;

        while(!exp.isEmpty())
        {
          symbol = exp.dequeue();   //出队列
          symbol.toDouble(&num_ok);

          if(num_ok==true)          //当前元素为数字，直接输出
          {
               stack.push(symbol);
          }



          //与栈顶运算符进行优先级比较，如果小于等于，将栈顶元素输出，转1；如果大于，将当前元素入栈。
          else if(symbol=="+"||symbol=="-")
          {
              while(!stack.isEmpty() &&(stack.top()!="("))// *
              {
                  ret.enqueue(stack.pop());     //取出栈顶运算符  并入队列
              }
              stack.push(symbol);//输出
          }

          else if(symbol=="*"||symbol=="/"||symbol=="^")
          {
              while(!stack.isEmpty() && (stack.top()!="(") && (stack.top()!="+") && (stack.top()!="-"))
              {
                  ret.enqueue(stack.pop());     //取出栈顶运算符   并入队列
              }
              stack.push(symbol);//输出
          }

          else if(symbol=="s"||symbol=="c"
                  ||symbol=='t'||symbol=="√"
                  ||symbol=='M'||symbol=='n'||symbol=='!')
          {
              while(!stack.isEmpty() && (stack.top()!="(")
                    && (stack.top()!="+") && (stack.top()!="-")
                    && (stack.top()!="*") && (stack.top()!="/"))
              {
                  ret.enqueue(stack.pop());     //取出栈顶运算符   并入队列
              }
              stack.push(symbol);//输出
          }

          else if(symbol == "(")
          {
             stack.push(symbol);
          }

          else if(symbol ==")")
          {
              while(!stack.isEmpty() && (stack.top()!="("))
              {
                  ret.enqueue(stack.pop());     //取出栈顶运算符并入队列
              }
              if(stack.top()=="(")
                stack.pop();
          }
        }

        while(!stack.isEmpty()&& (stack.top()!="("))         //遍历完成,判断栈里是否为空
        {
           ret.enqueue(stack.pop());     //取出栈顶运算符并入队列
        }return ret;

}

QString science::Calculate(QString &l, QString &op, QString &r)
{
    double left,right,res;
        QString ret="";
        left = l.toDouble();
        right = r.toDouble();
        if(op == "+")
        {
            res = left + right;
        }

        else if(op == "-")
        {
            res = left - right;
        }

        else if(op == "*")
        {
            res = left * right;
        }

        else if(op == "^")
        {
            res = pow(left,right);
        }

        else if(op == "M")
        {
            res = int(left) % int(right);
        }

        else if(op == "/")
        {
            if( (right>(-0.000000000000001)) && (right<(0.000000000000001)) )   //判断除数为0
                return NULL;
            else
                res = left/right;
        }

        ret.sprintf("%f",res);
        return ret;
}

QString science::ValidNum(QString str)
{
    QString num;

        if(str.indexOf(".")== -1) //判断是否小数
            return str;

        while(str.length()>1)   //避免0被去掉
        {
             num=str.right(1);
             if(num=="."||num=="0")
             {
                 str.chop(1);
                 if(num==".")
                     return  str;
             }
             else
                 return str;
        }
        return str;
}

/*计算结果

 A、当前元素为数字：进栈
 B、当前元素为运算符：
    从栈中弹出右操作数
    从栈中弹出左操作数
    根据符号进行运算
    将运算结果压入栈中
    遍历结束后，栈中的数字即为结果
*/
QString science::Calculate(QQueue<QString> &exp)
{
    QStack<QString> stack;
        QString symbol,L,R,op,ret;
        bool num_ok;

        double res;
        while(!exp.isEmpty())
        {
          symbol = exp.dequeue();   //出队列
          symbol.toDouble(&num_ok);

          if(num_ok==true && symbol!='s'
                  && symbol!='c' && symbol!='t'
                  && symbol!="√" && symbol!='n')      //数字
          {
            stack.push(symbol);
          }
          else                  //运算符
          {
                              if(symbol=='s')
                               {

                                res = stack.top().toDouble();
                                res=sin(res);
                                stack.pop();
                                ret.sprintf("%f",res);
                               }
                              else if(symbol=='c')
                               {

                                res = stack.top().toDouble();
                                res=cos(res);
                                stack.pop();
                                ret.sprintf("%f",res);
                               }
                              else if(symbol=='t')
                               {

                                res = stack.top().toDouble();
                                res=tan(res);
                                stack.pop();
                                ret.sprintf("%f",res);
                               }

                              else if(symbol=="√")
                               {

                                res = stack.top().toDouble();
                                res=sqrt(res);
                                stack.pop();
                                ret.sprintf("%f",res);
                               }
                              else if(symbol=="n")
                               {

                                res = stack.top().toDouble();
                                res=log(res);
                                stack.pop();
                                ret.sprintf("%f",res);
                               }
                              else if(symbol=="!")
                               {

                                res = stack.top().toDouble();
                                res=fac(int(res));
                                stack.pop();
                                ret.sprintf("%f",res);
                               }
                              else if(stack.size()<2)
                                  return "Error";

                              if(symbol!='s' && symbol!='c'
                                 && symbol!='t' && symbol!="√"
                                 && symbol!='n' && symbol!='!')
                              {
                                  R= stack.pop();

                                  L= stack.pop();

                                  ret = Calculate(L,symbol,R );
                              }
              if(ret==nullptr)
                  return ret;

              stack.push(ret);
          }
        }
        if(stack.size()==1) //遍历完成,结果只有一个
        {
             return ValidNum(stack.pop());
        }
        else
        {
            return "Error";
        }
}

void science::on_PI_clicked()
{
    str = "3.1415926";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_E_clicked()
{
    str = "2.718281828";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Involution_clicked()
{
    str = "^";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Sin_clicked()
{
    str = "sin";
        strall.append(str);
        ui->textEditIN->setText(strall);

}

void science::on_Cos_clicked()
{
    str = "cos";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_pushButton_9_clicked()
{
    str = "tan";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Square_clicked()
{
    str = "√";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Mod_clicked()
{
    str = "Mod";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Log_clicked()
{
    str = "In";
        strall.append(str);
        ui->textEditIN->setText(strall);
}

void science::on_Factorial_clicked()
{

    str = "!";


        if(strall=="")
        {
            strall.append("0!");
            ui->textEditIN->setText(strall);

        }
        else
        {
            strall.append(str);
            ui->textEditIN->setText(strall);

        }

        QQueue<QString> temp1 = prefixExpression(strall);
        QQueue<QString> temp2 = transferToPostfixExpression(temp1);
        QString temp3 = Calculate(temp2);

        strall.clear();
        ui->textEditOUT->setText(temp3);
}
