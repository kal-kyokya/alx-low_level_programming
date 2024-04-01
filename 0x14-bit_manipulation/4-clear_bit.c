#include "main.h"

/**
 * clear_bit - Sets the nth bit to 0.
 * @n: Number getting edited.
 * @index: Index at which clearance occurs.
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = ~(1 << index | ~(*n));

	return (1);
}
