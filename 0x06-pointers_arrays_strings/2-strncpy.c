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
	char *str;
	int l1, l2, count;

	l1 = l2 = count = 0;
	str = dest;
	if (n < 1)
		return (str);
	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0' && count < n)
	{
		str[count] = src[count];
		l2++;
		count++;
	}
	if (src[l2] == '\0')
		str[count] = '\0';

	return (str);
}
