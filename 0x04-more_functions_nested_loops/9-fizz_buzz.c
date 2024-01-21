#include <stdio.h>

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	int counter;

	counter = 1;
	while (counter <= 100)
	{
		if (counter % 3 == 0)
			printf("Fizz ");
		else if (counter % 5 == 0)
		{
			if (counter == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (counter % 3 == 0 && counter % 5)
			printf("FizzBuzz ");
		else
			printf("%d ", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
