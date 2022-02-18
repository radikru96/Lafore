#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <ostream>

class Employee {
private:
	const unsigned int id;
	float salary;
public:
	unsigned int static count;
	Employee( const float& _salary = 0.0 ) : id(count++), salary(_salary) {}
	friend std::ostream& operator<< ( std::ostream& os, const Employee& other);
	void set_salary( const float& _salary );
};

#endif
