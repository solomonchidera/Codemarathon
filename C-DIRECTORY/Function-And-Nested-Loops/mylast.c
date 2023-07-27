#include "main.h"

int my_lastdigit(int a)
{
	/*You should be working now*/

	int b;
	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return(-b);

	}
	else
	{
		_putchar(b + 48);
		return(b);
	}
}
