#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define STACK_SIZE 100

typedef struct monty_stack
{
	int items[STACK_SIZE];
	int top;
} monty_stack;

monty_stack *new_stack();
void push(monty_stack *stack, int arg_value);
void pall(monty_stack *stack);
void parse_file(FILE *file_ptr);
FILE *open_file(const char *file_path);

#endif 
