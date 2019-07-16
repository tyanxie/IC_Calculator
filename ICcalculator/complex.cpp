#include "complex.h"
#include "ui_complex.h"

Complex::Complex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Complex)
{
    ui->setupUi(this);
}

Complex::~Complex()
{
    delete ui;
}

void Complex::on_input_a_combo_currentIndexChanged(int index)
{
    if(index==0){
        ui->input_a_ra->setText("＋");
        ui->input_a_i->setText("i");
    }
    else {
        ui->input_a_ra->setText("∠");
        ui->input_a_i->setText("°");
    }
    Complex::on_equal_push_pressed();
}

void Complex::on_input_b_combo_currentIndexChanged(int index)
{
    if(index==0){
        ui->input_b_ra->setText("＋");
        ui->input_b_i->setText("i");
    }
    else {
        ui->input_b_ra->setText("∠");
        ui->input_b_i->setText("°");
    }
    Complex::on_equal_push_pressed();
}

void Complex::on_equal_push_pressed()
{
    Plural a,b,result;
    bool flag = true;
    if(ui->input_a_combo->currentText()=="直角坐标")
        a.set(ui->input_a1->text().toDouble(),ui->input_a2->text().toDouble(),NORMAL);
    else
        a.set(ui->input_a1->text().toDouble(),ui->input_a2->text().toDouble(),POLAR);
    if(ui->input_b_combo->currentText()=="直角坐标")
        b.set(ui->input_b1->text().toDouble(),ui->input_b2->text().toDouble(),NORMAL);
    else
        b.set(ui->input_b1->text().toDouble(),ui->input_b2->text().toDouble(),POLAR);

    switch (ui->operator_combo->currentIndex()){
    case 0:
        result = a + b;
        break;
    case 1:
        result = a - b;
        break;
    case 2:
        result = a * b;
        break;
    case 3:
        if(fabs(b.get_mold())<1e-8){
            flag = false;
            break;
        }
        result = a / b;
        break;
    default:
        flag = false;
        break;
    }
    if(flag){
        ui->output_a1->setText(QString::asprintf("%.5lf",result.get_real()));
        ui->output_a2->setText(QString::asprintf("%.5lf",fabs(result.get_complex())));
        ui->output_b1->setText(QString::asprintf("%.5lf",result.get_mold()));
        ui->output_b2->setText(QString::asprintf("%.5lf",result.get_angle()));
        if(result.get_complex()>=0)
            ui->label_7->setText("＋");
        else
            ui->label_7->setText("－");
    }
    else {
        ui->output_a1->setText("Error");
        ui->output_a2->setText("Error");
        ui->output_b1->setText("Error");
        ui->output_b2->setText("Error");
    }
}

void Complex::on_operator_combo_currentIndexChanged(int)
{
    Complex::on_equal_push_pressed();
}

void Complex::on_input_a1_textChanged(const QString &)
{
    Complex::on_equal_push_pressed();
}

void Complex::on_input_a2_textChanged(const QString &)
{
    Complex::on_equal_push_pressed();
}

void Complex::on_input_b1_textChanged(const QString &)
{
    Complex::on_equal_push_pressed();
}

void Complex::on_input_b2_textChanged(const QString &)
{
    Complex::on_equal_push_pressed();
}
