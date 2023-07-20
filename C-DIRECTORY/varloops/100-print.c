#include "chi.h"

int main(void)
{
	int i = 0;
	while (i < 100)
	{
		int a = i / 10;
		int b = i % 10;

		if (a < b)
		{
			putchar('0' + a);
			putchar('0' + b);

			if (i != 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
		
	}
	putchar(10);
	return(0);
}
