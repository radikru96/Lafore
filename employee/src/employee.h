#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <ostream>

class Employee {
	static unsigned int count;
private:
	float salary;
	const unsigned int id;
public:
	Employee( const float& _salary = 0.0 ) : id(count++), salary(_salary) {}
	friend std::ostream& operator<< ( std::ostream& os, const Employee& other);
	void set_salary( const float& _salary );
};
#ifndef EMPLOYEE_CPP
#define EMPLOYEE_CPP
unsigned int Employee::count=0;
#endif
#endif
