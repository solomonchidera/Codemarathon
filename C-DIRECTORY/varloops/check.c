#include "chi.h"

int main(void)
{	int a, b, c;
	a = 0;

	for (; a < 100; a++)
	{
		b = a / 10;
		c = a % 10;
		if (b < c)
		{
			putchar('0' + b);
			putchar('0' + c);
		
			if (a != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return(0);
}
