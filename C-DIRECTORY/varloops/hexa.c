#include "chi.h"

int main(void)
{
	int i = 0;

	for (; i< 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + (i - 10));

	}
	putchar(10);

	return(0);
}
