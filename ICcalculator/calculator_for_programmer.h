#ifndef CALCULATOR_FOR_PROGRAMMER_H
#define CALCULATOR_FOR_PROGRAMMER_H


//该计算器不考虑小数输入
class calculator_for_programmer {
private:
    char num_init[100];
    int macha;
    int len_init;
    int flag;
    int num_Dec;

public:
    calculator_for_programmer(const char *ch = nullptr, int ma = 0);
    ~calculator_for_programmer()
    {
        delete[] num_bin;
        delete[] num_oct;
        delete[] num_dec;
        delete[] num_hex;
    }
    //void length_judge();
    int getflag();
    void setma(int m = 0);
    void operation_for_num();
    void setDec();
    void transfer_to_binary();
    void transfer_to_decimal();
    void transfer_to_Octal();
    void transfer_to_hexadecimal();
    void display();
    char* num_bin;
    char* num_oct;
    char* num_dec;
    char* num_hex;
};

#endif // CALCULATOR_FOR_PROGRAMMER_H
