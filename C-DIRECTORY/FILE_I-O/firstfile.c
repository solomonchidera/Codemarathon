#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	fptr = fopen("text.txt", "r");
	char content[1000];
	if (fptr != NULL)
	{
		printf("Successful !\n");
		fgets(content, 1000, fptr);
		printf("%s\n", content);
	}
	else if (fptr == NULL)
	{
		printf("Failed");
		return(-1);
	}
	return(0);
}
