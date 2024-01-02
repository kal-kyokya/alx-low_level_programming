#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
