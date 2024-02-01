#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: String to be printed.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}
	_putchar('\n');
}
