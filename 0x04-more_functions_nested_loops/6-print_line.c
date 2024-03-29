#include "main.h"

/**
 * print_line - Uses underscores to draw a line on monitor.
 * @n: Number of underscore to be printed.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int counter;
	char c;

	counter = 0;
	c = '_';
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter < n)
		{
			_putchar(c);
			counter++;
		}
		_putchar('\n');
	}
}
