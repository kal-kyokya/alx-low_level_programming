#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory space using the malloc function.
 * @b: The amount of space needed during allocation.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
