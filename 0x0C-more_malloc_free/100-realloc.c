#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocate a different amount of memory to a pointer.
 * @ptr: Pointer to which memory allocation is happening.
 * @old_size: Amount of previously allocated memory space.
 * @new_size: Amount of memory space to be allocated.
 *
 * Return: Pointer to memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int counter;

	counter = 0;
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		while (counter < old_size)
		{
			*(str + counter) = *(char *)ptr + counter;
			counter++;
		}
		free(ptr);
	}

	return (str);
}
