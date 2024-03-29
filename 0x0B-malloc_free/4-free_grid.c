#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free up allocated memory space.
 * @grid: Two dimensional array.
 * @height: Height parameter.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int counter1;

	counter1 = 0;
	while (counter1 < height)
	{
		free(*(grid + counter1));
		counter1++;
	}
	free(grid);
}
