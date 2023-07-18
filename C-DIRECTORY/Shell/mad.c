#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *args[] = {"/bin/ls", NULL};  // Command-line arguments for the new program

    if (execve(args[0], args, NULL) == -1)
    {
        perror("execve");  // Print an error message if execve fails
        exit(EXIT_FAILURE);
    }

    return 0;
}
