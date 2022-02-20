#include "date.h"

std::ostream& operator<< ( std::ostream& os, const date& _date)
{
	return os << _date.day << ":" << _date.month << ":" << _date.year;
}

std::istream& operator>> ( std::istream& is, date& _date)
{
	std::string sbuf;
	char cbuf[2];
	is >> sbuf;
	if ( sbuf.size() != 8 )
		return is;
	if ( (sbuf.c_str())[2] != '/' || (sbuf.c_str())[5] != '/' )
		return is;
	sbuf.copy( cbuf, 2, 0 );
	_date.day = atoi(cbuf);
	sbuf.copy( cbuf, 2, 3 );
	_date.month = atoi(cbuf);
	sbuf.copy( cbuf, 2, 6 );
	_date.year = atoi(cbuf);
	return is;
}