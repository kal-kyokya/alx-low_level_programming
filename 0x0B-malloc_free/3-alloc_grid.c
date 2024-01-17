#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Help in printing a grid of integers.
 * @width: First parameter passed in function.
 * @height: Second parameter.
 *
 * Return: Pointer to a 2 dimensional array or NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int counter1, counter2;

	counter1 = counter2 = 0;
	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **)malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	while (counter1 < width)
	{
		while (counter2 < height)
		{
			array[counter1][counter2] = 0;
			counter2++;
		}
		counter2 = 0;
		counter1++;
	}
	return (array);
}
