#include <stdio.h>

/**
 *main -Entry point to the function.
 * @argc: Number of arguments on command line.
 * @argv: Array of string names on command line.
 *
 * Return: 0 if program runs successfully.
 */
int main(int argc, char **argv)
{
	int counter;

	counter = 0;
	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	}

	return (0);
}
