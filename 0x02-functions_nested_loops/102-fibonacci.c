#include <stdio.h>

/**
 *main - Entry point to the function.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	long int counter, a, b, c;

	a = 1;
	b = 2;
	c = a + b;
	printf("%ld, %ld, ", a, b);
	counter = 0;
	while (counter < 48)
	{
		c = a + b;
		if (counter != 47)
			printf("%ld, ", c);
		else
		  printf("%ld\n", c);
		a = b;
		b = c;
		counter++;
	}
	return (0);
}
