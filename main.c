#include "monty.h"

stack_t **global_stack;

/**
 *
 *
 *
 *
 *
 */

int main (int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t line_len;
	unsigned int counter = 0, unsigned int num = 0;
	void (*f)(stack_t **stack, unsigned int line number) = func; 
	char *command[];
	const char *delim =" \n";
	stack_t *head;

	if (argc != 2)
	{
		perror("Not enough arg counts");
		exit(EXIT_FAILURE);
	}

	/* Opens file to be read */

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		perror(" ");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	global_stack = &head;

	/* Reads file line by line */

	while (getline(&line, &line_len, file) != -1)
	{
	/*	printf("line %d: %s", counter, line); */

	/* Tokenize each line */
	command[0] = strtok(line, delim);
	counter++;

		if (command)
		{
			/* get function to use */


		command[1] = strtok(NULL, delim);
		counter++	
		num = atoi(command[1]);

		func = get_ops_func(command[0]);
		func(&head, num);
		printf("%s\n", command[0]);
		printf("%s\n", command[1]);

		}
		command[2] = strtok(NULL, delim);
		counter++

	}

	}

	free(line);
	fclose(file);

	stack_t *temp;
	while (*global_stack != NULL)
	{
		temp = *global_stack;
		*global_stack = (*global_stack)->next;
		free(temp);
	}		
		return (EXIT_SUCCESS);
}
