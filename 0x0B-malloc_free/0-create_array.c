#include "main.h"
#include <stdlib.h>

/**
 * create_array - Initialzes new array with a specific character.
 * @size: Size of array.
 * @c: Character to be passed in array.
 *
 * Return: Pointer to array of type char.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int counter;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		str[counter] = c;
		counter++;
	}

	return (str);
}
