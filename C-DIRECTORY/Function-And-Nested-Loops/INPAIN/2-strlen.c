#include "main.h"

int _strlen(char *s)
{
	int count = 0, i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		count = count + 1;

	}
	return(count);
}
