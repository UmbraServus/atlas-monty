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
	char line[100];
	int counter = 1;
	if (argc != 2)
	{
		perror("Not enough arg counts");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		perror(" ");
		exit(EXIT_FAILURE);
	}

	while(fgets(line, sizeof(line), file))
	{
		printf("line %d: %s", counter, line);
		counter++;
	}

	fclose(file);
	return (EXIT_SUCCESS);
}
