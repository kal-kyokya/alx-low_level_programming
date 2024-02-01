#include "main.h"

/**
 * puts_half - Print the second half of a string.
 * @s: String to be printed.
 *
 * Return: Nothing.
 */
void puts_half(char *s)
{
	int len, count;

	len = 0;
	while (s[len] != '\0')
		len++;
	if (len % 2 != 0)
		count = (len / 2) + 1;
	else
		count = len / 2;
	while (count < len)
	{
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
