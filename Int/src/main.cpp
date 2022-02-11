#include <iostream>
#include "Int.h"
using namespace std;

int main()
{
	Int a,b,c;
	cout << "enter first number..\n";
	cin >> a;
	cout << "enter second number..\n";
	cin >> b;
	cout << "a = " << a << "\nb = " << b << "\na + b = c = " << (c = a + b) << endl;
	const Int d( a + b + c);
	cout << "a + b + c = " << d << endl;
	c = d + d;
	cout << "c = " << c << endl;
	return 0;
}
