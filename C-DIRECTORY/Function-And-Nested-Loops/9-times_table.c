#include "main.h"

void times_table(void)
{
	int a,b, d;
	int c = 9;

	
	for (a = 0; a < c; a++)
	{
		for (b = 0; b < c; b++)
		{
			d = a * b;
			_putchar(d + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar(10);
	}
}


int main(void)
{
	times_table();
	return(0);
}
