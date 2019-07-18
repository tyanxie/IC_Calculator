#ifndef CALCULATOR_FOR_PROGRAMMER_H
#define CALCULATOR_FOR_PROGRAMMER_H


//该计算器不考虑小数输入
class caculator_for_programmer {
public:
    caculator_for_programmer(int ni = 0, int ma = 0);
    ~caculator_for_programmer() { }
    void length_judge();
    void setDec();
    void transfer_to_binary();
    void transfer_to_decimal();
    void transfer_to_Octal();
    void transfer_to_hexadecimal();
    void display();
private:
    int num_init;
    int macha;
    int len_init;
    int num_Dec;
    char* num_bin;
    char* num_oct;
    char* num_dec;
    char* num_hex;
};

#endif // CALCULATOR_FOR_PROGRAMMER_H
