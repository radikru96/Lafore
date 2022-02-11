#ifndef INT_H
#define INT_H
#include <iostream>
class Int
{
	private:
		int value;
	public:
		Int() : value(0) {}
		Int( const int& other ) : value(other) {}
		friend std::ostream& operator<< ( std::ostream& os, const Int& other);
		friend std::istream& operator>> ( std::istream& is, Int& other);
		Int &operator= ( const Int& other);
		Int operator+ ( const Int& other) const;
};
#endif
