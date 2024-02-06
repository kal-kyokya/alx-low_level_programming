#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Locates a specific character in a string.
 * @s: String to be processed.
 * @c: Character being searched.
 *
 * Return: Pointer to new string version.
 */
char *_strchr(char *s, char c)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
			return (s + count);
		count++;
	}

	return (NULL);
}
