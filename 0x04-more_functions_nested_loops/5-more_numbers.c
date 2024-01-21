#include "main.h"

/**
 * more_numbers - Print 10 lines of numbers from 0 to 14.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int counter1, counter2;

	counter1 = 0;
	while (counter1 < 10)
	{
		counter2 = 0;
		while (counter2 <= 14)
		{
			if (counter2 > 9)
				_putchar((counter2 / 10) + '0');
			_putchar((counter2 % 10) + '0');
			counter2++;
		}
		_putchar('\n');
		counter1++;
	}
}