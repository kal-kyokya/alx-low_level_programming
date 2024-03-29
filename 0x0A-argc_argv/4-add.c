#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program.
 * @argc: Number of arguments on command line.
 * @argv: Array of strings found on command line.
 *
 * Return: 0 if program runs successfully.
 */
int main(int argc, char **argv)
{
	int sum, count1, count2;

	sum = count2 = 0;
	count1 = 1;
	if (argc == 1)
		printf("0\n");
	else
	{
		while (count1 < argc)
		{
			while ((argv[count1][count2]) != '\0')
			{
				if (!isdigit(argv[count1][count2]))
				{
					printf("Error\n");
					return (1);
				}
				count2++;
			}
			sum += atoi(*(argv + count1));
			count1++;
		}
		if (argc == 2)
			printf("%d\n", atoi(*(argv + 1)));
		else
			printf("%d\n", sum);
	}

	return (0);
}
