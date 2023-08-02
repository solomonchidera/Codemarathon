#include "main.h"

int fibonacci(int i)
{
	if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	return(fibonacci(i - 1) + fibonacci(i - 2));
}

int main(void)
{
	int i = 10;
	int result = fibonacci(i);
	printf("%d\n", result);
	return (0);
}
