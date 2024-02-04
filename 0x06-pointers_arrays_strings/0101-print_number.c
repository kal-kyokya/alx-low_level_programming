#include "main.h"

/**
 * print_number - Send an integer to stdout using _putchar().
 * @n: Integers to be printed.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int x;

	if (n == 0)
		_putchar(n + '0');
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
		print_number(n);
	}
	else
	{
		x = n / 10;
		if (x < 10)
		{
			_putchar(x + '0');
			n %= 10;
			_putchar(n + '0');
		}
		else
		{
			print_number(x);
			n %= 10;
			_putchar(n + '0');
		}
	}
}
