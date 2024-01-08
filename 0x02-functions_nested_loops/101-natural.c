#include <stdio.h>

/**
 *main - Entry point to the function
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	int x1, x2, counter;

	counter = 0;
	while (counter < 1024)
	{
		if (counter % 3 == 0)
			x1 += counter;
		else if (counter % 5 == 0)
			x2 += counter;
		counter++;
	}
	counter = x1 + x2;
	printf("%d\n", counter);
	return (0);
}
