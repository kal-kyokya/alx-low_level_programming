#include "main.h"

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
			break;
		count++;
		if (*(s + count) == '\0')
			return (s + 1);
	}

	return (s + count);
}
