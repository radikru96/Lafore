#include "employee.h"

std::ostream& operator<< ( std::ostream& os, const employee& other)
{
	return os << "id:" << other.id << "\tsalary:" << other.salary;
}

void employee::set_salary( const float& _salary )
{
	salary=_salary;
}
