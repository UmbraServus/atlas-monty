#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */

void monty_ops(char *command, stack_t **stack, unsigned int line_num)
{
	
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

int i = 0;

while (ops[i].opcode)
{
	if (strcmp(command, ops[i].opcode) == 0)
	{
		ops[i].f(stack, line_num);
		return;
	}

	i++;
}

}
