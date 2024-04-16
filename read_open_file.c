#include "monty.c"


void read_open_file(char *file, **stack)
{
	FILE *f
	char *line = NULL
	site_t line_len;
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

        while (getline(&line, &line_len, file) != -1)
        {
            /* Tokenize each line */
        command = strtok(line, delim);
        num++
                if (command)
		{
		       	/* get function and use function */

                get_ops_func(command, &head, num);
		
		}
	}

	if (line)
	{
		free(line);
		fclose(f);
	}

}
