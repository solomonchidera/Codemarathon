#include "chi.h"

/**
 * main - the main guy in c programming(you can't do without it
 * @
 * Return 0 indicating success yea !!
 */
int main(void)
{
	char low = 'a';
	char last = 'z';
	char upper = 'A';
	char lastUpper = 'Z';

	for (;low <= last; low++)
	{
		putchar(low);
	}

	for (;upper <= lastUpper; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return(0);

}
