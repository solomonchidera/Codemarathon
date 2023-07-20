#include "chi.h"

int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		putchar(a + 48);
		if (a < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return(0);
}
