#include "main.h"

/**
 * _puts - Prints strings.
 * @str: String to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
