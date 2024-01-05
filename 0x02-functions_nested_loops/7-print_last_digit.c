#include "main.h"

/**
 *print_last_digit - Displa last digit found in a number x.
 *@x: Number to be assessed.
 *
 *Return: The last digit of a number.
 */
int print_last_digit(int x)
{
	int a;

	a = x % 10;
	if (x < 0)
	{
		x = x * (-1);
		a = x % 10;
		_putchar(a + '0');
	}
	else
		_putchar(a + '0');
	return (a);
}
