#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the function.
 * @argc: Number of arguments on command line.
 * @argv: Array of strings found  on command line.
 *
 * Return: 0 if program runs successfully.
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	if (sizeof(product) == sizeof(int))
		printf("%i\n", product);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
