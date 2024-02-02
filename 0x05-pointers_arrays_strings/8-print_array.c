#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the first n elements of an array.
 * @x: Array of integers.
 * @n: Number of elements to be printed from array.
 *
 * Return: Nothing.
 */
void print_array(int *x, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d", x[count]);
		if (count < (n - 1))
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
