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
		printf("Name is %s\n",d->name);
		printf("Age is %.1f\n",d->age);
		printf("And Owner is %s\n",d->owner);
	}
}
