#include "Int.h"

std::ostream& operator<< ( std::ostream& os, const Int& other)
{ return os << other.value;}

std::istream& operator>> ( std::istream& is, Int& other)
{ return is >> other.value;}

Int &Int::operator= ( const Int& other)
{
	value = other.value;
	return *this;
}

Int Int::operator+ ( const Int& other)
{
	Int retval(value+other.value);
	return retval;
}
