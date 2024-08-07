#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Initial string.
 * @src: Additional string.
 *
 * Return: Pointer to concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *str;
	int l1, l2, count;

	str = dest;
	l1 = l2 = count = 0;
	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l2++;
	while (count <= l2)
	{
		if (count == l2)
		{
			str[l1] = '\0';
			break;
		}
		str[l1] = src[count];
		count++;
		l1++;
	}

	return (str);
}
