#include "chi.h"

int main(void)
{
	int i, a, b, c;
	i = 0;
	for (; i < 1000; i++)
	{
		a = i/100;
		b = (i / 10) % 10;
		c = i % 10;

		if (a != b && b != c && a != c && a < b && b < c)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);
			
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return(0);

}
