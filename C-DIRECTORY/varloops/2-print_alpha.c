#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char low = 'a';
	char last = 'z';
	while (low <= last)
	{
		putchar(low);
		low++;
	}
	putchar(10);

	return(0);
}
