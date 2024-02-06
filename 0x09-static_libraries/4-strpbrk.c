#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches first character occurence in string.
 * @s: String to be processed.
 * @accept: Set of characters to be searcher in s.
 *
 * Return: Pointer to first byte occurence from accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int count1, count2;

	count1 = 0;
	while (*(s + count1) != '\0')
	{
		count2 = 0;
		while (*(accept + count2) != '\0')
		{
			if (*(accept + count2) == *(s + count1))
				return (s + count1);
			count2++;
		}
		count1++;
	}

	return (NULL);
}
