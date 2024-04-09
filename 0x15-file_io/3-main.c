#include "main.h"

/**
 * main - Entry point to the function.
 * @argc: Number of arguments on screen.
 * @argv: Array of cmd line arguments.
 *
 * Return: 0 if program runs succesfully.
 */
int main(int ac, char **argv)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(argv[1], argv[2]);

	return (0);
}
