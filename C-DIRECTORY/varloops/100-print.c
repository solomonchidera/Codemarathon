#include "chi.h"

int main(void)
{
	int i = 0;
	for (; i < 90; i++)
	{
		putchar(i + 48);
		if (i < 10)

			putchar(0 + i);
		else
			putchar(i);
	}
	putchar(10);
	return(0);
}
