#ifndef PLURAL_H
#define PLURAL_H

#include <cmath>

constexpr auto RAD = 180.0 / 3.1415926;

enum Judging
{
    GREATER,
    LESS,
    EQUAL
};

enum Form
{
    NORMAL,
    POLAR
};

class Plural
{
private:
    double real, complex;
    double mold, angle;
    Judging J_real, J_complex;
    inline void normal_to_polar() {
        this->mold = sqrt(pow(this->real, 2) + pow(this->complex, 2));
        if(fabs(this->real)<1e-8){
            if(fabs(this->complex) < 1e-8)
                this->angle = 0;
            else if(this->complex > 0)
                this->angle = 90.0;
            else
                this->angle = -90.0;
        }
        else
            this->angle = atan(this->complex / this->real) * RAD;
    }
    inline void polar_to_normal() {
        this->real = this->mold * cos(this->angle / RAD);
        this->complex = this->mold * sin(this->angle / RAD);
    }
    inline void Judge() {
        if (fabs(this->real)<1e-8)
            J_real = EQUAL;
        else if (this->real > 0)
            J_real = GREATER;
        else
            J_real = LESS;

        if (fabs(this->complex)<1e-8)
            J_complex = EQUAL;
        else if (this->complex > 0)
            J_complex = GREATER;
        else
            J_complex = LESS;
    }
    inline void keep_five_decimal() {
        this->real = floor(this->real * 100000.00 + 0.5) / 100000.00;
        this->complex = floor(this->complex * 100000.00 + 0.5) / 100000.00;
        this->mold = floor(this->mold * 100000.00 + 0.5) / 100000.00;
        this->angle = floor(this->angle * 100000.00 + 0.5) / 100000.00;
    }

public:
    Plural(double = 0, double = 0, Form = NORMAL);
    Plural(const Plural&);
    void set(double = 0, double = 0, Form = NORMAL);
    Plural& operator=(const Plural&);
    Plural operator+(const Plural&)const;
    Plural operator-(const Plural&)const;
    Plural operator*(const Plural&)const;
    Plural operator/(const Plural&)const;
    inline double get_real(){
        return this->real;
    }
    inline double get_complex(){
        return this->complex;
    }
    inline double get_mold(){
        return this->mold;
    }
    inline double get_angle(){
        return this->angle;
    }
};

#endif // PLURAL_H
