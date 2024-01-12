#include "main.h"

int helper_function(int input, int counter);

/**
 *is_prime_number - Tells whether a number is prime or not.
 *@x: Number to be assessed.
 *
 *Return: 1 if input is prime and 0 if not.
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	else if (x == 2 || x == 3 || x == 5)
		return (1);
	else if ((x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0))
		return (0);
	return (helper_function(x, 1));
}

/**
 *helper_function - Tests if input is only divsible by itself.
 *@input: Number to be evaluated.
 *@counter: Test every digit lesser than input.
 *
 *Return: Either the prime number or 0 if unavailable.
 */
int helper_function(int input, int counter)
{
	if (((input / counter) == 1) && ((input % counter) == 0))
		return (1);
	return (helper_function(input, counter + 1));
}
