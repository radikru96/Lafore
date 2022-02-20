#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class date
{
private:
    unsigned int day,month,year;
public:
    date(const unsigned int& _day=0, const unsigned int& _month=0, const unsigned int& _year=0) : day(_day), month(_month), year(_year) {}
    friend std::ostream& operator<< ( std::ostream& os, const date& _date);
    friend std::istream& operator>> ( std::istream& is, date& _date);
};

#endif