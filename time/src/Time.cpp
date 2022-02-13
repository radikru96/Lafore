#include "Time.h"

void Time::verifi()
{
	if ( s > 59 )
	{
		m += s / 60;
		s -= (s/60)*60;
	}
	if ( m > 59 )
	{
		h += m / 60;
		m -= (m/60)*60;
	}
	if ( h > 23 )
	{
		h -= (h/24)*24;
	}
}

Time::Time(const int _h,const int _m,const int _s)
{
	h=_h;
	m=_m;
	s=_s;
	verifi();
}

std::ostream& operator<< ( std::ostream& os, const Time& _t)
{
	return os << _t.h << ":" << _t.m << ":" << _t.s;
}

std::istream& operator>> ( std::istream& is, Time& _t)
{
	std::string sbuf;
	char cbuf[2];
	is >> sbuf;
	if ( sbuf.size() != 8 )
		return is;
	if ( (sbuf.c_str())[2] != ':' || (sbuf.c_str())[5] != ':' )
		return is;
	sbuf.copy( cbuf, 2, 0 );
	_t.h = atoi(cbuf);
	sbuf.copy( cbuf, 2, 3 );
	_t.m = atoi(cbuf);
	sbuf.copy( cbuf, 2, 6 );
	_t.s = atoi(cbuf);
	_t.verifi();
	return is;
}

Time Time::operator+ ( const Time& other) const
{
	Time val( h+other.h, m+other.m, s+other.s );
	val.verifi();
	return val;
}

Time& Time::operator= ( const Time& other)
{
	s=other.s;
	m=other.m;
	h=other.h;
	verifi();
	return *this;
}
