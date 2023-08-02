#include "main.h"

void print(char c)
{
	write(1, &c, 1);
}

void print_alpha(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		print(c);
		c = c + 1;
	}
}

int main(void)
{
	print_alpha();
	print(10);
	return (0);
}
