#include "main.h"

int main(void)
{
	int num[10];

	int val = 0, a;
	
	for (a = 0; a < 10; a++)
	{
		num[a] = 5 + val;
		val = val+5;
	}

	for (a = 0; a < 10; a++)
	{
		printf("Hi %d ", num[a]);

	}
	putchar(10);
	return(0);
}
