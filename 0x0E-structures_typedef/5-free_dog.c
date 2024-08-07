#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees up allocated memory.
 * @d: Structure to be freed.
 *
 * Return: A void pointer or NULL.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
