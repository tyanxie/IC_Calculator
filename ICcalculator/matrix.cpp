#include "matrix.h"
#include "ui_matrix.h"
#include "matrix_bottom.h"

bool Matrix::flag = true;

Matrix::Matrix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Matrix)
{
    ui->setupUi(this);

//    ui->a_input_grid->setStyleSheet("background:transparent;border:2px solid black;");

//    ui->b_input_grid->setStyleSheet("background:transparent;border:2px solid black;");

//    ui->output_grid->setStyleSheet("background:transparent;border:2px solid black;");

    QFont font("楷体",20);

    a_last_row_length = 1;
    a_last_column_length = 1;

    b_last_row_length = 1;
    b_last_column_length = 1;

    output_last_row_length = 1;
    output_last_column_length = 1;

    a_input_LineEdit = new QLineEdit*[1];
    a_input_LineEdit[0] = new QLineEdit[1];

    b_input_LineEdit = new QLineEdit*[1];
    b_input_LineEdit[0] = new QLineEdit[1];

    output_Label = new QLabel*[1];
    output_Label[0] = new QLabel[1];

    a_input_LineEdit[0][0].setSizePolicy(sizepolicy);
    a_input_LineEdit[0][0].setMaximumSize(54,54);
    a_input_LineEdit[0][0].setFont(font);
    ui->a_input_gridLayout->addWidget(&a_input_LineEdit[0][0],0,0);
    connect(&a_input_LineEdit[0][0],&QLineEdit::textEdited,this,&Matrix::compute);

    b_input_LineEdit[0][0].setSizePolicy(sizepolicy);
    b_input_LineEdit[0][0].setMaximumSize(54,54);
    b_input_LineEdit[0][0].setFont(font);
    ui->b_input_gridLayout->addWidget(&b_input_LineEdit[0][0],0,0);
    connect(&b_input_LineEdit[0][0],&QLineEdit::textEdited,this,&Matrix::compute);

}

Matrix::~Matrix()
{
    for (int i = 0; i < a_last_row_length; ++i)
        delete [] a_input_LineEdit[i];
    delete [] a_input_LineEdit;

    for (int i = 0; i < b_last_row_length; ++i)
        delete [] b_input_LineEdit[i];
    delete [] b_input_LineEdit;

    if(flag){
        for(int i = 0; i < output_last_row_length; ++i)
            delete [] output_Label[i];
        delete [] output_Label;
    }

    if(flag == false)
        delete error_Label;

    delete ui;
}


void Matrix::iniUI(){
    for (int i = 0; i < a_last_row_length; ++i)
        delete [] a_input_LineEdit[i];
    delete [] a_input_LineEdit;

    for (int i = 0; i < b_last_row_length; ++i)
        delete [] b_input_LineEdit[i];
    delete [] b_input_LineEdit;

    a_last_row_length = ui->a_row_combo->currentIndex() + 1;
    a_last_column_length = ui->a_column_combo->currentIndex() + 1;

    b_last_row_length = ui->b_row_combo->currentIndex() + 1;
    b_last_column_length = ui->b_column_combo->currentIndex() + 1;

    QFont font("楷体",20);

    a_input_LineEdit = new QLineEdit*[a_last_row_length];
    for(int i = 0; i < a_last_row_length; ++i){
        a_input_LineEdit[i] = new QLineEdit[a_last_column_length];
        for(int j = 0; j < a_last_column_length; ++j){
            a_input_LineEdit[i][j].setSizePolicy(sizepolicy);
            a_input_LineEdit[i][j].setMaximumSize(54,54);
            a_input_LineEdit[i][j].setFont(font);
            ui->a_input_gridLayout->addWidget(&a_input_LineEdit[i][j],i,j);
            connect(&a_input_LineEdit[i][j],&QLineEdit::textEdited,this,&Matrix::compute);
        }
    }

    b_input_LineEdit = new QLineEdit*[b_last_row_length];
    for (int i = 0; i < b_last_row_length; ++i) {
        b_input_LineEdit[i] = new QLineEdit[b_last_column_length];
        for (int j = 0; j < b_last_column_length; ++j) {
            b_input_LineEdit[i][j].setSizePolicy(sizepolicy);
            b_input_LineEdit[i][j].setMaximumSize(54,54);
            b_input_LineEdit[i][j].setFont(font);
            ui->b_input_gridLayout->addWidget(&b_input_LineEdit[i][j],i,j);
            connect(&b_input_LineEdit[i][j],&QLineEdit::textEdited,this,&Matrix::compute);
        }
    }
}

void Matrix::compute(){

    QFont font("楷体",20);

    QFont error_font("楷体",30,75);

    if(flag == false){
        delete error_Label;

        output_last_row_length = 1;
        output_last_column_length = 1;

        output_Label = new QLabel*[output_last_row_length];
        for(int i = 0; i < output_last_row_length; ++i){
            output_Label[i] = new QLabel[output_last_column_length];
            for(int j = 0; j < output_last_column_length; ++j){
                output_Label[i][j].setSizePolicy(sizepolicy);
                output_Label[i][j].setMaximumSize(54,54);
                output_Label[i][j].setFont(font);
                output_Label[i][j].setText(QString::asprintf("%d %d",i,j));
//                output_Label[i][j].setStyleSheet("background:transparent;border:0px solid black;");
                ui->output_gridLayout->addWidget(&output_Label[i][j],i,j);
            }
        }
        flag = true;
    }

    Matrix_bottom a(a_last_row_length,a_last_column_length,a_input_LineEdit);

    Matrix_bottom b(b_last_row_length,b_last_column_length,b_input_LineEdit);

    Matrix_bottom c;

    try{
        switch (ui->operator_combo->currentIndex()) {
        case 0:
            c = a + b;
            break;
        case 1:
            c = a - b;
            break;
        case 2:
            c = a * b;
            break;
        default:
            break;
        }

    } catch (QString& s) {
        flag = false;

        for(int i = 0; i < output_last_row_length; ++i)
            delete [] output_Label[i];
        delete [] output_Label;

        error_Label = new QLabel;
        error_Label->setSizePolicy(sizepolicy);
        error_Label->setMinimumSize(54,120);
        error_Label->setFont(error_font);
        error_Label->setText(s);
        ui->output_gridLayout->addWidget(error_Label);

        return;
    }
    construct_output(c.get_row(),c.get_column());
    for(int i = 0; i < output_last_row_length; ++i)
        for(int j = 0; j < output_last_column_length; ++j)
            output_Label[i][j].setText(QString::asprintf("%.2lf",c[i][j]));
}

void Matrix::construct_output(int row,int column){

    QFont font("楷体",20);

    for(int i = 0; i < output_last_row_length; ++i)
        delete [] output_Label[i];
    delete [] output_Label;

    output_last_row_length = row;
    output_last_column_length = column;

    output_Label = new QLabel*[output_last_row_length];
    for(int i = 0; i < output_last_row_length; ++i){
        output_Label[i] = new QLabel[output_last_column_length];
        for(int j = 0; j < output_last_column_length; ++j){
            output_Label[i][j].setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
            output_Label[i][j].setMinimumSize(54,35);
            output_Label[i][j].setMaximumSize(975/row,35);
            output_Label[i][j].setAlignment(Qt::AlignCenter);
            output_Label[i][j].setFont(font);
//            output_Label[i][j].setStyleSheet("background:transparent;border:1px solid black;");
            ui->output_gridLayout->addWidget(&output_Label[i][j],i,j);
        }
    }
}

void Matrix::on_operator_combo_currentIndexChanged(int)
{
    compute();
}

void Matrix::on_a_row_combo_currentIndexChanged(int index)
{
    Storing a(a_last_row_length,a_last_column_length,a_input_LineEdit);
    Storing b(b_last_row_length,b_last_column_length,b_input_LineEdit);

    ui->a_column_combo->setCurrentIndex(index);
    ui->b_row_combo->setCurrentIndex(index);
    ui->b_column_combo->setCurrentIndex(index);

    iniUI();

    for(int i = 0;i < a_last_row_length && i < a.row;i++)
        for(int j = 0;j < a_last_column_length && j < a.column;j++)
            a_input_LineEdit[i][j].setText(a.data[i][j]);

    for(int i = 0;i < b_last_row_length && i < b.row;i++)
        for(int j = 0;j < b_last_column_length && j < b.column;j++)
            b_input_LineEdit[i][j].setText(b.data[i][j]);
}

void Matrix::on_a_column_combo_currentIndexChanged(int)
{
    Storing a(a_last_row_length,a_last_column_length,a_input_LineEdit);

    iniUI();

    for(int i = 0;i < a_last_row_length && i < a.row;i++)
        for(int j = 0;j < a_last_column_length && j < a.column;j++)
            a_input_LineEdit[i][j].setText(a.data[i][j]);
}

void Matrix::on_b_row_combo_currentIndexChanged(int index)
{
    Storing b(b_last_row_length,b_last_column_length,b_input_LineEdit);

    ui->b_column_combo->setCurrentIndex(index);
    iniUI();

    for(int i = 0;i < b_last_row_length && i < b.row;i++)
        for(int j = 0;j < b_last_column_length && j < b.column;j++)
            b_input_LineEdit[i][j].setText(b.data[i][j]);
}

void Matrix::on_b_column_combo_currentIndexChanged(int)
{
    Storing b(b_last_row_length,b_last_column_length,b_input_LineEdit);

    iniUI();

    for(int i = 0;i < b_last_row_length && i < b.row;i++)
        for(int j = 0;j < b_last_column_length && j < b.column;j++)
            b_input_LineEdit[i][j].setText(b.data[i][j]);
}
