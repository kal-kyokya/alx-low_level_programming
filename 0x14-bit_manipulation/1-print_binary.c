#include "main.h"

/**
 * print_binary: Converts & prints a decimal number into binary.
 * @n: Decimal number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int count;

	bit = 0;
	count = sizeof(unsigned long int) * 8 - 1;
	if (n == 0 || n == 1)
		_putchar(n + '0');
	else
	{
		while ((1 & (n >> count)) == 0)
			count--;
		while (count != 0)
		{
			bit = 1 & (n >> count);
			_putchar(bit + '0');

			count--;
		}
	}
}
