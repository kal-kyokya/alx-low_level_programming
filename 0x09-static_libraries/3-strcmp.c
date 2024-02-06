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
	int l1;

	l1 = 0;
	while (s1[l1] != '\0' || s2[l1] != '\0')
	{
		if (s1[l1] != s2[l1])
			return (s1[l1] - s2[l1]);
		l1++;
	}
	return (0);
}
