#include "main.h"
#include "chi.h"

void print_alphabet_x10(void)
{
	int z;
	char a = 'a';

	for (z = 0; z < 10; z++)
	{
		for (; a <= 'z'; a++)
			_putchar(a);

		_putchar(10);
	}
}
