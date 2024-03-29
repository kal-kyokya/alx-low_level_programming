#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Computes addition of all optional input passed to it.
 * @arg_num: Number of arguments to be passed inside function.
 *
 * Return: The resulting sum of inputs or 0 if none is passed.
 */
int sum_them_all(const unsigned int arg_num, ...)
{
	va_list ptr_to_arg;
	unsigned int sum, counter;

	counter = sum = 0;
	if (arg_num == 0)
		return (0);
	va_start(ptr_to_arg, arg_num);
	while (counter < arg_num)
	{
		sum += va_arg(ptr_to_arg, int);
		counter++;
	}
	va_end(ptr_to_arg);

	return (sum);
}
