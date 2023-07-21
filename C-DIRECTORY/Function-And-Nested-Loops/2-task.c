#include "main.h"
#include "chi.h"

void print_alphabet_x10(void)
{
	char a = 'a';
	int b= 0;
	int s = 0;

	for (; b < 10; b++)
	{
		for (; s < 26; s++)
		{
			putchar(a + s);
		}
	_putchar(10);
	}
}
