#include "main.h"

/**
 * string_toupper - Converts all lowercase in string to upper.
 * @s: String to be converted.
 *
 * Return: Pointer to new string version.
 */
char *string_toupper(char *s)
{
	char *str;
	int count;

	count = 0;
	str = s;
	while (s[count] != '\0')
	{
		if (s[count] > 96 && s[count] < 123)
			s[count] -= 32;
		count++;
	}

	return (str);
}
