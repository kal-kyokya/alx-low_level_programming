#include "main.h"

/**
 *factorial - Computes the factorial of an input number.
 *@x: Variable to be passed inside the function.
 *
 *Return: The factorial of X.
 */
int factorial(int x)
{
	int result;

	if (x < 0)
	{
		return (-1);
	}
	else if (x == 0 || x == 1)
		return (1);
	result = x * factorial(x - 1);
	return (result);
}
