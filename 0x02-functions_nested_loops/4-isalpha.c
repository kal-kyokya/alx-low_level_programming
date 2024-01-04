#include "main.h"

/**
 *_isalpha - Tell if an input leads to a character or not.
 *@x: Parameter passed in function.
 *
 *Return: 1 if parameter leads to a char and 0 otherwise.
 */
int _isalpha(int x)
{
	char c1, c2;

	c1 = 'a';
	c2 = 'A';
	while (c1 <= 'z')
	{
		if (x == c1 || x == c2)
			return (1);
		c1++;
		c2++;
	}
	return (0);
}
