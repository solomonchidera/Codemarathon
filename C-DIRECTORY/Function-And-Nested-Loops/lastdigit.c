#include "main.h"
#include "chi.h"

int print_last_digit(int a)
{
	int last;
	last = a % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return(-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
