#include "main.h"

/**
 *_strlen_recursion - Return the length of a string.
 *@s: String to be passed in function.
 *
 *Return: 0 if program runs successfully.
 */
int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
		return (0);
	counter = 1 + _strlen_recursion(s + 1);
	return (counter);
}
