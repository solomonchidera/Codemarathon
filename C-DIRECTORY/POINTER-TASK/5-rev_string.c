#include "main.h"

void rev_string(char *s)
{
	int length, i;
	char ch;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		s[i] = ch;
		s[i] = s[length -i -1];
		s[length - i -1] = ch;
	}
}
