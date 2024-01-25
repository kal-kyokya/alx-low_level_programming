#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new variable of type dog_t.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to newly created Variable of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int sl_n, sl_o, counter1, counter2;
	char *cp_n, *cp_o;

	sl_n = sl_o = counter1 = counter2 = 0;
	while (*(name + sl_n) != '\0')
		sl_n++;
	while (*(owner + sl_o) != '\0')
		sl_o++;
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(dog2);
		return (NULL);
	}
	cp_n = malloc(sl_n);
	cp_o = malloc(sl_o);
	while (counter1	< sl_n)
	{
		*(cp_n + counter1) = *(name + counter1);
		counter1++;
	}
	while (counter2	< sl_o)
	{
		*(cp_o + counter2) = *(owner + counter2);
		counter2++;
	}
	dog2->name = name;
	(*dog2).owner = owner;
	dog2->age = age;

	return (dog2);
}
