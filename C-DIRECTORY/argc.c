#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The program name is: %s\n", argv[0]);

    printf("The total number of arguments is: %d\n", argc);

    // Print the additional arguments
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
