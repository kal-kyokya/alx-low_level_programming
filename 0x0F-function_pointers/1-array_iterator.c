#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Passes all array elements inside a "third party" function.
 * @array: Array to have its elements passed in function.
 * @size: Size of array.
 * @action: Third party function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	counter = 0;
	while (counter < size)
	{
		(*action)(*(array + counter));
		counter++;
	}
}
