#include "chi.h"

int main(void)
{

	int i = 0;
	for (; i < 10; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		
	}
	putchar(10);

	return(0);
}
