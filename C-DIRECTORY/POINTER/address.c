#include "main.h"

int main(void)
{
	int x = 1;
	printf("The address of x(%d) is %d\n", x, &x);
	printf("x occupies %d bytes \n",x, sizeof(x));
	printf("The value of x = %d", *&x);
	return(0);
}
