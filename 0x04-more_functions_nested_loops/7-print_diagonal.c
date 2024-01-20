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
	char c1, c2;

	c1 = '\\';
	c2 = ' ';
	counter1 = 1;
	if (n < 0 || n == 0)
		_putchar('\n');
	while (counter1 <= n)
	{
		_putchar(c1);
		if (counter1 != (n-1))
		{
			counter2 = 0;
			_putchar('\n');
			while (counter2 < counter1)
			{
				_putchar(c2);
				counter2++;
			}
		}
		counter1++;
	}
}
