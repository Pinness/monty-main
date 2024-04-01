#include "monty.h"


/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Enter pathname to the file containing Monty bytecode\n");
		exit(EXIT_FAILURE);
	}


	char *file_path = argv[1];
	FILE *file_ptr = open_file(file_path);

	fclose(file_ptr);
	return (0);
}
