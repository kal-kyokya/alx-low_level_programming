#include "main.h"

/**
 * _isdigit - Checks an input as integer or not.
 * @x: Input to be evaluated.
 *
 * Return: 1 if input is an integer, 0 otherwise.
 */
int _isdigit(int x)
{
	char counter;

	counter = '0';
	while (counter <= '9')
	{
		if (x == counter)
			return (1);
		counter++;
	}
	return (0);
}
