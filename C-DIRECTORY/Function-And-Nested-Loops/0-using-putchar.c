#include "chi.h"
#include "main.h"
int main(void)
{
	int _putchar(char c);

	char put[] = "_putchar";
	int i =0;
	while (put[i] != '\0')
	{
		_putchar(put[i]);
		i++;
	}
	_putchar(10);
	return(0);
}
