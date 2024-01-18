#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Primary string.
 * @s2: String to be appended to string 1.
 * @n: Number characters from String two that get appended to string1.
 *
 * Return: Pointer to a string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int sl1, sl2, sl, counter1;

	counter1 = sl1 = sl2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + sl1) != '\0')
		sl1++;
	while (*(s2 + sl2) != '\0')
		sl2++;
	if (n >= sl2)
		sl = sl1 + sl2;
	else
		sl = sl1 + n;
	str = malloc((sl + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (counter1 < sl1)
	{
		*(str + counter1) = *(s1 + counter1);
		counter1++;
	}
	while (counter1 < sl)
	{
		*(str + counter1) = *(s2 + (counter1 - sl1));
		counter1++;
	}
	*(str + counter1) = '\0';
	return (str);
}
