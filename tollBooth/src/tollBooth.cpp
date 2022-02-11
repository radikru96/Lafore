#include "tollBooth.h"

void tollBooth::payingCar()
{ count++; cash+=0.5; }

void tollBooth::nopayCar()
{ count++; }

std::ostream& operator<< ( std::ostream& os, const tollBooth& other)
{ return os << "cars=" << other.count << "\tcash=" << other.cash; }
