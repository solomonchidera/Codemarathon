#include "main.h"

int main(void)
{
	char a[26];
	int b,c;

	for (b = 0; b < 26; b++)
	{
		a[b] = b + 'A';
	}

	for (c = 0; c < 26; c ++)
	{
		printf("The elements are [%d] values are %c\n", c, a[c]);
	}
	return(0);
}
