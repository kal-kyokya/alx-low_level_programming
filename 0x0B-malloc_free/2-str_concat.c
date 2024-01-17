#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates one string onto the other.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to string or NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int sl1, sl2, sl, counter;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	sl1 = sl2 = 0;
	while (*(s1 + sl1) != '\0')
		sl1 += 1;
	while (*(s2 + sl2) != '\0')
		sl2 += 1;
	sl = sl1 + sl2 + 1;
	if (sl == 1)
	{
		return (NULL);
	}
	s = malloc((sl * sizeof(char)));
	if (s == NULL)
		return (NULL);
	counter = 0;
	while (counter < sl1)
	{
		*(s + counter) = *(s1 + counter);
		counter++;
	}
	counter = 0;
	while (counter < sl2)
	{
		*(s + (sl1 + counter)) = *(s2 + counter);
		counter++;
	}
	*(s + (sl)) = '\0';
	return (s);
}
