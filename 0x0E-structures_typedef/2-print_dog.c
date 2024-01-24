#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Send to stdout informations about a variable of type struct dog.
 * @d: Variable to be printed on screen.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
