#include <stdio.h>
#include "monty.h"

/**
 * main - Entry point of the Monty program.
 *
 * This function reads and interprets Monty script commands from a file.
 * It initializes the stack or queue data structure and processes each
 * command in the script.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, otherwise an error code.
 */
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	fclose(file);

	return (0);
}

