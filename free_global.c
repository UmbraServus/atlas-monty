#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */

void free_everything (void)
{
	stack_t *temp;
	stack_t *free_this = NULL;
	free_this = *global_stack;

	while (free_this)
	{
		temp = free_this->next;
		free(free_this);
		free_this = temp;
	}

}

