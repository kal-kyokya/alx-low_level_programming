#include "main.h"

int helper_function(int input, int guess);

/**
 *_sqrt_recursion - Computes the square root of an integer.
 *@x: Integer to be evaluated.
 *
 *Return: The square root of x if available or -1.
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	else if (x == 0 || x == 1)
	{
		return (x);
	}
	return (helper_function(x, 1));
}

/**
 *helper_function - Allows addition of an extra parameter to solv problem.
 *@input: Number being evaluated.
 *@guess: Attempted solution.
 *
 *Return: Square root or -1 if unavailable.
 */
int helper_function(int input, int guess)
{
	if (guess * guess == input)
		return (guess);
	else if (guess * guess > input)
		return (-1);
	return (helper_function(input, guess + 1));
}
