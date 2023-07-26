#include "main.h"

int main(void)
{
	int n[10];
	int a,b;

	for (a = 0; a < 10; a++)
	{
		n[a] = a + 120;/*set element at location a to a*/
	}

	/*Printing each element of the array*/

	for (b = 0; b < 10; b++)
	{
		printf("Element [%d] is %d\n", b, n[b]);
	}
	return(0);
}
