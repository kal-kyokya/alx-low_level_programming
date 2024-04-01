#include "main.h"

/**
 * print_binary - Converts & prints a decimal number into binary.
 * @n: Decimal number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int count;

	count = (sizeof(unsigned long int) * 8) - 1;
	num = 0;
	if (n == 1 || n == 0)
		_putchar(n + '0');
	else
	{
		while (n >> count == 0)
			count--;
		while (count >= 0)
		{
			num = 1ul & (n >> count);
			if (num)
				_putchar('1');
			else
				_putchar('0');

			count--;
		}
	}
}
