#include "main.h"

/**
 * _strcpy - Copies on string inside another.
 * @dest: Pointer to the copy of string.
 * @src: Pointer to strings to be copied.
 *
 * Return: Pointer to the copy of string.
 */
char *_strcpy(char *dest, char *src)
{
	char *str;
	int count1, count2;

	str = dest;
	count1 = count2 = 0;
	while (src[count1] != '\0')
		count1++;
	while (count2 <= count1)
	{
		str[count2] = src[count2];
		count2++;
	}

	return (str);
}
