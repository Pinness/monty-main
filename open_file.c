#include "monty.h"

/**
 * open_file - Opens the monty bytecode file and returns a file pointer
 * @file_path: The path to the Monty bytecode file to be opened
 *
 * Return: A pointer to the opened file
 */

FILE *open_file(const char *file_path)
{
	FILE *file_ptr = fopen(file_path, "r");
	if (file_ptr == NULL)
	{
		printf("Error: file(%s) not opened\n", file_path);
		exit(EXIT_FAILURE);
	}
	return (file_ptr);
}
