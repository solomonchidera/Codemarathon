#include "main.h"

int main(void)
{
	char str1[] = "Solomon";
	printf("%s is trying\n",str1);

	int length = strlen(str1);
	printf("This is the total length of str1 element: %d\n",length);
	char str2[8];
	strcpy(str2, str1);
	printf("str2 is %s\n",str2);

	char str3[7] = " lily";
	printf("Concatenation of str1 and str3 %s \n", strcat(str1, str3));
	return(0);

}
