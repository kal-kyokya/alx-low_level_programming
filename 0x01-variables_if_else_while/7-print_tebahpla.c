#include <stdio.h>

/**
 *main - Entry point to the function.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
