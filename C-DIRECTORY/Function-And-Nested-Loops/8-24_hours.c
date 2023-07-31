#include "main.h"

void jack_bauer(void)
{
	int hour = 0,minutes;
	for (; hour < 24; hour++)
	{
		minutes = 0;

		for (; minutes < 60; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar(10);
		}
	}
}
