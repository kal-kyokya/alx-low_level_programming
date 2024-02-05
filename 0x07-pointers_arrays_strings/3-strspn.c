#include "main.h"

/**
 * _strspn - Checls a string for consecutive matching char according to a set.
 * @s: String to be processed.
 * @accept: The set of reference characters.
 *
 * Return: The number of consecutive match in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result;
	int count, count1;

	result = count = 0;
	while (*(s + count) != '\0')
	{
		count1 = 0;
		while (*(accept + count1) != '\0')
		{
			if (*(accept + count1) == *(s + count))
			{
				result++;
				break;
			}
			else
				count1++;
			if (*(accept + count1) == '\0')
				return (result);
		}
		count++;
	}

	return (result);
}
