#include "main.h"

int main(void)
{
	char name[];

	printf("what is your name? :");
	scanf("%s", &name[]);
	for (int i = 0; i <= name; i++)
		printf("Your name is %s ", name[]);

	return(0);
}
