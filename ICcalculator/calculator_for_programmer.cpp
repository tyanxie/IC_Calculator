#include "calculator_for_programmer.h"

#include "calculator_for_programmer.h"
#include <cmath>

caculator_for_programmer::caculator_for_programmer(int ni, int ma)
    : num_init(ni), macha(ma), len_init(0), num_Dec(0),
      num_bin(nullptr), num_dec(nullptr), num_oct(nullptr), num_hex(nullptr) {
    length_judge();
    setDec();
    transfer_to_binary();
    transfer_to_Octal();
    transfer_to_decimal();
    transfer_to_hexadecimal();
}

void caculator_for_programmer::length_judge() {
    //设置初始输入的数字长度
    for (int i = 10, j = 1; 1; i *= 10, j++) {
        if (num_init%i == num_init) {
            len_init = j;
            break;
        }
    }
}

void caculator_for_programmer::setDec() {
    //如果输入就是十进制数，那就直接设置十进制数
    if (macha == 10) {
        num_Dec = num_init;
        return;
    }
    //将输入的进制数转换为数组，以统一转换为十进制数
    int *numarray = new int[len_init];
    int num_copy = num_init;
    for (int i = 0; i < len_init || num_copy != 0; i++)
    {
        numarray[i] = num_copy % 10;
        num_copy /= 10;
    }
    //根据进制数和数组将初始数字转换为十进制数
    for (int i = 0; i < len_init; i++)
    {
        num_Dec += numarray[i] * pow(macha, i);
    }
    delete[] numarray;
}

void caculator_for_programmer::transfer_to_binary() {
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

void caculator_for_programmer::transfer_to_Octal() {
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

void caculator_for_programmer::transfer_to_decimal() {
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

void caculator_for_programmer::transfer_to_hexadecimal() {
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
