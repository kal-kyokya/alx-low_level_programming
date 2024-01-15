#include "main.h"

/**
 * print_numbers - Prints digits from 0 to 9.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int counter;

	counter = 0;
	while (counter <= 9)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
