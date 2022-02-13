#include "time.h"

time(const int _h,const int _m,const int _s)
{
	h=_h;
	m=_m;
	s=_s;
}

friend std::ostream& operator<< ( std::ostream& os, const time& _t);
friend std::istream& operator>> ( std::istream& is, time& _t);
time operator+ ( const time& other) const;
time& operator= ( const time& other;
}

#endif
