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

void push(stack_t **stack, unsigned int line_number);
{
	stack_t *new_stack;

	if (_isdigit(line_number == 1))
	{
		perror(" ");
		exit(EXIT_FAILURE);
	}
		new_stack = malloc(sizeof(stack_t));
		
		if (new_stack == NULL)
		{
			perror("Error: Malloc Failed");
			Exit(EXIT_FAILURE);
		}

		if (*stack == NULL)
		{

		new_stack->n = line_number;
		new_stack->next = NULL;
		new_stack->prev = NULL;
		*stack = new_stack;
		
		}

		else
		{
			new_stack->prev = NULL;
			new_stack->next = *stack;
			new_stack->n = line_number;
			(*head)->prev = new_stack;
			*head = new_stack;
		}

}
