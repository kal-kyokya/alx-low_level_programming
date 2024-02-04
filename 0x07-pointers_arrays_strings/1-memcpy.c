#include "main.h"

/**
 * _memcpy - Copies values from one memory buffer to another.
 * @dest: Memory buffer to which elements are copied.
 * @src: Memory buffer from which elements are copied.
 * @x: Number of elements to be copied from buffer to buffer.
 *
 * Return: Pointer to new memory version.
 */
char *_memcpy(char *dest, char *src, unsigned int x)
{
	unsigned int count;

	count = 0;
	while (count < x)
	{
		*(dest + count) = *(src + count);
		count++;
	}

	return (dest);
}
