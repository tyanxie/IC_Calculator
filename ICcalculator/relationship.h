#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H

#include <QWidget>

namespace Ui {
class Relationship;
}

class Relationship : public QWidget
{
    Q_OBJECT

public:
    explicit Relationship(QWidget *parent = nullptr);
    ~Relationship();

private slots:


    void on_father_clicked();

    void on_mother_clicked();

    void on_elderbrother_clicked();

    void on_youngerbrother_clicked();

    void on_eldersister_clicked();

    void on_youngersister_clicked();

    void on_husband_clicked();

    void on_wife_clicked();

    void on_son_clicked();

    void on_daughter_clicked();

    void on_repeal_clicked();

    void on_input_textChanged();

private:
    Ui::Relationship *ui;
};

#endif // RELATIONSHIP_H
