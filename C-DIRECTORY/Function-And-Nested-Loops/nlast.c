#include "chi.h"
#include "main.h"

int print_last_digit(int z)
{
	int a;
	int me = z % 10;// the only way we can get the last digit of a number
	if (z < 0)
	{
		_putchar(-z + 48);
		return(me)

	}
	else
	{
		_puchar(z + 48);
		return(me)
	}
}
