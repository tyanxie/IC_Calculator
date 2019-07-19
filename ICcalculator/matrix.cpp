#include "matrix.h"
#include "ui_matrix.h"
#include "matrix_bottom.h"

Matrix::Matrix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Matrix)
{
    ui->setupUi(this);
/*
    ui->a_input_grid->setStyleSheet("background:transparent;border:2px solid black;");

    ui->b_input_grid->setStyleSheet("background:transparent;border:2px solid black;");

    ui->output_grid->setStyleSheet("background:transparent;border:2px solid black;");
*/
    QSizePolicy sizepolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);

    QFont font("楷体",20);

    a_last_row_length = 1;
    a_last_colunm_length = 1;
    b_last_row_length = 1;
    b_last_column_length = 1;

    a_input_LineEdit = new QLineEdit*[1];
    a_input_LineEdit[0] = new QLineEdit[1];

    b_input_LineEdit = new QLineEdit*[1];
    b_input_LineEdit[0] = new QLineEdit[1];

    a_input_LineEdit[0][0].setSizePolicy(sizepolicy);
    a_input_LineEdit[0][0].setMaximumSize(54,54);
    a_input_LineEdit[0][0].setFont(font);
    ui->a_input_gridLayout->addWidget(&a_input_LineEdit[0][0],0,0);

    b_input_LineEdit[0][0].setSizePolicy(sizepolicy);
    b_input_LineEdit[0][0].setMaximumSize(54,54);
    b_input_LineEdit[0][0].setFont(font);
    ui->b_input_gridLayout->addWidget(&b_input_LineEdit[0][0],0,0);
}

Matrix::~Matrix()
{
    for (int i = 0; i < a_last_row_length; ++i)
        delete [] a_input_LineEdit[i];
    delete [] a_input_LineEdit;

    for (int i = 0; i < b_last_row_length; ++i)
        delete [] b_input_LineEdit[i];
    delete [] b_input_LineEdit;
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
    a_last_colunm_length = ui->a_column_combo->currentIndex() + 1;

    b_last_row_length = ui->b_row_combo->currentIndex() + 1;
    b_last_column_length = ui->b_column_combo->currentIndex() + 1;

    QSizePolicy sizepolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);

    QFont font("楷体",20);

    a_input_LineEdit = new QLineEdit*[a_last_row_length];
    for(int i = 0; i < a_last_row_length; ++i){
        a_input_LineEdit[i] = new QLineEdit[a_last_colunm_length];
        for(int j = 0; j < a_last_colunm_length; ++j){
            a_input_LineEdit[i][j].setSizePolicy(sizepolicy);
            a_input_LineEdit[i][j].setMaximumSize(54,54);
            a_input_LineEdit[i][j].setFont(font);
            ui->a_input_gridLayout->addWidget(&a_input_LineEdit[i][j],i,j);
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
        }
    }
}

void Matrix::compute(){

}

void Matrix::on_a_row_combo_currentIndexChanged(int)
{
    iniUI();
}
