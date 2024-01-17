#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int sl1, sl2, counter, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sl1 = 0; s1[sl1] != '\0'; sl1++)
		;
	for (sl2 = 0; s2[sl2] != '\0'; sl2++)
		;
	sl2++;
	s = malloc((sl1 + sl2) * sizeof(char));
	if (s == 0)
		return (NULL);
	for (counter = 0, d = 0; counter < (sl1 + sl2); counter++)
	{
		if (counter < sl1)
			s[counter] = s1[counter];
		else
			s[counter] = s2[d++];
	}
	return (s);
}
