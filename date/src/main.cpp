#include <iostream>
#include "date.h"

int main()
{
    date d1(25,02,96);
    date d2;
    std::cin >> d2;
    std::cout << d1 << "\t" << d2 << std::endl;
    return 0;
}