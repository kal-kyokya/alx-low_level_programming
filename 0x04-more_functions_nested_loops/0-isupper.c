#include "main.h"

/**
 * _isupper - Tell whether a character is uppercase or not.
 * @x: Character to be assessed.
 *
 * Return: 1 if char is uppercase, 0 otherwise.
 */
int _isupper(char x)
{
	char c;

	c = 'A';
	while (c < 'Z')
	{
		if (x == c)
			return (1);
		c++;
	}
	return (0);
}
