#include "main.h"

void jack_bauer(void)
{
	int hour,minutes = 0;
	for (; hour <= 24; hour++)
	{
		for (; minutes <= 60; minutes++)
		{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(hour + ':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
				_putchar(10);

		}
	}
}
