#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integer input.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Sum of inputs.
 */
int op_add(int a, int b) {return (a + b); }

/**
 * op_sub - Substracts two integer input.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Substraction of inputs.
 */
int op_sub(int a, int b) {return (a - b); }

/**
 * op_mul - Multiplies two integer input.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Multiplication of inputs.
 */
int op_mul(int a, int b) {return (a * b); }

/**
 * op_div - Divides two integer input.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Division of inputs.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes modulo of two integer input.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Modulo of inputs.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
