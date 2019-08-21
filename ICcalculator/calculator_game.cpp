#include "calculator_game.h"
#include <iostream>
#include <ctime>
using namespace std;


game_for_calculator::game_for_calculator()
    :_operand1(0), _operand2(0), _operator('\0'), result(0), flag(0), err(0)
{
    get_equation();
}


game_for_calculator::~game_for_calculator()
{
}

void game_for_calculator::get_equation() {
    srand((unsigned int)time(nullptr));
    int i = rand() % 4;
    _operand1 = rand() % 10;
    _operand2 = rand() % 10;
    while(!_operand2){
        _operand2 = rand() % 10;
    }

    switch (i) {
    case 0:
        _operator = '+';
        result = _operand1 + _operand2;
        break;
    case 1:
        _operator = '-';
        result = _operand1 - _operand2;
        break;
    case 2:
        _operator = '*';
        result = _operand1 * _operand2;
        break;
    case 3:
        _operator = '/';
        result = (double)_operand1 / (double)_operand2;
        break;
    default:
        err = 1;
        break;
    }
}

int game_for_calculator::get_left_operand() {
    return _operand1;
}

int game_for_calculator::get_right_operand() {
    return _operand2;
}

char game_for_calculator::get_operator() {
    return _operator;
}

double game_for_calculator::get_result() {
    return result;
}

//bool game_for_calculator::judge() {
//
//}
