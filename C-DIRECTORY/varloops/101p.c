#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 1000; i++)
		if (i / 100 < i / 10 % 10 && i / 10 % 10 < i % 10)
			printf("%d%d%d%s", i / 100, i / 10 % 10, i % 10, i != 789 ? ", " : "\n");
	return 0;
}
