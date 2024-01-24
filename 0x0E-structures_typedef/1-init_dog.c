#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @name: Name of the dog.
 * @owner: Owner of the dog.
 * @age: Age of the dog.
 * @d: Name of initialized variable.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *bond;

	bond = d;
	if (bond != NULL)
	{
		bond->name = name;
		bond->owner = owner;
		bond->age = age;
	}
}
