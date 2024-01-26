#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Selects the correct function based on the operator.
 * @s: Operator.
 *
 * Return: Pointer to the correct operator.
 */
int (*get_op_func(char *s))()
{
	int counter;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	counter = 0;
	while (counter < 5)
	{
		if (ops[counter].op[0] == s[0])
			return (ops[counter].f);
		counter++;
	}

	return (NULL);
}
