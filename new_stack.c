#include "monty.h"

monty_stack *new_stack()
{
	monty_stack *stack = (monty_stack*)malloc(sizeof(monty_stack));

	if (stack == NULL)
	{
		perror("Error: stack not created, memory alllocation failed\n");
		exit(EXIT_FAILURE);
	}

	stack -> top = -1; /*stack is empty at this point*/
	return stack;
}
