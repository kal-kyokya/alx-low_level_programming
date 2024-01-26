#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the function.
 * @argc: Number of args on command line.
 * @argv: String arguments on cmd line. 
 *
 * Return: 0 if program runs succesfully.
 */
int main(int argc, char **argv)
{
	int counter, checker;
	char *opcode_str;

	opcode_str = (char *)&main;
	counter = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	checker = atoi(argv[1]);
	if (checker < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (counter < checker)
	{
		printf("%02hhx", opcode_str[counter]);
		if (counter < checker - 1)
			printf(" ");
		else
			printf("\n");
		counter++;
	}

	return (0);
}