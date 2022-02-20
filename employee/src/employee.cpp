#define EMPLOYEE_CPP
#include "employee.h"

std::ostream& operator<< ( std::ostream& os, const Employee& other)
{
	return os << "id:" << other.id << "\tsalary:" << other.salary;
}

void Employee::set_salary( const float& _salary )
{
	salary=_salary;
}
