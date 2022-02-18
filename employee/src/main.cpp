#include <iostream>
#include "employee.h"


int main()
{
	Employee e1;
	float buf;
	std::cout << "Enter salary for first employee\n";
	std::cin >> buf;
	e1.set_salary(buf);
	std::cout << "Enter salary for second employee\n";
	std::cin >> buf;
	Employee e2(buf);
	std::cout << "Enter salary for thirth employee\n";
	std::cin >> buf;
	Employee e3(buf);
	std::cout << "person\t" << e1 << "\nperson\t" << e2 << "\nperson\t" << e3 << std::endl;
	return 0;
}
