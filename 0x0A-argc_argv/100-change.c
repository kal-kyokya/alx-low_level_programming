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
	int a[10];
	int counter;

	a[0] = atoi(argv[1]) % 25;
	a[1] = atoi(argv[1]) % 10;
	a[2] = atoi(argv[1]) % 5;
	a[3] = atoi(argv[1]) % 2;
	a[4] = atoi(argv[1]) % 1;
	a[5] = atoi(argv[1]) / 25;
	a[6] = atoi(argv[1]) / 10;
	a[7] = atoi(argv[1]) / 5;
	a[8] = atoi(argv[1]) / 2;
	a[9] = atoi(argv[1]) / 1;
	counter = 0;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		while (counter < 5)
		{
			if (a[counter] == 0)
			{
				printf("%d\n", a[counter + 5]);
				return (0);
			}
			else
				counter++;
		}
	}
	return (0);
}
