#include "main.h"

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}

}

int main(void)
{
	int i = 5;
	int result = factorial(i);
	printf("The factorial of %d is %d\n", i, result);
	return (0);
}
