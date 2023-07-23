#include "chi.h"
#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;/*incharge in printing \n x10*/

	while (i < 10)
	{	

		char a = 'a';/*incharge in printing the characters*/
		
		for (; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar(10);
		i++;
	}
}
