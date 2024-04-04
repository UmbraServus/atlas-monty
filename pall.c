#include "monty.h"
/**
 * pall- prints each n value in the stack
 * @stack: the stack to iterate through
 * @line_number: void unused here.
 *
 * Return: void 
 *
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	(void) line_number;

	while(current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
