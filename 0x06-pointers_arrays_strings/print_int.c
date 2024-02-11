#include "main.h"

/**
 * print_number - Send an integer to stdout using _putchar().
 * @input: Integer to be printed.
 *
 * Return: Nothing.
 */
void print_number(int input)
{
	int divisor, rest, quotient;

	divisor = 10;
	if (input == 0)
		_putchar(0 + '0');
	else
	{
		if (input < 0)
		{
			_putchar('-');
			input *= -1;
		}
		while (input / divisor > 9)
			divisor *= 10;
		while (input / divisor < 10 && divisor != 1)
		{
			quotient = input / divisor;
			_putchar(quotient + '0');
			rest = input % divisor;
			if (rest == 0)
			{
				while (divisor != 1)
				{
					_putchar(rest + '0');
					divisor /= 10;
				}
				break;
			}
			if (rest < 10 && rest != 0)
			{
				_putchar(rest + '0');
				divisor = 1;
			}
			else
			{
				input = rest;
				divisor /= 10;
			}
		}
	}
}
