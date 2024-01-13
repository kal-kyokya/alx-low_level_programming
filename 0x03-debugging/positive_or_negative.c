#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - Define a number as positive or negative.
 *
 *Return: 0 if program runs successfully
 */
int positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
