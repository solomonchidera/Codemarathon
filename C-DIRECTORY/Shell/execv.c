#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

	char *argv[] = {"/bin/ls", "-l", NULL};

	int val = execve(argv[0], argv, NULL);
	if (val == -1)
	{
		perror("Failed");
	}
	printf("Success");

	return(0);
}
