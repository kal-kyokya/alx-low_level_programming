#include "main.h"

/**
 *print_alphabet - Print all 26 lowercases.
 *
 *Return: None.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
