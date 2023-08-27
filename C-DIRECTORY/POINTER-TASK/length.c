#include "main.h"

int len(char *s)
{
	int rr;

	while (s[rr] != '\0')
	{
		rr++;
	}
	return (rr);
}
