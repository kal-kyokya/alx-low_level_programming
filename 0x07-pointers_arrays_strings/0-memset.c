#include "main.h"

/**
 * _memset - Set x blocks of memory to char c.
 * @s: Pointer to memory region.
 * @c: Character to be added.
 * @x: Number of blocks to be processed.
 *
 * Return: Pointer to string's new version.
 */
char *_memset(char *s, char c, unsigned int x)
{
	unsigned int count;

	count = 0;
	while (count < x)
	{
		*(s + count) = c;
		count++;
	}
	return (s);
}
