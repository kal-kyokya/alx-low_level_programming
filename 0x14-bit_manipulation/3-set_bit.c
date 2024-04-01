#include "main.h"

/**
 * set_bit - Sets the nth bit to 1.
 * @n: Pointer to the number being edited.
 * @index: Index at which insertion occurs.
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1ul << index);

	return (1);
}
