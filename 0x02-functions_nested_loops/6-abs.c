#include "main.h"

/**
 *_abs - Computes the absolute value of an integer.
 *@x: integer to be assessed/
 *
 *Return: The absolute value of a number.
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x == 0)
		return (0);
	else
		return (x * (-1));

}
