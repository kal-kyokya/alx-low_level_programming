#include "main.h"

/**
 *_pow_recursion - Raises one number to the power of another using recursion.
 *@x: Base number.
 *@y: Exponent.
 *
 *Return: Base number raised to the exponent.
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	result =  x * _pow_recursion(x, y - 1);
	return (result);
}
