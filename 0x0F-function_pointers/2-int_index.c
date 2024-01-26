#include "function_pointers.h"

/**
 * int_index - Passes array elements to a "Third party" function.
 * @array: Array to be passed.
 * @size: Size of the said array.
 * @cmp: Third party function.
 *
 * Return: -1 if no int is found, a non-neg, non-zero int otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter, checker;

	counter = 0;
	if (size < 0)
		return (-1);
	while (counter < size)
	{
		checker = (*cmp)(*(array + counter));
		if (checker > 0)
			return (counter);
		counter++;
	}

	return (-1);
}
