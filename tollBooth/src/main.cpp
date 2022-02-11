#include "tollBooth.h"
#include <iostream>
#include <ncurses.h>
using namespace std;

int Getch();

int main()
{
	tollBooth tb;
	int key;
	bool noend = 1;
	cout << "press:\t\"p\" for paying\n\t\"d\" for nopay\n\t\"Esc\" for print result and exit\n";
	while ( noend )
	{
		switch ( ( key = Getch() ) )
		{
		case 'p': tb.payingCar(); cout << "pressed p\n"; break;
		case 'd': tb.nopayCar(); cout << "pressed p\n"; break;
		case 27: cout << "pressed Esc\n"; noend=0; break;
		default:
			  cout << key << endl << tb << endl;
			       break;
		}
	}
	cout << "End program. Car count = " << tb << endl;
	return 0;
}

int Getch()
{
	int key;
	initscr();
	endwin();
	noecho();
	keypad(stdscr, TRUE);
	key = getch();
	return key;
}
