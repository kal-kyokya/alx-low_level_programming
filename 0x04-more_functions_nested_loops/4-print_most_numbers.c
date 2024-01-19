#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9 except 2 & 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int counter;

	counter = 0;
	while (counter <= 9)
	{
		if (counter != 2 && counter != 4)
			_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
