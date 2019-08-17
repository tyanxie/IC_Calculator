#include "relationship.h"
#include "ui_relationship.h"
#include "relatives.h"
#include <string>

Relationship::Relationship(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Relationship)
{
    ui->setupUi(this);
    ui->input->setReadOnly(true);
}

Relationship::~Relationship()
{
    delete ui;
}



void Relationship::on_father_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("爸爸");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的爸爸");
    }
}


void Relationship::on_mother_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("妈妈");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的妈妈");
    }
}


void Relationship::on_elderbrother_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("哥哥");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的哥哥");
    }
}


void Relationship::on_youngerbrother_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("弟弟");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的弟弟");
    }
}


void Relationship::on_eldersister_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("姐姐");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的姐姐");
    }
}


void Relationship::on_youngersister_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("妹妹");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的妹妹");
    }
}


void Relationship::on_husband_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("丈夫");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的丈夫");
    }
}


void Relationship::on_wife_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("妻子");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的妻子");
    }
}


void Relationship::on_son_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("儿子");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的儿子");
    }
}


void Relationship::on_daughter_clicked()
{
    if(ui->input->document()->isEmpty()){
        ui->input->insertPlainText("女儿");
    }
    else {
        ui->input->moveCursor(QTextCursor::End);
        ui->input->insertPlainText("的女儿");
    }
}


void Relationship::on_repeal_clicked()
{
    QString s = ui->input->toPlainText();
    if(s.length() <= 2) {
        ui->input->clear();
    }
    else {
        s.chop(3);
        ui->input->setText(s);
    }
}

void Relationship::on_input_textChanged()
{
    if(ui->input->toPlainText() == ""){
        ui->output->setText("");
    }
    else {
        string s = ui->input->toPlainText().toStdString();
        calculator_relatives c(s);
        QString result = QString::fromStdString(c.get_result());
        ui->output->setText(result);
    }
}
