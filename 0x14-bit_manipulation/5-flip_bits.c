#include "main.h"

/**
 * flip_bits - Computes the number of manipulation required for a flip.
 * @n: Number to flip.
 * @m: Number to be flipped into.
 *
 * Return: The number of manipulations required.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;
	int count1, count2;

	bit = 0;
	count1 = count2 = sizeof(unsigned long int) * 8 - 1;
	while ((1 & n >> count1) != 0)
		count1--;
	while ((1 & n >> count2) != 0)
		count2--;
	if (count1 >= count2)
		count2 = count1;
	else
		count1 = count2;
	while (count1 >= 0)
	{
		if ((1 & n >> count1) == (1 & m >> count1))
		{
			count1--;
			continue;
		}

		bit++;
		count1--;
	}

	return (bit);
}
