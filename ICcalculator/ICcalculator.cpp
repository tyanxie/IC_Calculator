#include "ICcalculator.h"
#include "ui_ICcalculator.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QQueue>
#include <QStack>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    //计算器按键信号与槽的连接
        //第一行按钮信号与槽连接
        connect(btnNumberSeven,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberEight,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberNine,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorAdd,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorLeftBracket,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        //第二行按钮信号与槽连接
        connect(btnNumberFour,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberFive,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberSix,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorSubtract,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorRightBracket,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        //第三行按钮信号与槽连接
        connect(btnNumberOne,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberTwo,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnNumberThree,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorMultiply,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnBackspace,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        //第四行按钮信号与槽连接
        connect(btnNumberZero,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnRadixPoint,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorEqual,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnOperatorDivide,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));
        connect(btnClear,SIGNAL(clicked()),this,SLOT(on_btnCalculator_clicked()));


        //设置显示框体的大小
        setMinimumSize(500,500);
        setMaximumSize(800,800);
        //设置框体的名称
        setWindowTitle(tr("ICcalculator"));



        //输入框
            lineEditCalculate = new QLineEdit();
            lineEditCalculate->setReadOnly(true);
            lineEditCalculate->setAlignment(Qt::AlignRight);


            //输出框
            lineEditAnswer = new QLineEdit();
            lineEditAnswer->setReadOnly(true);

            //第一行按钮
            btnNumberSeven = new QPushButton(tr("7"));
            btnNumberEight = new QPushButton(tr("8"));
            btnNumberNine = new QPushButton(tr("9"));
            btnOperatorAdd = new QPushButton(tr("+"));
            btnOperatorLeftBracket = new QPushButton(tr("("));

            //第二行按钮
            btnNumberFour = new QPushButton(tr("4"));
            btnNumberFive = new QPushButton(tr("5"));
            btnNumberSix = new QPushButton(tr("6"));
            btnOperatorSubtract = new QPushButton(tr("-"));
            btnOperatorRightBracket = new QPushButton(tr(")"));

            //第三行按钮
            btnNumberOne = new QPushButton(tr("1"));
            btnNumberTwo = new QPushButton(tr("2"));
            btnNumberThree = new QPushButton(tr("3"));
            btnOperatorMultiply = new QPushButton(tr("*"));
            btnBackspace = new QPushButton(tr("<-"));

            //第四行代码
            btnNumberZero = new QPushButton(tr("0"));
            btnRadixPoint = new QPushButton(tr("."));
            btnOperatorEqual = new QPushButton(tr("="));
            btnOperatorDivide = new QPushButton(tr("/"));
            btnClear = new QPushButton(tr("C"));


            QGridLayout *GLay1 = new QGridLayout;

            //添加第一行布局
            GLay1->addWidget(btnNumberSeven,0,0);
            GLay1->addWidget(btnNumberEight,0,1);
            GLay1->addWidget(btnNumberNine,0,2);
            GLay1->addWidget(btnOperatorAdd,0,3);
            GLay1->addWidget(btnOperatorLeftBracket,0,4);

            //添加第二行布局
            GLay1->addWidget(btnNumberFour,1,0);
            GLay1->addWidget(btnNumberFive,1,1);
            GLay1->addWidget(btnNumberSix,1,2);
            GLay1->addWidget(btnOperatorSubtract,1,3);
            GLay1->addWidget(btnOperatorRightBracket,1,4);

            //添加第三行布局
            GLay1->addWidget(btnNumberOne,2,0);
            GLay1->addWidget(btnNumberTwo,2,1);
            GLay1->addWidget(btnNumberThree,2,2);
            GLay1->addWidget(btnOperatorMultiply,2,3);
            GLay1->addWidget(btnBackspace,2,4);
            //添加第四行布局
            GLay1->addWidget(btnNumberZero,3,0);
            GLay1->addWidget(btnRadixPoint,3,1);
            GLay1->addWidget(btnOperatorEqual,3,2);
            GLay1->addWidget(btnOperatorDivide,3,3);
            GLay1->addWidget(btnClear,3,4);

            GLay1->setSpacing(10);
            GLay1->setVerticalSpacing(15);

            //竖直主布局
            QVBoxLayout *VLay1 = new QVBoxLayout;
            VLay1->addWidget(lineEditCalculate);
            VLay1->addStretch();
            VLay1->addWidget(lineEditAnswer);

            VLay1->addLayout(GLay1);
            setLayout(VLay1);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btnCalculator_clicked()
{

    QPushButton *btnSender = dynamic_cast<QPushButton*>(sender());
    QString txtCalculate = btnSender->text();
    QString tempLineEditCalculate = lineEditCalculate->text();
    if(txtCalculate == "=")
    {

        QQueue<QString> temp1 = prefixExpression(lineEditCalculate->text());
        QQueue<QString> temp2 = transferToPostfixExpression(temp1);
        QString temp3 = Calculate(temp2);
        lineEditAnswer->setText(temp3);
    }
    if(txtCalculate == "<-"){
        tempLineEditCalculate = tempLineEditCalculate.left(tempLineEditCalculate.length()-1);
        lineEditCalculate->setText(tempLineEditCalculate);
        return;
    }

    if(txtCalculate == "C")
        tempLineEditCalculate = "";
    else {
        tempLineEditCalculate += txtCalculate;
    }
    lineEditCalculate->setText(tempLineEditCalculate);
}

QQueue<QString> Calculator::prefixExpression(const QString &exp)
{
    QQueue<QString> ret;
        QString num="";

        for(int i=0;i<exp.length();i++)
        {
            if( (exp[i]=='.') || ( (exp[i]>='0') && (exp[i]<='9') ))    //判断小数点和数字
            {
                num += exp[i];
            }

            else if(exp[i]== '(' || exp[i]== ')' || exp[i]== '*' || exp[i]== '/'  )
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

                else if(exp[i-1]=='(' || exp[i-1]=='+' || exp[i-1]=='-' || exp[i-1]=='*' || exp[i-1]=='/')
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

QQueue<QString> Calculator::transferToPostfixExpression(QQueue<QString> &exp)
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

          else if(symbol=="*"||symbol=="/")
          {
              while(!stack.isEmpty() && (stack.top()!="(") && (stack.top()!="+") && (stack.top()!="-"))
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

QString Calculator::Calculate(QString &l, QString &op, QString &r)
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

QString Calculator::ValidNum(QString str)
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
QString Calculator::Calculate(QQueue<QString> &exp)
{
    QStack<QString> stack;
        QString symbol,L,R,op,ret;
        bool num_ok;

        while(!exp.isEmpty())
        {
          symbol = exp.dequeue();   //出队列
          symbol.toDouble(&num_ok);

          if(num_ok==true)      //数字
          {
            stack.push(symbol);
          }
          else                  //运算符
          {
              if(stack.size()<2)
                  return "Error";

              R= stack.pop();
              L= stack.pop();
              ret = Calculate(L,symbol,R );
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
        {return "Error";
        }
}

