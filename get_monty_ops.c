#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */

void monty_ops(char *command, stack_t **stack, unsigned int line_num, char *line, FILE *file)
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

		fprintf(stderr, "L<%u>: unknown instruction %s\n", line_num, command);
		free(line);
		free(file);
		exit(EXIT_FAILURE);
}
