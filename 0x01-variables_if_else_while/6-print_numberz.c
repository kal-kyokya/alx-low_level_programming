#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program successfully runs.
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
