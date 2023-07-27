#include "main.h"
#include "2-strlen.c"

void rev_string(char *s)
{
	int length = _strlen(s);
	char *start = s;
	char * end = s + length - 1;
	char *a;
	char holder;
	(void)*a;
	for (a = start; start < end; start++, end--)
	{
		holder = *start;
		*start = *end;
		*end = holder;
	}

	
}
