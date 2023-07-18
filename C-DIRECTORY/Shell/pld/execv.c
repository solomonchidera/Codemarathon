#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	char *hold;
	/*char *name = "hello";*/
	hold = malloc(sizeof(char) * 4);
	hold[0] = malloc(sizeof(char) * 5);
	hold[0] = "hello";
	hold[0] = malloc(sizeof(char) * 5);
	hold[1] = "world";
	hold[0] = malloc(sizeof(char) * 4);
	hold[2] = "goat";
	hold[0] = malloc(sizeof(char) * 7);
	hold[3] = "ronaldo";
	while (hold[i] != NULL)
	{
		printf("%s ", hold[i]);
		i++;
	}
}
