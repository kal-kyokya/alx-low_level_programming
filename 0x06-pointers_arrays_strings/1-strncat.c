#include "main.h"

/**
 * _strncat - Concatenates string a with n elements from string b.
 * @dest: Inititial string.
 * @src: String be concatenated.
 * @n: Number of elements from string b to concatenate to string a.
 *
 * Return: Pointer to concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str;
	int l1, l2, count;

	str = dest;
	l1 = l2 = count = 0;
	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l2++;
	while (count <= n)
	{
		if (count == n || n < 1)
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
