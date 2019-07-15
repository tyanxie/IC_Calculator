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

public:
    Plural(double = 0, double = 0, Form = NORMAL);
    Plural(const Plural&);
    Plural& operator=(const Plural&);
    Plural operator+(const Plural&)const;
    Plural operator-(const Plural&)const;
    Plural operator*(const Plural&)const;
    Plural operator/(const Plural&)const;
};

#endif // PLURAL_H
