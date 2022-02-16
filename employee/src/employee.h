#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <istream>

class employee
{
	private:
		static unsigned int count;
		const unsigned int id;
		float salary;
	public:
		employee() : id{++count}, salary(0.0){}
		employee( const float& _salary ) : id(++count), salary(_salary){}
		friend std::ostream& operator<< ( std::ostream& os, const employee& other);
		void set_salary( const float& _salary );
};

#endif
