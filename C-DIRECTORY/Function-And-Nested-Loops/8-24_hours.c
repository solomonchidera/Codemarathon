#include "main.h"

void jack_bauer(void)
{
	int hour,minutes = 0;
	for (; hour <= 24; hour++)
	{
		for (; minutes <= 60; minutes++)
		{
			printf("%02d:%02d", hour, minutes);
		}
	}
}
