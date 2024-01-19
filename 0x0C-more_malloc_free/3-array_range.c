#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Smallest integer found in array.
 * @max: Largest integer in array.
 *
 * Return: Pointer to array created or NULL.
 */
int *array_range(int min, int max)
{
	int *str;
	int counter, size;

	counter = 0;
	if (max < min)
		return (NULL);
	size = max - min + 1;
	str = malloc(size * sizeof(int));
	if (str == NULL)
		return (NULL);
	while (counter < size)
	{
		*(str + counter) = min;
		counter++;
		min++;
	}

	return (str);
}
