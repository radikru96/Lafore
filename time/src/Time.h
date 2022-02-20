#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>

class Time
{
	private:
		int h, m, s;
		void verifi();
	public:
		Time() : h(0), m(0), s(0){}
		Time(const int& _h,const int& _m,const int& _s);
		friend std::ostream& operator<< ( std::ostream& os, const Time& _t);
		friend std::istream& operator>> ( std::istream& is, Time& _t);
		Time operator+ ( const Time& other) const;
		Time& operator= ( const Time& other);
};

#endif
