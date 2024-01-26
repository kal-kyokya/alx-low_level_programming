#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to the function
 * @argc: Number of arguments on command line.
 * @argv: Array of string commands found on cmd line.
 *
 * Return: The result of a math operation if there's no error.
 */
int main(int argc, char **argv)
{
	int result;
	char *str;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	str = *(argv + 2);
	func = get_op_func(str);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func((atoi(argv[1])), (atoi(argv[3])));
	printf("%d\n", result);

	return (0);
}
