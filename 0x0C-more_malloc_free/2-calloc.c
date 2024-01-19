#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory space for an array using malloc().
 * @nmemb: Number of elements found in array.
 * @size: Weight in bytes for each memory block to be availed.
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	int counter;

	counter = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	while (counter < 0)
	{
		*(str + counter) = 0;
		counter++;
	}

	return (str);
}
