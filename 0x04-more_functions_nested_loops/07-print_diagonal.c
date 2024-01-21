#include "main.h"

/**
 * print_diagonal - Draws a diagonal using backslashes.
 * @n: Number of times backslash get printed.
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int counter1, counter2;

	counter1 = counter2 = 0;

	if (n > 0)
	{
		while (counter1 < n)
		{
			while (counter2 < n)
			{
				if (counter1 == counter2)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				else
					_putchar(' ');
				counter2++;
			}
			counter2 = 0;
			counter1++;
		}
	}
	else
		_putchar('\n');
}
