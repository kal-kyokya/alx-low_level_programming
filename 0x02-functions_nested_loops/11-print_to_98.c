#include <stdio.h>

/**
 *print_to_98 - Print all numbers between input number and 98.
 *@x: Input integer.
 *
 *Return: Nothing.
 */
void print_to_98(int x)
{
	if (x == 98)
		printf("%d\n", x);
	else if (x < 98)
	{
		while (x < 99)
		{
			printf("%d", x);
			if (x < 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
				break;
			}
			x++;
		}
	}
	else if (x > 98)
	{
		while (x >= 98)
		{
			printf("%d", x);
			if (x > 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
				break;
			}
			x--;
		}
	}
}
