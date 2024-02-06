#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Computes sum of the two diagonal in an array.
 * @a: Array of elements.
 * @size: Size of array.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int count1, count2, sum1, sum2, index1, index2;

	count1 = sum1 = sum2 = 0;
	while (count1 < size)
	{
		index1 = (count1 * size) + count1;
		sum1 += *(a + index1);
		count1++;
	}

	count1 = 0;
	count2 = size - 1;
	while (count1 < size)
	{
		index2 = (count1 * size) + count2;
		sum2 += *(a + index2);
		count2--;
		count1++;
	}

	printf("%d, %d\n", sum1, sum2);
}
