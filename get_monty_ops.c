#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */

void monty_ops()
{
	
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
}

int i = 0;

while (ops[i].opscode)
{
	if (strcmp(op, ops[i].opscode) == 0)
	{
		ops[i].f();
		return;
	}
}
}

