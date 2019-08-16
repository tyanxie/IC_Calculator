#ifndef CLOCK_H
#define CLOCK_H


class Clock
{
public:
    Clock(int,int,int);
    Clock& operator=(const Clock& d);
    Clock& operator+(int day);
    Clock& operator-(int day);
    int operator-(Clock D);
    bool operator>(const Clock& d);
    bool operator<(const Clock& d);
    bool operator>=(const Clock& d);
    bool operator<=(const Clock& d);
    bool operator==(const Clock& d);
    bool operator!=(const Clock& d);
    void DateAdvance();
    bool ISleapyear();
    int Getmonthsday();
    int Getmonths();
    int Getyears();
    int Getdays();
    int Date_to_Days(Clock &A);
    Clock Days_to_Date(int n);

private:
    int years;
    int months;
    int days;
};

#endif // CLOCK_H
