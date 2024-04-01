#include "main.h"

/**
 * get_endianness - check if small or big endian
 * Return: 1 if big, 0 if small endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;

	if (num & 1)
		return (1);

	else
		return (0);
}
