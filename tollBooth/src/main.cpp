#include "tollBooth.h"
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <csignal>
using namespace std;

tollBooth tb;
struct termios old_tio, new_tio;

void signalHandler( int signum )
{
	tcsetattr( STDIN_FILENO, TCSANOW, &old_tio );
    cout << "End program. Car count = " << tb << "\nInterrupt signal (" << signum << ") received.\n";
    exit( 0 );
}

int main()
{
    std::signal( SIGINT, signalHandler );
	unsigned char c;
	bool noend = 1;
	cout << "press:\t\"p\" for paying\n\t\"d\" for nopay\n\t\"Esc\" or Ctrl+C for print result and exit\n";
	tcgetattr( STDIN_FILENO, &old_tio );
	new_tio=old_tio;
	new_tio.c_lflag &=(~ICANON & ~ECHO);
	tcsetattr( STDIN_FILENO, TCSANOW, &new_tio );
	while ( noend )
	{
		switch ( ( c = getchar() ) )
		{
		case 'p': tb.payingCar(); cout << "pressed p\n"; break;
		case 'd': tb.nopayCar(); cout << "pressed d\n"; break;
		case 27: cout << "pressed Esc\n"; noend=0; break;
		default: break;
		}
	}
	cout << "End program. Car count = " << tb << endl;
	tcsetattr( STDIN_FILENO, TCSANOW, &old_tio );
	return 0;
}