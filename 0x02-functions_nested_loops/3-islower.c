#include "main.h"

/**
 *_islower - Tell whether a character is lowercase or not.
 *@x: Character being assessed.
 *
 *Return: 1 if char is lowercase and 0 otherwise.
 */
int _islower(int x)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (x == c)
		{
			return (1);
		}
		c++;
	}
	return (0);
}
