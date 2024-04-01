#include "monty.h"

/**
 * parse_file - Parses a monty file and execute the instructions
 * @file_ptr: Pointer to the opened mony bytecode file to be parsed
 *
 * 
 * Return: Void
 */


void parse_file(FILE *file_ptr)
{
	char buffer_line[300]; /* Buffer to store each line read from the bytecode file*/
	int line_num = 0; /* Variable to store the current line being read for debuggging */
	monty_stack *stack = new_stack(); 
	
	while (fgets(buffer_line, sizeof(buffer_line), file_ptr) != NULL)
	{
		line_num++;  /*increment line number for each line read*/

		char *opcode = strtok(buffer_line, " ");

		if (opcode == NULL)
		{
			fprintf(stderr, "Error: invalid opcode string at line %d\n", line_num);
			exit(EXIT_FAILURE);
		}

		if (strcmp(opcode, "push") == 0)
		{
			char *push_arg = strtok(NULL, " ");

			if (push_arg == NULL)
			{
				fprintf(stderr, "Error: Argument mising at line %d\n", line_num);
				exit(EXIT_FAILURE);
			}

			int push_arg2 = atoi(push_arg);
			push(stack, push_arg2);
		}

		else if (strcmp(opcode, "pall") == 0)
		{
			pall(stack);
		}

		else 
		{
			fprintf(stderr, "Error: %s at line %d is an unknown instruction\n", opcode, line_num);
			exit(EXIT_FAILURE);
		}
	}

	free(stack);
}
