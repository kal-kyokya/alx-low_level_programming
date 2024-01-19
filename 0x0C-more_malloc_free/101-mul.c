#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point to the function.
 * @argc: Number of arguments on command line.
 * @argv: Pointer to string arguments passed on command line.
 *
 * Return: 0 if program run succesfully, 98 otherwise.
 */
int main(int argc, char *argv[])
{
	char *str;
	int result, counter1, counter2;

	result = 1;
	counter1 = 1;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (counter1 < argc)
	{
		counter2 = 0;
		str = argv[counter1];
		while (str[counter2] != '\0')
		{
			if (!(isdigit(str[counter2])))
			{
				printf("Error\n");
				exit(98);
			}
			counter2++;
		}
		result *= atoi(argv[counter1]);
		counter1++;
	}
	printf("%d\n", result);

	return (0);
}
