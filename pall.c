#include "monty.h"

void pall (monty_stack *stack)
{
	for (int i = stack -> top; i >= 0; i--)
	{
		printf("%d\n", stack -> items[i]);
	}
}
