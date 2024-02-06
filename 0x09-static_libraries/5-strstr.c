#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Finds a substring inside a string s.
 * @haystack: Main string.
 * @needle: Substring.
 *
 * Return: Pointer to substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int count1, count2, mark;

	count1 = 0;
	while (*(haystack + count1) != '\0')
	{
		if (*(needle + 0) == *(haystack + count1))
		{
			count2 = 1;
			mark = count1;
			while (*(needle + count2) != '\0')
			{
				count1++;
				if (*(needle + count2) != *(haystack + count1))
					break;
				count2++;
				if (*(needle + count2) == '\0')
					return (haystack + mark);
			}
			count1 = mark;
		}
		count1++;
	}

	return (NULL);
}
