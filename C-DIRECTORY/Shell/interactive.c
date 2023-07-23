#include "main.h"

void shell_interactive(void)
{
	char *line;/*variable holding read_line function*/
	char **args;
	int status = -1;
	
	do
	{
		printf("#$ ");/*print out prompt*/
		line = read_line();/*reads line from stdin or keyboard*/
		args = split_line(line);/*tokenize line*/
		status = execute_args(args);

		/*To avoid memory leaks*/
		free(line);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}

	}while (status == -1)
}
