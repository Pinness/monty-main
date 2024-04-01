#include "monty.h"

void push(monty_stack *stack, int arg_value)
{
	if (stack -> top == STACK_SIZE - 1)
	{
		perror("Error: Stack overflow");
		exit(EXIT_FAILURE);
	}

	stack -> items[++stack -> top] = arg_value;
}
