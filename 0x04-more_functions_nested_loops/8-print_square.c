#include "main.h"

/**
 * print_square - Draw a square on screen using hash signs.
 * @size: Number of hash signs to found on sides.
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int counter1, counter2;

	counter1 = counter2 = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (counter1 < size)
		{
			while (counter2 < size)
			{
				_putchar('#');
				counter2++;
			}
			counter2 = 0;
			_putchar('\n');
			counter1++;
		}
	}
}
