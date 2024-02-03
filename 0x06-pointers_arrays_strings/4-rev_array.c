#include "main.h"

/**
 * reverse_array - Reverses the order of an array.
 * @a: Pointer to array.
 * @n: Number of array elements.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int *array;
	int x, count1, count2;

	array = a;
	count1 = x = 0;
	count2 = n - 1;
	while (count1 < (n / 2))
	{
		x = a[count1];
		array[count1] = a[count2];
		a[count2] = x;
		count1++;
		count2--;
	}
}
