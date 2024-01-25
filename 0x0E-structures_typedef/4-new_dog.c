#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new variable of type dog_t.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
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
	cp_n = malloc(sizeof(char) * sl_n + 1);
	if (cp_n == NULL)
	{
		free(cp_n);
		free(dog2);
		return (NULL);
	}
	cp_o = malloc(sizeof(char) * sl_o + 1);
	if (cp_o == NULL)
	{
		free(cp_n);
		free(cp_o);
		free(dog2);
		return (NULL);
	}
	for (; counter1	< sl_n; counter1++)
		*(cp_n + counter1) = *(name + counter1);
	for (; counter2	< sl_o; counter2++)
		*(cp_o + counter2) = *(owner + counter2);
	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;
	return (dog2);
}
