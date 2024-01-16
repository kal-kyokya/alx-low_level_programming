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

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	sl1 = sl2 = 0;
	while (*(s1 + sl1) != '\0')
		sl1 += 1;
	while (*(s2 + sl2) != '\0')
		sl2 += 1;
	sl = sl1 + sl2 + 1;
	s = (char *)malloc((sl * sizeof(char)));
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
		*(s + counter) = *(s2 + counter);
		counter++;
	}
	*(s + (sl - 1)) = '\0';
	return (s);
}
