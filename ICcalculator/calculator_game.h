#ifndef CALCULATOR_GAME_H
#define CALCULATOR_GAME_H


class game_for_calculator
{
private:
    int _operand1;
    int _operand2;
    char _operator;
    double result;
    bool flag;
    bool err;
public:
    game_for_calculator();
    ~game_for_calculator();
    void get_equation();
    int get_left_operand();
    int get_right_operand();
    char get_operator();
    double get_result();
    //bool judge();
};

#endif // CALCULATOR_GAME_H
