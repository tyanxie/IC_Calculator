#include "clock.h"
int table[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};


Clock::Clock(int y,int m,int d)
{
    years=y;
    months=m;
    days=d;

}

Clock& Clock::operator=(const Clock &d)
{
    if(this!=&d)
    {
        years=d.years;
        months=d.months;
        days=d.days;
    }
    return *this;
}

Clock& Clock::operator+(int day)
{
    while(day > 365)
    {
        if(ISleapyear() && day > 366)
        {
            years++;
            day = day - 366;
        }
        else
        {
            years++;
            day = day - 365;
        }
    }
    while(day >= Getmonthsday())
    {
        //注意这里的次序问题,一定先减 再加 最后再判断.
        //如果顺序错了会出BUG的.
        day = day - Getmonthsday();
        months++;
        if(months > 12)
        {
            years++;
            months = 1;

        }
    }
    while(day > 0)
    {
        DateAdvance();
        day = day - 1;
        days++;
        DateAdvance();
    }
    return *this;
}



//先减去一年，然后再使用加的重载,所以只需写一个无懈可击的加算法就够了
Clock& Clock::operator-(int day)
{
    while(day > 365)
    {
        if(ISleapyear() && day >366)
        {
            day = day - 366;
            years--;
        }
        else
        {
            day = day - 365;
            years--;
        }
    }
    if(ISleapyear())
    {
        day = 366 - day;
        years--;
    }
    else
    {
        day = 365 - day;
        years--;
    }
    operator+(day);
    return *this;
}


void Clock::DateAdvance() //用于出现可以进化的情况
  {
    if (days > Getmonthsday())
    {
      months++;
      days = 1;
    }
    if (months > 12)
    {
      years++;
      months = 1;
    }
  }




bool Clock::operator == (const Clock& d)
 {
   return( (years == d.years)&& (months == d.months)&&(days == d.days));
 }


 bool Clock::operator != (const Clock& d)
 {
   return !(*this == d);
 }

 bool Clock::operator >(const Clock& d)
 {
   if ((years > d.years )||
     (years == d.years&&months > d.months)
     || (years == d.years&&months == d.months && days > d.days))
   {
     return true;
   }
   return false;
 }


 bool Clock::operator < (const Clock& d)
 {
   return !(*this > d);
 }


 bool Clock::operator >= (const Clock& d)
 {
   return (*this == d) && (*this > d);
 }


 bool Clock::operator <= (const Clock& d)
 {
   return (*this == d) && (*this < d);
 }


 int Clock::operator-(Clock D)
 {
   int count = 0;
   if (*this > D)
   {
     while (*this != D)
     {
       D.operator+(1);
       count++;
     }
   }
   else
   {
     while (*this != D)
     {
       operator+(1);
       count++;
     }

   }
   return count;
 }



 bool Clock::ISleapyear()
{
     if (((years % 4 == 0 )&& (years % 100 != 0)) || (years % 400 == 0))
     {
       return true;
     }
     return false;
 }



   int Clock::Getmonthsday()
   {
     int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
     if (ISleapyear() && months == 2)
     {
       return 29;
     }
     return monthDays[months];
   }



   int Clock::Getmonths()
   {
       return months;
   }
   int Clock::Getyears()
   {
       return years;
   }
   int Clock::Getdays()
   {
       return days;
   }



   int Clock::Date_to_Days(Clock &C)
   {
       Clock A=C;
       int sum = 0;
       sum += A.years * 365;
       sum += A.years / 4 + A.years / 400 - A.years / 100;
       //闰年+1


       sum += A.days;
       if(A.ISleapyear())
       {
          for(int i=0;i<A.months-1;i++)
          sum += table[1][i];
       }
       else if (!A.ISleapyear())
       {
           for(int i=0;i<A.months-1;i++)
           sum += table[0][i];
       }
       return sum;
   }

   Clock Clock::Days_to_Date(int n)
   {
       int rest = n,y=1,m=1,d;
       while(1)
       {
           if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))

           {
               if(rest <= 366)
                   break;
               else rest -= 366;
           }
           else {
               if(rest <= 365)
                   break;
               else rest -=365;
           }
           y++;
       }
       y--;
       while (1) {
           if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
           {
               if(rest > table[1][m-1])
               {
                   rest -= table[1][m-1];
               }
               else break;
           }
           else
           {
               if(rest > table[0][m-1])
               {
                   rest -= table[0][m-1];
               }
               else  break;

           }
           m++;
       }
       d=rest;
       Clock temp(y,m,d);
       return temp;
   }
