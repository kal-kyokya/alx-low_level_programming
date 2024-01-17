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
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (int **)malloc(height * sizeof(int *));
	if (s == 0)
		return (NULL);
	i = 0;
	while (i < height)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}
