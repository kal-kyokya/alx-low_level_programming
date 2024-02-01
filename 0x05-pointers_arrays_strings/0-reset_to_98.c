#include "main.h"

/**
 * reset_to_98 - Sets value of int to 98 using affiliated pointer.
 * @n: Pointer to integer.
 *
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
	int *x;

	x = n;
	*(x) = 98;
}
