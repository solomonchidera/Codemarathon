#include "main.h"
int areaof(int len, int width)
{
	int c = len * width;
	return(c);
}
int main(void)
{
	int a = 30, b = 10;
	int rec_area;
	rec_area = areaof(a, b);
	printf("%d\n", rec_area);
	return(0);
}
