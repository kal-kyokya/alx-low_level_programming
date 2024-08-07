#include "main.h"

/**
 * puts2 - Prints every other character in a string.
 * @s: String input.
 *
 * Return: Nothing.
 */
void puts2(char *s)
{
	int len, count;

	len = count = 0;
	while (s[len] != '\0')
		len++;
	while (count < len)
	{
		if (count % 2 == 0)
			_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
