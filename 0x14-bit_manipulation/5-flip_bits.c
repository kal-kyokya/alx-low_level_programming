#include "main.h"

/**
 * flip_bits - finds number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return:  number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int xor_result;

	xor_result = n ^ m;
	while (xor_result > 0)
	{
		if ((xor_result & 1) == 1)
			count++;
		xor_result = xor_result >> 1;
	}

	return (count);
}
