#include "main.h"
#include "chi.h"

int main(void)
{
	int c;

	my_lastdigit(345);
	my_lastdigit(3467);
	my_lastdigit(3460);
	c = my_lastdigit(-1024);
	_putchar('0' + c);
	_putchar(10);
	return(0);
}
