#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program successfully runs.
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
