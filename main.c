#include "monty.h"

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
	int counter = 1;
	char *token;
	const char *delim =" \n";
	stack_t **stack = NULL;

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

	/* Reads file line by line */

	while (getline(&line, &line_len, file) != -1)
	{
		printf("line %d: %s", counter, line);
		counter++;


	/* Tokenize each line */

	token = strtok(line, delim);

	while (token)
	{
		printf("Token:%s\n", token);

		token = strtok(NULL, delim);
	}

	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
