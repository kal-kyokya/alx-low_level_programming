#include "main.h"

/**
 *print_last_digit - Displa last digit found in a number x.
 *@x: Number to be assessed.
 *
 *Return: The last digit of a number.
 */
int print_last_digit(int x)
{
	int last_d;

	last_d = x % 10;
	if (x < 0)
	{
		last_d *= (-1);
	}
	_putchar(last_d + '0');
	return (last_d);
}
