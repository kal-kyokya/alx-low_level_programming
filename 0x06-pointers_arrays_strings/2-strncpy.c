#include "main.h"

/**
 * _strncpy - Copies n elements from at beginning of string 1.
 * @dest: String 1.
 * @src: String 2.
 * @n: Number of elements to copy from string 2.
 *
 * Return: Pointer to new version of string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
		if (src[count] == '\0')
			dest[count] = '\0';
	}

	return (dest);
}
