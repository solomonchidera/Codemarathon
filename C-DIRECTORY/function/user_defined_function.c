#include <stdio.h>
#include <math.h>

/* creating a function */

int add_three_numbers(int first, int second, int third)
{
	int result = first + second + third;

	return(result);
}

/*calling our function inside the main function*/

int main(void)
{
	int  firstnum = 65;

	int secondnum = 14;

	int thirdnum = 6;

/* we are summing three numbers using the function that we created */

	int total = add_three_numbers(firstnum, secondnum, thirdnum);

	printf("The total of firstnum %d + secondnum %d + thirdnum %d is = : %d\n",firstnum, secondnum, thirdnum, total);

	return(0);
}
