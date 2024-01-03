#include <stdio.h>

/**
 *main - Entry point to the function.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	char c;
	int x;

	c = 'a';
	x = 0;
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
