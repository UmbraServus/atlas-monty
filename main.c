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
	stack_t *head;

	if (argc != 2)
	{
		perror("Not enough arg counts");
		exit(EXIT_FAILURE);
	}

	/* Opens file to be read */
	
	head = NULL;
	global_stack = &head;

	open_read_file(argv[1], &head);

/* free everything */

	stack_t *temp;

	while (*global_stack != NULL)
	{
		temp = *global_stack;
		*global_stack = (*global_stack)->next;
		free(temp);
	}		
	
	return (EXIT_SUCCESS);
}
