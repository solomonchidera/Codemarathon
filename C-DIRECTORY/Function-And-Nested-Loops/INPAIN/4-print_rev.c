#include "main.h"

void print_rev(char *s)
{
	int i = 0;
	int a;
	for (;  s[i]; i++);
	for (a= i; a >= 0; a--)
		_putchar(s[a]);
	_putchar(10);

}
