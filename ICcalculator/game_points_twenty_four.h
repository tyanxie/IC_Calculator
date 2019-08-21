#ifndef GAME_POINTS_TWENTY_FOUR_H
#define GAME_POINTS_TWENTY_FOUR_H


#include <string>
using namespace std;

class points_twenty_four
{
private:
    int num[4];
    char op[3];
    int input_num[4];
    char input_op[3];
    string result;
    string suggested_answer;
    bool flag;
public:
    void get_question();
    void get_user_answer(int _num[],char _op[]);
    void judge();
    string get_suggested_answer();
    int* get_num();
    char* get_op();
    string get_result();
    string output_suggested_answer();
    bool get_flag();
    points_twenty_four();
    ~points_twenty_four();
};

#endif // GAME_POINTS_TWENTY_FOUR_H
