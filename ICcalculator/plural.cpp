#include "plural.h"
#include <iostream>
#include <exception>
#include <cmath>

using namespace std;

Plural::Plural(double a, double b, Form form) {
    if (form == NORMAL) {
        this->real = a;
        this->complex = b;
        normal_to_polar();
    }
    else
    {
        this->mold = a;
        this->angle = b;
        polar_to_normal();
    }
    Judge();
}

Plural::Plural(const Plural& p) {
    this->real = p.real;
    this->complex = p.complex;
    this->angle = p.angle;
    this->mold = p.mold;
    this->J_complex = p.J_complex;
    this->J_real = p.J_real;
}

Plural& Plural::operator=(const Plural& p) {
    if (&p == this)
        return *this;
    this->real = p.real;
    this->complex = p.complex;
    this->angle = p.angle;
    this->mold = p.mold;
    this->J_complex = p.J_complex;
    this->J_real = p.J_real;
    return *this;
}

Plural Plural::operator+(const Plural& p)const {
    Plural new_p;
    new_p.real = this->real + p.real;
    new_p.complex = this->complex + p.complex;
    new_p.normal_to_polar();
    new_p.Judge();
    return new_p;
}

Plural Plural::operator-(const Plural& p)const {
    Plural new_p;
    new_p.real = this->real - p.real;
    new_p.complex = this->complex - p.complex;
    new_p.Judge();
    new_p.normal_to_polar();
    return new_p;
}

Plural Plural::operator*(const Plural& p)const {
    Plural new_p;
    new_p.mold = this->mold * p.mold;
    new_p.angle = this->angle + p.angle;
    new_p.polar_to_normal();
    new_p.Judge();
    return new_p;
}

Plural Plural::operator/(const Plural& p)const {
    Plural new_p;
    new_p.mold = this->mold / p.mold;
    new_p.angle = this->angle - p.angle;
    new_p.polar_to_normal();
    new_p.Judge();
    return new_p;
}
