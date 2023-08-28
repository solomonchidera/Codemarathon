#include "main.h"

void puts_half(char *str)
{
	int length, i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 1)
	{
		i = (length -1) / 2;
		i += 1;
	}
	else
	{
		i = length / 2;
	}
}
