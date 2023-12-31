#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n < 10) && (n > -10))
	{
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, n);
		}
		else if (n > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n);
		}
		else if (n < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
		}
	}
	else
	{
		m = n % 10;
		if (m == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, m);
		}
		else if (m > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		}
		else if (m < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
		}
	}
	return (0);
}
