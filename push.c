#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_stack;
	char *num;

	num = strtok(NULL, "\n \t\r");
	if (num == NULL)
	{
		perror("L<%u>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);

	}
		new_stack = malloc(sizeof(stack_t));
		
		if (new_stack == NULL)
		{
			perror("Error: Malloc Failed");
			exit(EXIT_FAILURE);
		}

		new_stack->n = line_number;
		new_stack->next = *stack;
		new_stack->prev = NULL;
		
		if (stack != NULL)
		{
			(*stack)->prev = new_stack;
			*stack = new_stack;
		}

}
