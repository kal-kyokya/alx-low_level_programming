#include "main.h"

/**
 *print_sign - Tell whether a number is zero, positive or negative.
 *@x: Input to be assessed.
 *
 *Return: 1 if number is +ve, 0 if zero and -1 if -ve.
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
