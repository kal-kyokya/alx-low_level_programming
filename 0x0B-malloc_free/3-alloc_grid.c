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
	int counter1, counter2, counter3;

	counter1 = counter2 = counter3 = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(width * sizeof(int *));
	if (*(array) == NULL)
		return (NULL);
	while (counter1 < height)
	{
		*(array + counter1) = (int *)malloc(height * sizeof(int));
		if (*(array + counter1) == NULL)
		{
			while (counter2 < counter1)
			{
				free(*(array + counter2));
				counter2++;
			}
			free(array);
			return (NULL);
		}
		while (counter3 < height)
			array[counter1][counter3] = 0;
		counter1++;
	}
	counter2 = 0;
	while (counter2 < width)
	{
		free(*(array + counter2));
		counter2++;
	}
	free(array);

	return (array);
}
