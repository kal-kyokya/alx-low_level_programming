#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new variable of type dog_t.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to Newly created Variable of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bond;

	bond = malloc(sizeof(dog_t));
	if (bond == NULL)
		return (NULL);
	bond->name = name;
	bond->age = age;
	bond->owner = owner;

	return (bond);
}
