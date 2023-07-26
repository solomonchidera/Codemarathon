#include "main.h"

int main(void)
{
	int a[20];
	int b,c;
	for (b = 0; b < 20; b++)
	{
		a[b] = b + 45;
	}

	for (c = 0; c < 20; c++)
	{
		printf("Elements are from [%d] and there values are %d\n", c, a[c]);
	}

	return(0);
}
