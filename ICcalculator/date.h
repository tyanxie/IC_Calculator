#ifndef DATE_H
#define DATE_H

#include <QWidget>

namespace Ui {
class Date;
}

class Date : public QWidget
{
    Q_OBJECT

public:
    explicit Date(QWidget *parent = nullptr);
    ~Date();

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_dateEdit_2_dateChanged(const QDate &date);

    void on_dateEdit_dateChanged(const QDate &date);

    void on_radioButton_sub_clicked(bool checked);

    void on_radioButton_add_clicked(bool checked);

    void on_dateEdit_3_dateChanged(const QDate &date);

    void on_spinBox_year_valueChanged(int arg1);

    void on_spinBox_month_valueChanged(int arg1);

    void on_spinBox_day_valueChanged(int arg1);

private:
    Ui::Date *ui;
};

#endif // DATE_H
