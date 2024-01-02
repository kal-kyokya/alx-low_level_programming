#include <stdio.h>

/**
 *main - Entry point to the function.
 *
 *Return: 0 if program runs succesfully.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
