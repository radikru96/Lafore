#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H
#include <ostream>
class tollBooth
{
	private:
		unsigned int count;
		double cash;
	public:
		tollBooth() : count(0), cash(0.0){}
		void payingCar();
		void nopayCar();
		friend std::ostream& operator<< ( std::ostream& os, const tollBooth& other);
};
#endif
