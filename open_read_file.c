#include "monty.h"


void open_read_file(char *file, stack_t **stack)
{
	FILE *f;
	char *line = NULL;
	size_t line_len;
	unsigned int num = 0;
	char *command;
	const char *delim =" \n";

	f = fopen(file, "r");

	if (f == NULL)
	{
                perror(" ");
                exit(EXIT_FAILURE);
	}

        /* Reads file line by line */

        while (getline(&line, &line_len, f) != -1)
        {
            /* Tokenize each line */

		command = strtok(line, delim);
		num++;
                if (command)
		{
		       	/* get function and use function */

                monty_ops(command, stack, num);
		
		}
	}

	if (line)
	{
		free(line);
		fclose(f);
	}

}
