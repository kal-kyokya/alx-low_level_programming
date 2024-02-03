#include "main.h"

/**
 * _strcmp - Compares 2 strings for likeness.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: 0 if strings are the same.
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2, count;

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (l1 > l2)
		return (15);
	else if (l2 > l1)
		return (-15);
	else if (l1 == l2)
	{
		while (count < l1)
		{
			if (s1[count] == s2[count])
				count++;
			else
				return (15);
		}
	}
	return (0);
}
