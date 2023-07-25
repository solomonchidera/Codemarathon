#include "main.h"

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	n = 40;
	p = &n;
	c = 'A';
	pp = &c;


	printf("Value of 'c': %d ('%c'\n)", c, c);
	printf("Address of 'c':  %p\n", &c);
	printf("Value of f 'pp': %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of n: %p\n", &n);
	printf("Value of p: %p\n", p);
	/*Dereferencing */
	*p = 402;
	*pp = 'o';
	/*printing the derefernced variables*/

	printf("Value of 'n': %d\n", n);
	printf("Value of '*pp': %d\n", *pp);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
	return (0);
}
