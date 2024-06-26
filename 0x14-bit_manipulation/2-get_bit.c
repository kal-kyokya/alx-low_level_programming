#include "main.h"

/**
 * get_bit - Extracts a bit from a decimal number.
 * @n: Number from which the bit is extracted.
 * @index: Index at which the bit is extracted.
 *
 * Return: The bit at the nth index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = 1ul & (n >> index);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return (bit);
}
