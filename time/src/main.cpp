#include <iostream>
#include "Time.h"

int main()
{
    const Time t1( 12, 30, 30 );
    Time t2;
    Time t3;
    std::cin >> t2;
    t3=t1+t2;
    std::cout << "t3=" << t3 << "\nt2=" << t2 << "\nt1=" << t1 << std::endl;
    return 0;
}