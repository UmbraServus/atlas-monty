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
/*	int counter = 1;*/
	int num = 0;
	char *command;
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
	/*	printf("line %d: %s", counter, line);
		counter++; */

	/* Tokenize each line */

	command = strtok(line, delim);

	while (command)
	{
		if (strcmp(command, "push") == 0)
		{
			command = strtok(NULL, delim);
			/*printf("push\n");*/
			
			if (command)
			{
				num = atoi(command);
				push(global_stack, num);
			}
		}
		else if (strcmp(command, "pall") == 0)
		{
		/*	printf("pall\n");*/
			pall(global_stack, num);
		}
		command = strtok(NULL, delim);

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
