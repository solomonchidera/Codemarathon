#include "main.h"

void hour_min(void)
{
	int a = 0, b;
	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(10);
			b++;
		}
		a++;
	}
}

int main(void)
{
	hour_min();
	return(0);
}
