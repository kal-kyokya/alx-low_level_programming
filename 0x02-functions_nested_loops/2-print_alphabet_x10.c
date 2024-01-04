#include "main.h"

/**
 *print_alphabet_x10 - Print all 26 lowercases on 10 lines.
 *
 *Return: None.
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	c = 'a';
	x = 0;
	while (x <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		x++;
	}

}
