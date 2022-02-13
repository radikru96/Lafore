#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>

class time
{
	private:
		int h,m,s;
	public:
		time() : h(0), m(0), s(0){}
		time(const int _h,const int _m,const int _s);
		friend std::ostream& operator<< ( std::ostream& os, const time& _t);
		friend std::istream& operator>> ( std::istream& is, time& _t);
		time operator+ ( const time& other) const;
		time& operator= ( const time& other;
}

#endif
