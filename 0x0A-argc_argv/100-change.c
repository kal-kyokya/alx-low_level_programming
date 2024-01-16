#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program.
 * @argc: Number of arguments on command line.
 * @argv: Array of strings found on command line.
 *
 * Return: 0 if program runs successfully.
 */
int main(int argc, char *argv[])
{
	int a, input, counter1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi(argv[1]);
	counter1 = input / 25;
	a = atoi(argv[1]) % 25;
	counter1 += (a / 10);
	a %= 10;
	counter1 += (a / 5);
	a %= 5;
	counter1 += (a / 2);
	a %= 2;
	counter1 += (a / 1);
	if (input <= 0)
		printf("0\n");
	else
		printf("%d\n", counter1);
	return (0);
}
