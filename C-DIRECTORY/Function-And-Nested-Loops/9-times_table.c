#include "main.h"

void times_table(void)
{
	int zero = 0, nine;
	
	for (; zero <= 10; zero++)
	{
		nine = 0;

		for (; nine <= 10; nine++)
		{
			printf("%d, ", nine);
		}
		_putchar(10);

	}
}

int main(void)
{
	times_table();
	return(0);
}
