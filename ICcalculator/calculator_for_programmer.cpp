#include "calculator_for_programmer.h"
#include <cmath>
#include <iostream>

calculator_for_programmer::calculator_for_programmer(const char *ch, int ma)
    : macha(ma), len_init(0), flag(0), num_Dec(0),
    num_bin(nullptr), num_oct(nullptr), num_dec(nullptr), num_hex(nullptr) {

    int j;
    for (int i = 0; i < 100; i++)
    {
        num_init[i] = '\0';
    }
    for (j = 0; j < 99 && ch[j] != '\0'; j++)
    {
        num_init[j] = ch[j];
    }
    len_init = j;
}

void calculator_for_programmer::setma(int m){
    macha = m;
}

int calculator_for_programmer::getflag(){
    return flag;
}

void calculator_for_programmer::operation_for_num(){
    setDec();
    if(!flag){
        transfer_to_binary();
        transfer_to_Octal();
        transfer_to_decimal();
        transfer_to_hexadecimal();
    }
}

void calculator_for_programmer::setDec() {
    //将输入的进制数字符串转换为数组，以统一转换为十进制数计算
    int *numarray = new int[len_init];
    for (int i = 0; i < len_init; i++)
    {
        switch (num_init[i]) {
        case '0':
            numarray[i] = 0;
            break;
        case '1':
            numarray[i] = 1;
            break;
        case '2':
            numarray[i] = 2;
            break;
        case '3':
            numarray[i] = 3;
            break;
        case '4':
            numarray[i] = 4;
            break;
        case '5':
            numarray[i] = 5;
            break;
        case '6':
            numarray[i] = 6;
            break;
        case '7':
            numarray[i] = 7;
            break;
        case '8':
            numarray[i] = 8;
            break;
        case '9':
            numarray[i] = 9;
            break;
        case 'a':
            numarray[i] = 10;
            break;
        case 'b':
            numarray[i] = 11;
            break;
        case 'c':
            numarray[i] = 12;
            break;
        case 'd':
            numarray[i] = 13;
            break;
        case 'e':
            numarray[i] = 14;
            break;
        case 'f':
            numarray[i] = 15;
            break;
        case '\0':
            break;
        default:
            flag = 1;

        }
    }
    //根据进制数和数组将初始数字转换为十进制数
    for (int i = 0; i < len_init; i++)
    {
        num_Dec += numarray[len_init - 1 - i] * pow(macha, i);
        if(num_Dec < 0){
            flag = 1;
            break;
        }
    }
    for (int i = 0; i < len_init; i++) {
        if(numarray[i] >= macha){
            flag = 1;
        }
    }
    delete[] numarray;
}

void calculator_for_programmer::transfer_to_binary() {
    //由于二进制数无法直接输出，所以手动计算，计算方法为短除取余
    //计算二进制数长度以设置数组
    int len = 0;
    for (int i = 0; 1; i++)
    {
        if (pow(2, i) > num_Dec) {
            len = i;
            break;
        }
        else if (pow(2, i) == num_Dec) {
            len = i + 1;
        }
    }
    //短除取余计算二进制数，数组存储最终结果
    int copy_num = num_Dec;
    int *result_array = new int[len];
    for (int i = 0; i < len || copy_num != 0; i++)
    {
        result_array[i] = copy_num % 2;
        copy_num /= 2;
    }
    //将结果存储于字符数组中
    num_bin = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        switch (result_array[len - 1 - i]) {
        case 0:
            num_bin[i] = '0';
            break;
        case 1:
            num_bin[i] = '1';
            break;
        default:
            break;
        }
    }
    num_bin[len] = '\0';
    delete[] result_array;
}

void calculator_for_programmer::transfer_to_Octal() {
    //计算八进制数长度以设置数组
    int len = 0;
    for (int i = 0; 1; i++)
    {
        if (pow(8, i) > num_Dec) {
            len = i;
            break;
        }
        else if (pow(8, i) == num_Dec) {
            len = i + 1;
        }
    }
    //短除取余计算十进制数，数组存储最终结果
    int copy_num = num_Dec;
    int *result_array = new int[len];
    for (int i = 0; i < len || copy_num != 0; i++)
    {
        result_array[i] = copy_num % 8;
        copy_num /= 8;
    }
    //将结果存储于字符数组中
    num_oct = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        switch (result_array[len - 1 - i]) {
        case 0:
            num_oct[i] = '0';
            break;
        case 1:
            num_oct[i] = '1';
            break;
        case 2:
            num_oct[i] = '2';
            break;
        case 3:
            num_oct[i] = '3';
            break;
        case 4:
            num_oct[i] = '4';
            break;
        case 5:
            num_oct[i] = '5';
            break;
        case 6:
            num_oct[i] = '6';
            break;
        case 7:
            num_oct[i] = '7';
            break;
        default:
            break;
        }
    }
    num_oct[len] = '\0';
    delete[] result_array;
}

void calculator_for_programmer::transfer_to_decimal() {
    //计算十进制数长度以设置数组
    int len = 0;
    for (int i = 0; 1; i++)
    {
        if (pow(10, i) > num_Dec) {
            len = i;
            break;
        }
        else if (pow(10, i) == num_Dec) {
            len = i + 1;
        }
    }
    //短除取余计算十进制数，数组存储最终结果
    int copy_num = num_Dec;
    int *result_array = new int[len];
    for (int i = 0; i < len || copy_num != 0; i++)
    {
        result_array[i] = copy_num % 10;
        copy_num /= 10;
    }
    //将结果存储于字符数组中
    num_dec = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        switch (result_array[len - 1 - i]) {
        case 0:
            num_dec[i] = '0';
            break;
        case 1:
            num_dec[i] = '1';
            break;
        case 2:
            num_dec[i] = '2';
            break;
        case 3:
            num_dec[i] = '3';
            break;
        case 4:
            num_dec[i] = '4';
            break;
        case 5:
            num_dec[i] = '5';
            break;
        case 6:
            num_dec[i] = '6';
            break;
        case 7:
            num_dec[i] = '7';
            break;
        case 8:
            num_dec[i] = '8';
            break;
        case 9:
            num_dec[i] = '9';
            break;
        default:
            break;
        }
    }
    num_dec[len] = '\0';
    delete[] result_array;
}

void calculator_for_programmer::transfer_to_hexadecimal() {
    //计算十六进制数长度以设置数组
    int len = 0;
    for (int i = 0; 1; i++)
    {
        if (pow(16, i) > num_Dec) {
            len = i;
            break;
        }
        else if (pow(16, i) == num_Dec) {
            len = i + 1;
        }
    }
    //短除取余计算十六进制数，数组存储最终结果
    int copy_num = num_Dec;
    int *result_array = new int[len];
    for (int i = 0; i < len || copy_num != 0; i++)
    {
        result_array[i] = copy_num % 16;
        copy_num /= 16;
    }
    //十六进制数中含有字母，只能使用char数组输出
    //将得到的int数组转换为char数组
    num_hex = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        switch (result_array[len - 1 - i]) {
        case 0:
            num_hex[i] = '0';
            break;
        case 1:
            num_hex[i] = '1';
            break;
        case 2:
            num_hex[i] = '2';
            break;
        case 3:
            num_hex[i] = '3';
            break;
        case 4:
            num_hex[i] = '4';
            break;
        case 5:
            num_hex[i] = '5';
            break;
        case 6:
            num_hex[i] = '6';
            break;
        case 7:
            num_hex[i] = '7';
            break;
        case 8:
            num_hex[i] = '8';
            break;
        case 9:
            num_hex[i] = '9';
            break;
        case 10:
            num_hex[i] = 'A';
            break;
        case 11:
            num_hex[i] = 'B';
            break;
        case 12:
            num_hex[i] = 'C';
            break;
        case 13:
            num_hex[i] = 'D';
            break;
        case 14:
            num_hex[i] = 'E';
            break;
        case 15:
            num_hex[i] = 'F';
            break;
        default:
            break;
        }
    }
    num_hex[len] = '\0';
    delete[] result_array;
}
