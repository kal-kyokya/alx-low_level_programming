#include "main.h"

/**
 * swap_int - Switches the value of two integers.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
