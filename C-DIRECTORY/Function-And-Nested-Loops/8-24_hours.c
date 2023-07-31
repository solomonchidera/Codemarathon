#include "main.h"

void jack_bauer(void)
{
	int hour,minutes,seconds = 0;
	for (; hour <= 24; hour++)
	{
		for (; minutes <= 60; minutes++)
		{
			for (; seconds <= 60; seconds++)
			{
				putchar((hour / 10) + '0');
				putchar((hour % 10) + '0');
				putchar(hour + ':');
				putchar((minutes / 10) + '0');
				putchar((minutes % 10) + '0');
				putchar(10);
			}
		}
	}
}
